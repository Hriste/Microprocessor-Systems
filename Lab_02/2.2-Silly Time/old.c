/*  Names:Christina Paolicelli
    Section: 4
    Date:2/24/15
    File name: Lab 1-2
    Description:
*/
/*
 
  This program is for lab 1-2 and executes a simple reaction time game
*/
 
#include <c8051_SDCC.h>// include files. 
#include <stdio.h>
#include <stdlib.h>
 
//-----------------------------------------------------------------------------
// Function Prototypes
//-----------------------------------------------------------------------------
void Port_Init(void);      // Initialize ports for input and output
void Timer_Init(void);     // Initialize Timer 0 
void Interrupt_Init(void); //Initialize interrupts
void Timer0_ISR(void) __interrupt 1;
unsigned char random(void);
void putChar(char);
 
//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------
 
unsigned int Counts = 0;
char turns =0;
char correct=0;
unsigned char working;
 
 
//***************
void main(void)
{
 
    unsigned char temp;
   // bit toggle=0;
    Sys_Init();      // System Initialization
    Port_Init();     // Initialize ports 2 and 3 
    Interrupt_Init(); // Initilize Interrupt
    Timer_Init();    // Initialize Timer 0 
    putchar(' ');    
    printf("Start\r\n");
 
     
    while (1) 
    {
     //   while( SS ); // while SS is OFF (high), wait for SS to be set ON
        TR0 = 1;     // Timer 0 enabled
    	if (Counts>255){printf("WE DID IT");Counts =0;}     
 	
     
    }
     
}
 
//***************
void Port_Init(void)
{
    // use Port configuration from Lab 1-1
    // adding the output bit for LED1
 
    // Port 3
    //P3MDOUT |= 0xF8; 
    //P3 |= 0x04; // set Port 3 input pins to high impedance state (fill in the blank)
 
    // Port 2
    // configure Port 2 as needed
//    P2MDOUT &= 0xFE;
  //  P2 |= ~0xFE;
 
}
 
void Interrupt_Init(void)
{
    IE |= 0x02;      // enable Timer0 Interrupt request, page 44
    EA = 1;       // enable global interrupts
}
//***************
void Timer_Init(void)
{
 
    CKCON |= 0x08;  // Timer0 uses SYSCLK as source
    TMOD &= ~0x0F;   // clear the 4 least significant bits
    TMOD |= 0x01;   // Timer0 in mode 1
 
    TR0 = 0;           // Stop Timer0
    TL0 = 0;           // Clear low byte of register T0
    TH0 = 0;           // Clear high byte of register T0
 
}
 
 
//***************
void Timer0_ISR(void) __interrupt 1
{
    TF0=0;
    Counts++;
// add interrupt code here, in this lab, the code will increment the 
// global variable 'counts'
}
 
