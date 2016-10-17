//Adam Nils
//Lab 3
//
//
//Includes
#include <stdio.h>  
#include "C8051F120.h"
#include <putget.h>

#define EXTCLK      22118400            // External oscillator frequency in Hz
#define SYSCLK      22118400            // Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE    115200              // UART baud rate in bps
//------------------
char C;
int q;
int U1F;
int U0F;
int FLAG;
//-------------------
void main(void);
void PORT_INIT();
void UART0_INIT();
void SYSCLK_INIT();
void Interrupt_INIT();

void UART0_ISR (void) __interrupt 4;
void UART1_ISR (void) __interrupt 20;

void main(void)
{
    WDTCN = 0xDE;                       // Disable the watchdog timer
    WDTCN = 0xAD;

    PORT_INIT();                        // Initialize the Crossbar and GPIO
    SYSCLK_INIT();                      // Initialize the oscillator
    UART0_INIT();                       // Initialize UART0
	Interrupt_INIT();
	SFRPAGE   = UART0_PAGE;
	while(1)
	{
		/*
		if(FLAG)
		{
			printf("%d",RI1);
			FLAG = 0;
		}
		*/
		if(U0F == 1)
		{
			SFRPAGE = UART0_PAGE;
			C = SBUF0;
			printf("%c",C);
			SFRPAGE = UART1_PAGE;
			printf("%c",C);
			U0F = 0;
		}
		if(U1F == 1)
		{
			SFRPAGE = UART1_PAGE;
			C = SBUF1;
			printf("%c",C);
			SFRPAGE = UART0_PAGE;
			printf("%c",C);
			U1F = 0;
		}
		if(q)
		{
			ES0 = 1;
			q = 0;
			
		}
		else
		{
			ES0 = 0;
			q = 1;
		}

	}
}

void UART0_ISR (void) __interrupt 4
{
	SFRPAGE = UART0_PAGE;
	if(RI0)
	{
		U0F = 1;
		RI0 = 0;
	}

}

void UART1_ISR (void) __interrupt 20
{
	//FLAG = 1;
	SFRPAGE = UART1_PAGE;
	if(RI1)
	{
		U1F = 1;
		RI1 = 0;
	}

}

void PORT_INIT(void)
{    
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page

    SFRPAGE  = CONFIG_PAGE;
    
	P0MDOUT   = 0x05;
	P0 = ~ 0x05;
    XBR0      = 0x04;
    XBR2      = 0x44;

    SFRPAGE  = SFRPAGE_SAVE;            // Restore SFR page
}




void UART0_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page

    SFRPAGE = TIMER01_PAGE;
    /*
	TMOD   &= ~0xF0;
    TMOD   |=  0x20;                    // Timer1, Mode 2, 8-bit reload
    TH1     =  0xF4;    // Set Timer1 reload baudrate value T1 Hi Byte
    CKCON  |= 0x10;                     // Timer1 uses SYSCLK as time base
    //TL1     = TH1;
    TR1     = 1;                        // Start Timer1
	*/
	///*
	TH1 =           0xA0;
	TL1 = TH1;
	TMOD =          0x20;
	CKCON =         0x10;
    TR1     = 1;                        // Start Timer1
	//*/
    SFRPAGE = UART0_PAGE;
    SCON0   = 0x70;                     // Mode 1, 8-bit UART, enable RX
    SSTA0   = 0x15;                     // SMOD0 = 1
    TI0     = 1;                        // Indicate TX0 ready

	SFRPAGE = UART1_PAGE;
	SCON1 =   0x10;
	TI1 = 1;

	SFRPAGE = TMR2_PAGE;

	RCAP2H =    0xFF;
	RCAP2L =    0x70;

	TMR2CF = 	0x08;
	TMR2CN = 	0x04;
	TR2 = 1;

    SFRPAGE = SFRPAGE_SAVE; 
}


void SYSCLK_INIT(void)
{
    int i;
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page

    SFRPAGE = CONFIG_PAGE;
    OSCXCN  = 0x67;                     // Start ext osc with 22.1184MHz crystal
    for(i=0; i < 256; i++);             // Wait for the oscillator to start up
    while(!(OSCXCN & 0x80));
    CLKSEL  = 0x01;
    OSCICN  = 0x00;

    SFRPAGE = CONFIG_PAGE;
    PLL0CN  = 0x04;
    SFRPAGE = LEGACY_PAGE;
    FLSCL   = 0x10;
    SFRPAGE = CONFIG_PAGE;
    PLL0CN |= 0x01;
    PLL0DIV = 0x01;
    PLL0FLT = 0x01;
    PLL0MUL = 0x01;
    for(i=0; i < 256; i++);
    PLL0CN |= 0x02;
    while(!(PLL0CN & 0x10));
    CLKSEL  = 0x02;

    SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}
void Interrupt_INIT()
{	
	//IE = 0x38;
	EA = 1;
	ES0 = 1;
	EIE2 = 0x40;
}