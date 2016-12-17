#include <c8051f040.h>
#include "putget.h"
#include <stdio.h>
#include "ccanregs.h"
#include "putget.h"	
//Globals --------------------------

#define SYSCLK 22118400
static char buf[40]; // for sprintf( )
// This is an opaque data type that represents one of the hardware CAN buffers
// In actuality this is a pointer at a group of SFRs, so don't mess with it!
typedef unsigned char CAN_BUFFER;

//Function Declrations -------------------------------
void init_sysclk( );
// Initialize the CAN subsystem
void can_init( );
// Get a handle to a free CAN transmission buffer
CAN_BUFFER can_get_tx_buf( );
// Set a standard address for a buffer
void can_set_address_std(CAN_BUFFER buf, unsigned long addr);
// Set an extended address into a buffer
void can_set_address_ext(CAN_BUFFER buf, unsigned long addr);
// Set the buffer's data
void can_set_buffer_data(
	CAN_BUFFER buf, unsigned char *data_in, unsigned char length
);
// Transmit Data Frame
void can_send_tx_buf(CAN_BUFFER buf);
// Return a buffer with the next message in the receive queue
CAN_BUFFER can_get_rx_msg( );

// Get the address from a CAN_BUFFER
unsigned long can_get_address(CAN_BUFFER buf);

// Get the DLC from a CAN_BUFFER
unsigned char can_get_dlc(CAN_BUFFER buf);

// Get a data byte from a CAN_BUFFER
unsigned char can_get_data_byte(CAN_BUFFER buf, unsigned char index);

// Free the buffer for a new message
void can_free_rx_buf(CAN_BUFFER buf);

// Transmit Remote Frame
void can_send_rtr(CAN_BUFFER buf);

//Random Init Stuff that for some reason goes at the top ----------------
//------------------------------------------------

void init_xbar( ) {
	char save = SFRPAGE;

	SFRPAGE = CONFIG_PAGE;
	XBR0 = 0x04; // enable UART0
	XBR1 = 0x00; // enable nothing
	XBR2 = 0x40; // enable the crossbar
	XBR3 = 0x80; // enable CAN

	P0MDOUT &= ~0x02; // RX pin input
	P0MDOUT |= 0x01; // TX

	// write "0xdead" to the watchdog register, disabling the watchdog
	WDTCN = 0xde;
	WDTCN = 0xad; 

	SFRPAGE = save;
}


void boot_system( ) {
	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
	SFRPAGE = CONFIG_PAGE;
	
	init_sysclk( );
	init_xbar();
	//uart0_init( );
	can_init( );
	printf("Hello World!\r\n");

	EA = 1; /* enable interrupts now that everything is initialized */

	SFRPAGE = SFRPAGE_SAVE;
}

void main( ) {
	CAN_BUFFER canbuf;
	boot_system( );


	while (1) {
		printf("getting transmit buffer\r\n");
		canbuf = can_get_tx_buf( );
		printf("setting message ID\r\n");
		//can_set_address_ext(canbuf, 0x12345678);
		can_set_address_std(canbuf,0x7df);
		printf("setting data\r\n");
		can_set_buffer_data(canbuf, "\x01\x02\x03\x04\x05\x06\x07\x08", 8);
		printf("sending buffer\r\n");
		can_send_tx_buf(canbuf);		
		printf("message sent successfully\r\n");

		if (canbuf = can_get_rx_msg( )) {
			printf("got CAN message in!\r\n");
			printf("ID=%04lx\r\n", can_get_address(canbuf));
			printf("DLC=%d\r\n", can_get_dlc(canbuf));
			printf("data0=%02x\r\n", can_get_data_byte(canbuf, 0));
			printf("data1=%02x\r\n", can_get_data_byte(canbuf, 1));
			printf("data2=%02x\r\n", can_get_data_byte(canbuf, 2));
			printf("data3=%02x\r\n", can_get_data_byte(canbuf, 3));
			printf("data4=%02x\r\n", can_get_data_byte(canbuf, 4));
			printf("data5=%02x\r\n", can_get_data_byte(canbuf, 5));
			printf("data6=%02x\r\n", can_get_data_byte(canbuf, 6));
			printf("data7=%02x\r\n", can_get_data_byte(canbuf, 7));
			can_free_rx_buf(canbuf);
		}
	}

}

//-- Functions that are not the main function -----
static unsigned short can_read_register(unsigned char addr) {
	unsigned short ret;
	char save = SFRPAGE;
	SFRPAGE = CAN0_PAGE;
	CAN0ADR = addr;
	ret = (CAN0DATH << 8) | CAN0DATL;	
	SFRPAGE = save;	
	return ret;
}

static void can_write_register(unsigned char addr, unsigned short dat) {
	char save = SFRPAGE;
	SFRPAGE = CAN0_PAGE;
	CAN0ADR = addr;
	CAN0DATH = dat >> 8;
	CAN0DATL = dat;
	SFRPAGE = save;		
}


static void can_setup_baud_rate( ) {
	// configure CAN baud rate
	// this should result in ~500kbps with a 22.1184MHz clock
	can_write_register(BITREG, 0x2641);
}

void can_init( ) {

	char SFRPAGE_SAVE = SFRPAGE;

	// enable CAN configuration
	SFRPAGE = CAN0_PAGE;
	CAN0CN = 0x41; 

	// Set the CAN baud rate	
	can_setup_baud_rate( );

	// Set the CAN module to basic mode
	CAN0CN = 0xc1;

	SFRPAGE = UART0_PAGE;
	printf("CANTSTR=%02x\r\n", can_read_register(CANTSTR));
	can_write_register(CANTSTR, 0x0004);
	printf("CANTSTR=%02x\r\n", can_read_register(CANTSTR));
	SFRPAGE = CAN0_PAGE;
	
	// initialize the receive buffer
	can_write_register(IF2CMDMSK, 0x0073/*0x00b8*/);
	can_write_register(IF2ARB1, 0x0000);
	can_write_register(IF2ARB2, 0x8000);
	can_write_register(IF2MSGC, /*0x0488*/0x0000);


	// return to normal operation (leave test mode enabled)
	CAN0CN = 0x0080;

	SFRPAGE = SFRPAGE_SAVE;
}


static void can_dump_if1( ) {
	printf("IF1MASK1=0x%04x\r\n", can_read_register(IF1MSK1));
	printf("IF1MASK2=0x%04x\r\n", can_read_register(IF1MSK2));
	printf("IF1ARB1=0x%04x\r\n", can_read_register(IF1ARB1));
	printf("IF1ARB2=0x%04x\r\n", can_read_register(IF1ARB2));
	printf("IF1MSGCON=0x%04x\r\n", can_read_register(IF1MSGC));
	printf("IF1DATA1=0x%04x\r\n", can_read_register(IF1DATA1));
	printf("IF1DATA2=0x%04x\r\n", can_read_register(IF1DATA2));
	printf("IF1DATB1=0x%04x\r\n", can_read_register(IF1DATB1));
	printf("IF1DATB2=0x%04x\r\n", can_read_register(IF1DATB2));
	printf("IF1CMDMSK=0x%04x\r\n", can_read_register(IF1CMDMSK));
	printf("IF1CMDRQST=0x%04x\r\n", can_read_register(IF1CMDRQST));
}

static void can_dump_if2( ) {									// function added 12/5/12
	printf("IF2MASK1=0x%04x\r\n", can_read_register(IF2MSK1));
	printf("IF2MASK2=0x%04x\r\n", can_read_register(IF2MSK2));
	printf("IF2ARB1=0x%04x\r\n", can_read_register(IF2ARB1));
	printf("IF2ARB2=0x%04x\r\n", can_read_register(IF2ARB2));
	printf("IF2MSGCON=0x%04x\r\n", can_read_register(IF2MSGC));
	printf("IF2DATA1=0x%04x\r\n", can_read_register(IF2DATA1));
	printf("IF2DATA2=0x%04x\r\n", can_read_register(IF2DATA2));
	printf("IF2DATB1=0x%04x\r\n", can_read_register(IF2DATB1));
	printf("IF2DATB2=0x%04x\r\n", can_read_register(IF2DATB2));
	printf("IF2CMDMSK=0x%04x\r\n", can_read_register(IF2CMDMSK));
	printf("IF2CMDRQST=0x%04x\r\n", can_read_register(IF2CMDRQST));
}

unsigned long can_get_address(CAN_BUFFER buf) {
	unsigned long ret;
	unsigned short arb1, arb2;
	arb1 = can_read_register(IF2ARB1);
	arb2 = can_read_register(IF2ARB2);
	//printf("arb1=0x%04x arb2=0x%04x\r\n", arb1, arb2);
	if (arb2 & 0x4000) { // if message has an extended ID
		ret = arb2 & 0x1fff;
		ret <<= 16;
		ret |= arb1;
	} else {
		// only 11 bit ID present

		arb1 &= 0x07ff;
		ret = arb1;
		//arb1 = (arb1 & 0x07ff)
		//return arb1;
	}
	
	return ret;
}


void can_set_address_std(CAN_BUFFER buf, unsigned long addr) {
	can_write_register(IF1ARB1, 0x0000);
	can_write_register(IF1ARB2, 0xa000 | ((addr & 0x7ff) << 2));
}

void can_set_address_ext(CAN_BUFFER buf, unsigned long addr) {
	can_write_register(IF1ARB1, addr);
	can_write_register(IF1ARB2, 0xe000 | (addr >> 16));
}

void can_set_buffer_data(
	CAN_BUFFER buf, unsigned char *data_in, unsigned char length
) {
	can_write_register(IF1DATA1, data_in[0] | (data_in[1] << 8));
	can_write_register(IF1DATA2, data_in[2] | (data_in[3] << 8));
	can_write_register(IF1DATB1, data_in[4] | (data_in[5] << 8));
	can_write_register(IF1DATB2, data_in[6] | (data_in[7] << 8));
	can_write_register(IF1MSGC, 0x8080 | length);
}

void can_send_tx_buf(CAN_BUFFER buf) {
	//can_dump_if1( );
	can_write_register(IF1ARB2, (can_read_register(IF1ARB2) | 0x2000));	// set dir = 1. line added
	can_write_register(IF1CMDMSK, 0x00ff); // unmask everything
	can_write_register(IF1CMDRQST, 0x8001); // initiate transmit
	while (can_read_register(IF1CMDRQST) & 0x8000) { // wait for completion
		//can_dump_if1( );
	}
}

void can_send_rtr(CAN_BUFFER buf) {										// function added 12/5/12
	//can_dump_if1( );
	can_write_register(IF1ARB2, (can_read_register(IF1ARB2) & 0xDFFF));	// set dir = 0
	can_write_register(IF1CMDMSK, (can_read_register(IF1CMDMSK) | 0x0004)); // set txrqst = 1
	can_write_register(IF1CMDRQST, 0x8001); // initiate transmit
	while (can_read_register(IF1CMDRQST) & 0x8000) { // wait for completion
		//can_dump_if1( );
	}
}

// wait for a CAN buffer to be free and then return it
CAN_BUFFER can_get_tx_buf( ) {
	return (CAN_BUFFER) 1; // only 1 buffer to use
}

// get the next full CAN receive buffer (or 0 if no messages ready)
CAN_BUFFER can_get_rx_msg( ) {
	//printf("IF2MSGC=0x%04x\r\n", can_read_register(IF2MSGC));
	if (can_read_register(IF2MSGC) & 0x8000) {
		//printf("IF2ARB1=0x%04x\r\n", can_read_register(IF2ARB1));
		//printf("IF2ARB2=0x%04x\r\n", can_read_register(IF2ARB2));
		//printf("IF2MSGC=0x%04x\r\n", can_read_register(IF2MSGC));
		return 1;
	} else {
		return 0;
	}
}

// Free the received message buffer for another message off the bus
void can_free_rx_buf(CAN_BUFFER buf) {
	can_write_register(IF2MSGC, 0x0000);
}

unsigned char can_get_dlc(CAN_BUFFER buf) {
	return can_read_register(IF2MSGC) & 0x0f;
}


unsigned char can_get_data_byte(CAN_BUFFER buf, unsigned char index) {
	switch (index) {
		case 0:
			return can_read_register(IF2DATA1) & 0xff;
		case 1:
			return can_read_register(IF2DATA1) >> 8;	
		case 2:
			return can_read_register(IF2DATA2) & 0xff;
		case 3:
			return can_read_register(IF2DATA2) >> 8;			
		case 4:
			return can_read_register(IF2DATB1) & 0xff;
		case 5:
			return can_read_register(IF2DATB1) >> 8;
		case 6:
			return can_read_register(IF2DATB2) & 0xff;
		case 7:
			return can_read_register(IF2DATB2) >> 8;
		default:
			return 0;
	}

}

void init_sysclk( ) {
	char save = SFRPAGE;

	SFRPAGE = CONFIG_PAGE;
	
	OSCXCN = 0x77; // start up oscillator in crystal oscillator mode
	while (!(OSCXCN & 0x80)); // wait for crystal startup
	
	// set the system clock source to the external source
	CLKSEL = 0x01;

	SFRPAGE = save;
}