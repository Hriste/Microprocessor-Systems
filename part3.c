/// Lab 7 - CAN
// MPS Fall 2016
// Christina Paolicelli
//-------------------------------

//Includes////
#include <c8051f040.h>
#include <stdio.h>
#include "putget.h"
#include "sysinit.h"
#include "can.h"
#include "ccanregs.h"


// Global Constants///
#define EXTCLK      22118400    // External oscillator frequency in Hz
#define SYSCLK      22118400    // Outpuwt of crystal oscillator
#define BAUDRATE    28800       // UART baud rate in bps

CAN_BUFFER canbuf;
// Global Variables///

// Function Prototypes///
void main(void);
void SYSCLK_INIT(void);
void PORT_INIT(void);
void UART0_INIT(void);
void Headlights_On(void);
//Main Function //
void main(void)
{
	SYSCLK_INIT();
	PORT_INIT();
	UART0_INIT();
	can_init();
	while(1)
	{
		Headlights_On();
	}
}
//Car Functionality
void Headlights_On()
{
	unsigned char data[2] = {0x00, 0x01};
	canbuf = can_get_tx_buf();
	can_set_address_std(canbuf, 0x01); // is address the same as ID?
	can_set_buffer_data(canbuf, data, sizeof(data));
	can_send_tx_buf(canbuf);
}
//Intilizations//
void SYSCLK_INIT(void)
{
    int i;
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page SFRPAGE = CONFIG_PAGE;
    SFRPAGE = CONFIG_PAGE;

    OSCXCN = 0x67;              // Start ext osc with 22.1184MHz crystal
    for(i=0; i < 3000; i++);    // Wait for the oscillator to start up
    while(!(OSCXCN & 0x80));
    CLKSEL = 0x01;              // Switch to the external crystal oscillator
    OSCICN = 0x00	;              // Disable the internal oscillator

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}

void PORT_INIT(void)
{
    char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page
    SFRPAGE = CONFIG_PAGE;

    XBR0 = 0x04;        // Enable UART0
    XBR1 = 0x00;
    XBR2 = 0x40;        // Enable Crossbar and weak pull-up
	SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}

void UART0_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page
    SFRPAGE = TIMER01_PAGE;

    TCON = 0x40;
    TMOD &= 0x0F;
    TMOD |= 0x20;               // Timer1, Mode 2, 8-bit reload
    CKCON |= 0x10;              // Timer1 uses SYSCLK as time base
// TH1 = 256 - SYSCLK/(BAUDRATE*32)  Set Timer1 reload baudrate value T1 Hi Byte
    TH1 = 0xE8;                 // 0xE8 = 232
    TR1 = 1;                    // Start Timer1

    SFRPAGE = UART0_PAGE;
    SCON0 = 0x50;               // Mode 1, 8-bit UART, enable RX
    SSTA0 = 0x00;               // SMOD0 = 0, in this mode
                                // TH1 = 256 - SYSCLK/(baud rate * 32)

    TI0 = 1;                    // Indicate TX0 ready

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}