//------------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------------
#include <c8051f120.h>
#include <stdio.h>
#include <stdlib.h>
#include "putget.h"
//------------------------------------------------------------------------------------
// Global Constants
//------------------------------------------------------------------------------------
#define EXTCLK      22118400            // External oscillator frequency in Hz
#define SYSCLK      49766400            // Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE    115200              // UART baud rate in bps
//__sbit __at 0xA0 IN1;
//__sbit __at 0xA1 IN2;
//__sbit __at 0xA2 IN3;
//__sbit __at 0xA3 IN4;
//__sbit __at 0xB2 O1;
//__sbit __at 0xB5 O2;
//__sbit __at 0xB7 O3;
//__sbit __at 0xB0 O4;
char i;
//------------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------------
void main(void);
void SYSCLK_INIT(void);
void PORT_INIT(void);
void UART0_INIT(void);
void STARTUP(void);
void Hardware(void);

//------------------------------------------------------------------------------------
// MAIN Routine
//------------------------------------------------------------------------------------
void main(void)
{
	

    char choice;

    WDTCN = 0xDE;                       // Disable the watchdog timer
    WDTCN = 0xAD;
	
    PORT_INIT();                        // Initialize the Crossbar and GPIO
	SYSCLK_INIT();                      // Initialize the oscillator
    UART0_INIT();                       // Initialize UART0
    SFRPAGE = UART0_PAGE;               // Direct output to UART0
	
    printf("\033[2J");                  // Erase screen & move cursor to home position
	printf("\033[0m");//reset all attruites
	printf("\033[44m");//Set Background color to blue
	printf("\033[33m");//Set foreground color to yellow
	STARTUP();
 	while(1)
	{
		Hardware();	
		printf("\033[0;33;44m"); //foregground to yellow, background to blue
		choice = getchar(); // Set choice to user input

		if (choice == 0x1B) { // if choice is the <ESC> key...
			printf("[2J"); //clear screen
			STARTUP();
			}
		else if(choice <32 || choice > 126) // If non printable
		{
			printf("\033[12;25r");//makes bottom half of screen scrollable
			
			printf("\033[u");//restore previously storred cursor position
			printf("\033[5m");//blink
			printf(" The keyboard character ");
			printf("\033[37m");//foreground text to white
			printf("%02x",choice); 
			printf("\033[5;33m");// blink, and foreground txt to yellow
			printf(" is '");
			printf("\033[4m");//unerscrore
			printf("not printable");
			printf("\033[0;33;5;44m");//reset attribuites, yellow foreground, blue background 
			printf("'\n\r");
			printf("\033[s");// saves the cursor position
			printf("\007");
		}
		else{
			printf("\033[6;1H");//move cursor (6,1)
			printf("\033[0;33;44m");// foreground yellow, background blue
			printf(" The keyboard character is ");
			printf("\033[37m");//forground color to white
			putchar(choice); //output the users input
			printf("\033[33m");//foreground color to yellow
			printf("\n\r");//print newline
			}
			
			
		
	}
 }
//STARTUP FUNCTION
////
 void STARTUP(void)
 {
	i = 0;
	
	printf("\033[1B"); //moves the curser to the second row
	printf("\033[12C"); // centers text (terminal window 40col wide, text 42col long)
	printf("To end the program press <ESC> at any time. Press any key\n\r"); //print instructions again so people aren't confused
	printf("\033[3B");//moves cursor down three rows
	printf("\033[12;1H");//moves cursor to (12,1)
	printf("\033[s"); //saves current cusor position
	printf("\033[H");//moves cursor to home position
 }
 //------------------------------------------------------------------------------------
// SYSCLK_Init
//------------------------------------------------------------------------------------
//
// Initialize the system clock to use a 22.1184MHz crystal as its clock source
//
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
    PLL0DIV = 0x04;
    PLL0FLT = 0x01;
    PLL0MUL = 0x09;
    for(i=0; i < 256; i++);
    PLL0CN |= 0x02;
    while(!(PLL0CN & 0x10));
    CLKSEL  = 0x02;

    SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}

 //------------------------------------------------------------------------------------
// PORT_Init
//------------------------------------------------------------------------------------
//
// Configure the Crossbar and GPIO ports
//
void PORT_INIT(void)
{    
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page

    SFRPAGE  = CONFIG_PAGE;
    XBR0     = 0x04;                    // Enable UART0
    XBR1     = 0x00;
    XBR2     = 0x40;                    // Enable Crossbar and weak pull-up
    P0MDOUT |= 0x01;                    // Set TX0 on P0.0 pin to push-pull
    //P1MDOUT |= 0x40;                    // Set green LED output P1.6 to push-pull

	P2MDOUT |= 0xFF; // Set port 2 to output (all bits?)
	P2 &= 0x00; // set to high impedence

	P1MDOUT &= 0x00;
	P1MDIN |= 0xFF;
	//P1 = 0xFF;

    SFRPAGE  = SFRPAGE_SAVE;            // Restore SFR page
}

//------------------------------------------------------------------------------------
// UART0_Init
//------------------------------------------------------------------------------------
//
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1
//
void UART0_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page

    SFRPAGE = TIMER01_PAGE;
    TMOD   &= ~0xF0;
    TMOD   |=  0x20;                    // Timer1, Mode 2, 8-bit reload
    TH1     = -(SYSCLK/BAUDRATE/16);    // Set Timer1 reload baudrate value T1 Hi Byte
    CKCON  |= 0x10;                     // Timer1 uses SYSCLK as time base
    TL1     = TH1;
    TR1     = 1;                        // Start Timer1

    SFRPAGE = UART0_PAGE;
    SCON0   = 0x50;                     // Mode 1, 8-bit UART, enable RX
    SSTA0   = 0x10;                     // SMOD0 = 1
    TI0     = 1;                        // Indicate TX0 ready

    SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}




void Hardware(void){
//	P2 = 0x00;
	//IN1 = O1;
	//IN2 = O2;
	//IN3 = O3;
	//IN4 = O4;
	P2 = 0x03;
}