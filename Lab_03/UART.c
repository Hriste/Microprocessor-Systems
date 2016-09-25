//Lab 3.1
//Christina Paolicelli
//Microprocessor Systems - Fall 2016


//-------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------
#include <c8051f120.h>          // SFR declarations.
#include <stdio.h>              // Necessary for printf.
#include <putget.h>
//#include "compiler_defs.h"
//#include "C8051F120_defs.h"
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

void main (void)
{
	SFRPAGE = CONFIG_PAGE;
	SYSCLK_INIT();
	Port_IO_Init();
	Timer_Init();
	UART_Init();
	
	SFRPAGE = LEGACY_PAGE;//same ass UART0_PAGE
	while(1)
	{
		printf("HELLO");
	}
}
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
    TMOD      = 0x20;
    CKCON     = 0x10;
    TH1       = 0xF3;
    SFRPAGE   = TMR2_PAGE;
    TMR2CN    = 0x04;
    TMR2CF    = 0x08;
	TMR2H	  = (unsigned char) -(EXTCLK/BAUDRATE0/32);
	TMR2L = TMR2H;
    RCAP2L    = 0xEC;
     RCAP2H    = 0xFF;
}
void UART_Init()
{
    SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
	TR2		  = 1;//Start Timer 2
    SCON0     = 0x50;
	SSTA0   = 0x05;
	TI0		  = 1; // Indicate TX0 is ready
	TR1		  = 1; //Start Timer 1
    SFRPAGE   = UART1_PAGE;
    SCON1     = 0x50;

	TI1		  = 1; //Indicatie TX1 is ready
}
void Port_IO_Init()
{
    // P0.0  -  TX0 (UART0), Open-Drain, Digital
    // P0.1  -  RX0 (UART0), Open-Drain, Digital
    // P0.2  -  TX1 (UART1), Open-Drain, Digital
    // P0.3  -  RX1 (UART1), Open-Drain, Digital
    SFRPAGE   = CONFIG_PAGE;
	WDTCN   = 0xDE;             // Disable watchdog timer.
    WDTCN   = 0xAD;
	EA 		  = 1; // enable global interrupts
    XBR0      = 0x04;
    XBR2      = 0x44;
}
