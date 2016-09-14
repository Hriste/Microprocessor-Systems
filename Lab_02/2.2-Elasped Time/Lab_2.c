//MPS Lab 2.2 Code
//at interrupt trigger displays elasped time since interrupt was last triggered
// Christina Paolicelli + Alexander Chase
// /INT0 is configured to be on P0.2
// UART0 is used to communicate to the user through ProCOMM or SecureCRT
//
// This code was written and tested using the SiLabs IDE V4.90
// and SDCC.
//
//-------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------
#include <c8051f120.h>          // SFR declarations.
#include <stdio.h>              // Necessary for printf.
#include "putget.h"             // Necessary for printf
//-------------------------------------------------------------------------------------------
// Global CONSTANTS
//-------------------------------------------------------------------------------------------
#define EXTCLK      22118400    // External oscillator frequency in Hz
#define SYSCLK      49766400    // Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE    115200      // UART baud rate in bps

__bit SW2press = 0;
//LEGACY//int time = 0; // increments every tenth of a second to keep track of elasped time
//LEGACY//char quarter = 0; // increments at overflow (set to be every 1/4 of a tenth of a second)
//-------------------------------------------------------------------------------------------
// Function PROTOTYPES
//-------------------------------------------------------------------------------------------
void main(void);
void PORT_INIT(void);
void SYSCLK_INIT(void);
void UART0_INIT(void);
//LEGACY//void Timer0_ISR(void) __interrupt 1;
void SW2_ISR (void) __interrupt 0;
//-------------------------------------------------------------------------------------------
// MAIN Routine
//-------------------------------------------------------------------------------------------
void main (void)
{
    __bit restart = 0;
//    char character;
//    unsigned int delay1, delay2 = 0;
//    unsigned int randnum = 0;
//    unsigned int ones, tenths = 0;

    SFRPAGE = CONFIG_PAGE;
	IE |=0x03; //Enable interrupts 0 and 1 (SW2_ISR and timer 0 interrupt)
    PORT_INIT();                // Configure the Crossbar and GPIO.
    SYSCLK_INIT();              // Initialize the oscillator.
    UART0_INIT();               // Initialize UART0.

    SFRPAGE = LEGACY_PAGE;
    IT0     = 1;                // /INT0 is edge triggered, falling-edge.

//  SFRPAGE = UART0_PAGE;       // Direct the output to UART0
                                // printf() must set its own SFRPAGE to UART0_PAGE
    printf("\033[2J");          // Erase screen and move cursor to the home position.
    printf("MPS Interrupt Timer Test\n\n\r");
    //LEGACY//printf("Ground /INT0 on P0.2 to see the time elasped.\n\n\r");

    SFRPAGE = CONFIG_PAGE;
    EX0     = 1;                // Enable Ext Int 0 only after everything is settled.

    while (1)                   // No need to set UART0_PAGE
    {
		/*LEGACY//if(SW2press ==1){
			printf("The Pushbutton Has Been Pressed !!!!\n\r");
		//LEGACY//	printf(time);
			printf(" tenths of a second have passed since the program started/ or you last pused the button.");
		//LEGACY//	quarter = 0;
			//LEGACY//time = 0;
			}*/
    }
}
//-------------------------------------------------------------------------------------------
// Interrupt Service Routines
//-------------------------------------------------------------------------------------------
//
// This routine stops Timer0 when the user presses SW2.
//
/*LEGCAYvoid SW2_ISR (void) __interrupt 0   // Interrupt 0 corresponds to vector address 0003h.
// the keyword "interrupt" defines this as an ISR and the number is determined by the 
// Priority Order number in Table 11.4 in the 8051 reference manual.
{
    SW2press=1;
}*/

/*void Timer0_ISR(void) __interrupt 1
{
	TF0  = 0; //reset the flag
	if(quarter<3){quarter++;}
	else if (quarter == 3){time++; quarter=0;}
	TL0=0xFFFF-46080;
	TH0=(0xFFFF-46080)>>8;// Sets Timer 0 to start such that it will overflow at .025 seconds
}*/

//-------------------------------------------------------------------------------------------
// PORT_Init
//-------------------------------------------------------------------------------------------
//
// Configure the Crossbar and GPIO ports
//
void PORT_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.

    SFRPAGE = CONFIG_PAGE;
    WDTCN   = 0xDE;             // Disable watchdog timer.
    WDTCN   = 0xAD;
    EA      = 1;                // Enable interrupts as selected.

    XBR0    = 0x04;             // Enable UART0.
    XBR1    = 0x04;             // /INT0 routed to port pin.
    XBR2    = 0x40;             // Enable Crossbar and weak pull-ups.

    P0MDOUT = 0x01;             // P0.0 (TX0) is configured as Push-Pull for output.
            // P0.1 (RX0) is configure as Open-Drain input.
            // P0.2 (SW2 through jumper wire) is configured as Open_Drain for input.
    P0      = 0x06;             // Additionally, set P0.0=0, P0.1=1, and P0.2=1.

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
}

//-------------------------------------------------------------------------------------------
// SYSCLK_Init
//-------------------------------------------------------------------------------------------
//
// Initialize the system clock
//
void SYSCLK_INIT(void)
{
    int i;

    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.

    SFRPAGE = CONFIG_PAGE;
    OSCXCN  = 0x67;             // Start external oscillator
    for(i=0; i < 256; i++);     // Wait for the oscillator to start up.
    while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
    CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
    OSCICN  = 0x00;             // Disable the internal oscillator.

    SFRPAGE = CONFIG_PAGE;
    PLL0CN  = 0x04;
    SFRPAGE = LEGACY_PAGE;
    FLSCL   = 0x10;
    SFRPAGE = CONFIG_PAGE;
    PLL0CN |= 0x01;
    PLL0DIV = 0x04;
    PLL0FLT = 0x01;
    PLL0MUL = 0x09;
    for(i=0; i < 256; i++);
    PLL0CN |= 0x02;
    while(!(PLL0CN & 0x10));
    CLKSEL  = 0x02;             // SYSCLK derived from the PLL.

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
}

//-------------------------------------------------------------------------------------------
// UART0_Init
//-------------------------------------------------------------------------------------------
//
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1.
// Also Configures Timer0, used for code functionality
//
void UART0_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.

    SFRPAGE = TIMER01_PAGE;
    TMOD   &= ~0xF0;
    TMOD   |=  0x21;            // Timer1, Mode 2: 8-bit counter/timer with auto-reload.//Timer0, Mode 1: 16 bit counter/timer
	TH1     = (unsigned char)-(SYSCLK/BAUDRATE/16); // Set Timer1 reload value for baudrate
    CKCON  |= 0x10;             // Timer1 uses SYSCLK as time base.// Timer0 uses SYSCLK/12
    TL1     = TH1;
    TR1     = 1;                // Start Timer1.
	//TL0=0xFFFF-46080;
	//TH0=(0xFFFF-46080)>>8;// Sets Timer 0 to start such that it will overflow at .025 seconds
	//TR0 = 1; //Start Timer0
    SFRPAGE = UART0_PAGE;
    SCON0   = 0x50;             // Set Mode 1: 8-Bit UART
    SSTA0   = 0x10;             // UART0 baud rate divide-by-two disabled (SMOD0 = 1).
    TI0     = 1;                // Indicate TX0 ready.

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
}

