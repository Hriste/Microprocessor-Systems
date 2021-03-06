//Microprocesor Systems Lab 4.1
//Christina Paolicelli
//Voltmeter

//-------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------
#include <c8051f120.h>          // SFR declarations.
#include <stdio.h>              // Necessary for printf.
#include <putget.h>
#include <math.h>
//-------------------------------------------------------------------------------------------
// Global CONSTANTS
//-------------------------------------------------------------------------------------------
#define EXTCLK      22118400    // External oscillator frequency in Hz
#define BAUDRATE0	9600

//Global Variables
float running = 0;
int run = 0x00;
float min = 100;
int hmin = 0xFF;
float max = 0;
int hmax = 0x00;
float trials = 0.0;
//-------------------------------------------------------------------------------------------
// Function PROTOTYPES
//-------------------------------------------------------------------------------------------
void main (void);
void Port_IO_Init(void);
void Timer_Init(void);
void UART_Init(void);
void SYSCLK_INIT(void);
void ADC_INIT(void);
unsigned int ADC_read(void);
void score(unsigned int);
///Main Function
void main (void)
{
	
	SFRPAGE = CONFIG_PAGE;
	SYSCLK_INIT();
	Port_IO_Init();
	Timer_Init();
	UART_Init();
	ADC_INIT();
	SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
	printf("\033[2J");
	//printf("UART is working \n\r");
	printf("Current: \n\rAverage: \n\rMin: \n\rMax:\n\r");
	while(1)
	{
		SFRPAGE = LEGACY_PAGE;
		
		if(P1 == 0x00)
		{
			score(ADC_read());
		}
		
	}
	
}
//functional functions
unsigned int ADC_read()
{
	AMX0SL = 0;//select pin
	ADC0CN &= ~(0x20);// reset for reading
	ADC0CN |= 0x10;
	while((ADC0CN & 0x20)==0); // wait for conversion to finish
	return ADC0;
}
void score(unsigned int value)
{
	float volts;
	int hvolts;
	//printf("\033[2J");
	volts = (value/1000.0);
	volts = .5860806*volts;
	printf("\033[1;10H");
	printf_fast_f("%7.6f, 0x",volts);
	hvolts = value/15.9961;//9375;
	if (hvolts<0x10){printf("0");}
	printf("%X", hvolts);
	printf("\033[2;9H");
	running = (running*trials + volts)/(trials+1);
	run  = (run*trials + hvolts)/(trials+1);
	trials ++;
	if(volts<min){min = volts;hmin=hvolts;}
	if(volts>max){max = volts;hmax=hvolts;}
	printf_fast_f("%7.6f, 0x",running);
	if (run<0x10){printf("0");}
	printf("%X \n\r",run);
	printf("\033[3;5H");
	printf_fast_f("%7.6f, 0x",min);
	if (hmin<0x10){printf("0");}
	printf("%X",hmin);
	printf("\033[4;5H");
	printf_fast_f("%7.6f,0x",max);
	if (hmax<0x10){printf("0");}
	printf("%X",hmax);
	
}
//Intilizations
void SYSCLK_INIT()
{
	int j;
	SFRPAGE = CONFIG_PAGE;
    OSCXCN  = 0x67;             // Start external oscillator
    for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
    while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
    CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
    OSCICN  = 0x00;             // Disable the internal oscillator.
}

void Timer_Init()
{
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
}

void Port_IO_Init()
{
	SFRPAGE   = CONFIG_PAGE;
	WDTCN   = 0xDE;             // Disable watchdog timer.
    WDTCN   = 0xAD;
	XBR0 = 0x04; // enable UART0
	XBR2 = 0x40;//enable crossbar
	
	P0MDOUT = 0x01;
	//TX0 P0.0 (output)
	P0 = 0x02;
	//RX0 P0.1 (input)
	
	P1MDOUT = 0x00;
	P1 = 0x01; 
	//Push Button P1.0
	
	EA = 1; //enable global interrupts
}
void ADC_INIT()
{
	SFRPAGE = ADC0_PAGE;
	REF0CN = 0x03;
	AMX0CF = 0x00;
	ADC0CF = 0x40;
	ADC0CN = 0x80; // enable ADC conversion
}