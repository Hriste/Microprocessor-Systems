//Lab 3.3 - 
//Christina Paolicelli
//Microprocessor Systems - Fall 2016
// SPI communications funnness 

//-------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------
#include <c8051f120.h>          // SFR declarations.
#include <stdio.h>              // Necessary for printf.
#include <putget.h>
//-------------------------------------------------------------------------------------------
// Global CONSTANTS
//-------------------------------------------------------------------------------------------
#define EXTCLK      22118400    // External oscillator frequency in Hz
#define BAUDRATE0	9600
#define BAUDRATE1	115200
//-------------------------------------------------------------------------------------------
// Function PROTOTYPES
//-------------------------------------------------------------------------------------------
void main (void);
void Port_IO_Init(void);
void Timer_Init(void);
void UART_Init(void);
void SYSCLK_INIT(void);
void SPI0_INIT(void);
void Timer1_ISR(void) __interrupt 1;

char read(void);
unsigned char dread(void);
void write(char);
void local(char);
void foreign(char);
void dummy(void);
//void UART0_INTERRUPT(void)  __interrupt 4;
////Global Variables
int local_ct = 1;
int alien_ct = 14;
int counts = 0;
////FUNCTIONS
void main (void)
{
	char c;
	int i;
	char d;

	SFRPAGE = CONFIG_PAGE;
	SYSCLK_INIT();
	Port_IO_Init();
	Timer_Init();
	UART_Init();
	SPI0_INIT();
	SFRPAGE = LEGACY_PAGE;
	printf("at least i'm here");
	ES0 = 1;
	//EA = 1;
	//IE |=0x02;
//	ET1 = 1;
	SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
	printf("\033[2J");
	printf("I'm alive");
	while(1)
	{
			
		if(RI0)
		{
			RI0 = 0;
			c = SBUF0;
			local(c);
			write(c);
			SFRPAGE = UART0_PAGE;
			for (i=0;i<101;i++);
			d = read();
			SPIF =0;
			SFRPAGE = UART0_PAGE;
			foreign(d);
			if(d == 0x7F){dummy();}
				
			SPIF =0;
		}
	}
	
}
void local(char c)
{
	// controls upper half of screen and prints out user inputted chars
	printf("\033[%d;1H",local_ct);
	if(local_ct < 13){local_ct++;}
	else{printf("\033[1J");local_ct=2;printf("\033[1;1H");}
	while(!TI0);
	TI0 = 0;
	SBUF0 = c;
}

void foreign(char c)
{
	//controls bottom half of screen and outputs SPI received chars
	printf("\033[%d;1H",alien_ct);
	if(alien_ct < 25){alien_ct++;}
	else{printf("\033[12;1H");printf("\033[J");alien_ct = 12;printf("\033[12;1H");}
	while(!TI0);
	TI0 = 0;
	SBUF0 = c;
}
char read ()
{
	int i;
	SFRPAGE = SPI0_PAGE;
	NSSMD0 = 0;
	for (i=0;i<101;i++);
	while(!SPIF);
	return SPI0DAT;
}
unsigned char dread ()
{
	int i;
	char dumb = 0x66;
	SFRPAGE = SPI0_PAGE;
	NSSMD0 = 0;
	for (i=0;i<101;i++);
	while(SPIF){SPIF=0;}//make sure SPIF is not busy
	SPI0DAT = dumb;
	while(!SPIF);
	for (i=0;i<101;i++);
	counts =0 ;
	while(counts < 1);
	printf("I made it \n\r");
	return SPI0DAT;
}

void write(char c)
{
	int i;
	SFRPAGE = SPI0_PAGE;
	SPIF = 0;
	NSSMD0 = 1;
	while(SPIF){SPIF=0;}//make sure SPIF is not busy
	SPI0DAT = c;
	while(!SPIF);
	for (i=0;i<101;i++);
	NSSMD0 = 0;
}

void dummy()
{
	unsigned char r;
	char dumb;
	int i;
	int j;
	r = 0x00;
	dumb = 0x64;
	//DEL is 0xF7
	// we want to call this when DEL is pressed
	printf("   you pressed <DEL>");
	while(r!=0xFF)//for(j=0;j<100;j++)
	{
		//write(dumb);
		//SPIF =0;
		//for (i=0;i<101;i++);
		r = dread();
		//printf("two");
		//SPIF =0;
		foreign(r);
		for (i=0;i<101;i++);
	}

}
/// ISRs
void Timer1_ISR(void) __interrupt 1
{
	SFRPAGE = TIMER01_PAGE;
	TF1 = 0;
	counts ++;
//	printf("It's not totally a trap");
	TL1 = 0;
	TH1 = 0;
}

/// INITILIZATIONS
void SYSCLK_INIT()
{
	int j = 0;

	SFRPAGE = CONFIG_PAGE;
    OSCXCN  = 0x67;             // Start external oscillator
    for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
    while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
    CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
    OSCICN  = 0x00;             // Disable the internal oscillator.
}

void Timer_Init()
{
    SFRPAGE   = TIMER01_PAGE;
    TCON      = 0x40;
    TMOD      = 0x20;//timer 1 in 16 bit mode
    CKCON     = 0x10;
    TH1       = 0xA0;
	TL1 = TH1;
//	TR1 = 1;
	printf("timer 1 set");
    SFRPAGE   = TMR2_PAGE;
    TMR2CN    = 0x04;
    TMR2CF    = 0x08;
	TMR2H	  = 0xFF;
	TMR2L 	  = 0x70;
    RCAP2L    = 0x70;
    RCAP2H    = 0xFF;
}
void UART_Init()
{
    SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
	TR2		  = 1;//Start Timer 2
    SCON0     = 0x50;
	SSTA0   = 0x15;
	TI0		  = 1; // Indicate TX0 is ready
	TR1		  = 1; //Start Timer 1
   // SFRPAGE   = UART1_PAGE;
    //SCON1     = 0x50;
	//TI1		  = 1; //Indicatie TX1 is ready
}
void Port_IO_Init()
{
	SFRPAGE   = CONFIG_PAGE;
    // P0.0  -  TX0 (UART0)
    // P0.1  -  RX0 (UART0), 
	// P0.2	 -  SCK
	// P0.3  -  MISO
	// P0.4  -  MOSI
	// P0.5  -  NSS
	P0MDOUT = 0x35;
	P0 = 0x8A;
    // P0.6  -  TX1 (UAT1)
    // P0.7  -  RX1 (UART1)
    
	WDTCN   = 0xDE;             // Disable watchdog timer.
    WDTCN   = 0xAD;
	EA 		  = 1; // enable global interrupts
    XBR0      = 0x06;
    XBR2      = 0x40;
}
void SPI0_INIT()
{
	SFRPAGE = SPI0_PAGE;
	SPI0CFG = 0x40;
	//SPI0CFG &= 0x4F;
	SPI0CN = 0x0D;
	SPI0CKR =  0x26;
	SPIF = 1;
}