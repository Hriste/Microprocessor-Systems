#include <c8051f040.h>
//#include "putget.h"
#include <stdio.h>

//Globals --------------------------

#define SYSCLK 22118400
static char buf[40]; // for sprintf( )

// Initialize the CAN subsystem
//void can_init( );
// This is an opaque data type that represents one of the hardware CAN buffers
// In actuality this is a pointer at a group of SFRs, so don't mess with it!
typedef unsigned char CAN_BUFFER;

// CAN Protocol Register Index for CAN0ADR, from TABLE 18.1 of the C8051F040
// datasheet
////////////////////////////////////////////////////////////////////////////////
#define CANCTRL            0x00                 //Control Register
#define CANSTAT            0x01                 //Status register
#define ERRCNT             0x02                 //Error Counter Register
#define BITREG             0x03                 //Bit Timing Register
#define INTREG             0x04                 //Interrupt Low Byte Register
#define CANTSTR            0x05                 //Test register
#define BRPEXT             0x06                 //BRP Extension         Register
////////////////////////////////////////////////////////////////////////////////
//IF1 Interface Registers
////////////////////////////////////////////////////////////////////////////////
#define IF1CMDRQST         0x08                 //IF1 Command Rest      Register
#define IF1CMDMSK          0x09                 //IF1 Command Mask      Register
#define IF1MSK1            0x0A                 //IF1 Mask1             Register
#define IF1MSK2            0x0B                 //IF1 Mask2             Register
#define IF1ARB1            0x0C                 //IF1 Arbitration 1     Register
#define IF1ARB2            0x0D                 //IF1 Arbitration 2     Register
#define IF1MSGC            0x0E                 //IF1 Message Control   Register
#define IF1DATA1           0x0F                 //IF1 Data A1           Register
#define IF1DATA2           0x10                 //IF1 Data A2           Register
#define IF1DATB1           0x11                 //IF1 Data B1           Register
#define IF1DATB2           0x12                 //IF1 Data B2           Register
////////////////////////////////////////////////////////////////////////////////
//IF2 Interface Registers
////////////////////////////////////////////////////////////////////////////////
#define IF2CMDRQST         0x20                 //IF2 Command Rest      Register
#define IF2CMDMSK          0x21                 //IF2 Command Mask      Register
#define IF2MSK1            0x22                 //IF2 Mask1             Register
#define IF2MSK2            0x23                 //IF2 Mask2             Register
#define IF2ARB1            0x24                 //IF2 Arbitration 1     Register
#define IF2ARB2            0x25                 //IF2 Arbitration 2     Register
#define IF2MSGC            0x26                 //IF2 Message Control   Register
#define IF2DATA1           0x27                 //IF2 Data A1           Register
#define IF2DATA2           0x28                 //IF2 Data A2           Register
#define IF2DATB1           0x29                 //IF2 Data B1           Register
#define IF2DATB2           0x2A                 //IF2 Data B2           Register
////////////////////////////////////////////////////////////////////////////////
//Message Handler Registers
////////////////////////////////////////////////////////////////////////////////
#define TRANSREQ1          0x40                 //Transmission Rest1 Register
#define TRANSREQ2          0x41                 //Transmission Rest2 Register

#define NEWDAT1            0x48                 //New Data 1            Register
#define NEWDAT2            0x49                 //New Data 2            Register

#define INTPEND1           0x50                 //Interrupt Pending 1   Register
#define INTPEND2           0x51                 //Interrupt Pending 2   Register

#define MSGVAL1            0x58                 //Message Valid 1       Register
#define MSGVAL2            0x59                 //Message Valid 2  


#define BAUDRATE 38400//57600//38400
#define BAUDVAL (65536 - (SYSCLK / BAUDRATE / 32)) // why 32 and not 16??

__sfr16 __at (0xBFBE) ADC0;
//Function Declrations -------------------------------
void init_sysclk( );
void putchar(char c);
char getchar(void);
void Headlights_On(void);
void uart0_init(void);
unsigned int ADC_read(char);
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

void Steer ();
void IO (unsigned int, int); 
void Drive();
void Avoid();
void Ramp(int speed);

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
	P0 = 0x02;
	
	//0001 1110 = 0x1E
	//P3MDOUT &= ~0x1E;
	//P3 = 0x1E;

	// write "0xdead" to the watchdog register, disabling the watchdog
	WDTCN = 0xde;
	WDTCN = 0xad; 

	SFRPAGE = save;
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
void uart0_init(void) {
	char save = SFRPAGE;

	SFRPAGE = UART0_PAGE;
	SCON0 = 0x70; // enable Uart0 TX and RX, stop bit level checking
	SSTA0 = 0x15; // disable divide-by-two on baud rate, enable timer2 clock source
	TI0 = 1; // initialize transmitter ready flag

	SFRPAGE = TMR2_PAGE;

	// Load the preload value into Timer2
	RCAP2L = (BAUDVAL & 0xff);
	RCAP2H = ((BAUDVAL >> 8) & 0xff);

	// Set up Timer2
	TMR2CF = 0x08; // use SYSCLK as Timer2 timebase
	TMR2CN = 0x04; // start Timer2
	
	SFRPAGE = save;
}


void boot_system( ) {
	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
	SFRPAGE = CONFIG_PAGE;
	
	init_sysclk( );
	init_xbar();
	uart0_init( );
	can_init( );
	SFRPAGE = ADC0_PAGE;
	REF0CN = 0x03;
	DAC0CN = 0x80;
	AMX0CF = 0x00;
	ADC0CF = 0x40;
	ADC0CN = 0x80; // enable ADC conversion
	SFRPAGE = UART0_PAGE;

	EA = 1; /* enable interrupts now that everything is initialized */

	SFRPAGE = SFRPAGE_SAVE;
}


void main( ) {
	int c;
	boot_system( );
	printf("start");
	while (1) {
		SFRPAGE = UART0_PAGE;
		//printf("hello\n\r");
		if(RI0){RI0 = 0; c = SBUF0;
			//printf("input: %d \n\r", c);
			if(c == 65){/*printf("Avoid\n\r");*/Avoid();}
			else if(c == 68){/*printf("Drive\n\r");*/Drive();}
			else if(c == 83){/*printf("Steer\n\r");*/Steer();}
			}
	}

}

//Car Functionality
void IO (unsigned int value, int addr)
{
	CAN_BUFFER canbuf;
	char l = value; //low byte
	char h = value >> 8; // high byte
	unsigned char data[2] = {h, l};
	canbuf = can_get_tx_buf();
	can_set_address_std(canbuf, addr);
	can_set_buffer_data(canbuf, data, sizeof(data));
	can_send_tx_buf(canbuf);
}

void Headlights_On()
{
	CAN_BUFFER canbuf;
	unsigned char data[2] = {0x00, 0x01};
	canbuf = can_get_tx_buf();
	can_set_address_std(canbuf, 0x01);
	can_set_buffer_data(canbuf, data, sizeof(data));
	can_send_tx_buf(canbuf);
	printf("Lights on");
}
void Drive()
{
	int c;
	int i;
	unsigned int speed;
	
	/*Ramp(1000);
	for(i=0; i<100; i++);
	Ramp(1500);
	for(i=0; i<100; i++);
	Ramp(1800);
	for(i=0; i<100; i++);*/
	while(!RI0);
	RI0 = 0;
	c = SBUF0;
	speed = (c*16.5)+2000;
	Ramp(speed);
	printf("speed: %d\n\r",speed);
	
}
void Ramp(int speed)
{
	char l;
	char h;
	unsigned char data[2] = {h, l};
	CAN_BUFFER canbuf;
	
	l = speed & 0x0f; //low byte
	
	h = speed >> 8; // high byte
	printf("high %x \n\r", h);
	printf("low %x \n\r", l);
	data[2] = (h,l);
	canbuf = can_get_tx_buf();
	can_set_address_std(canbuf, 0x05);
	can_set_buffer_data(canbuf, data, sizeof(data));
	can_send_tx_buf(canbuf);
}
void Avoid()
{
	int c;
	int i;
	while(!RI0){};
	RI0 = 0;
	c = SBUF0;
	printf("It's a thing\n\r");
	if(c==49){
	IO(1,0x01);
	IO(1,0x04);// this should be one the horn is just annoying
	for(i=0;i<655;i++);
	IO(0,0x04);}
	else{IO(0,0x01);IO(0,0x04);}
}
void Steer()
{
	CAN_BUFFER canbuf;
	int dir;
	int i;
	char h;
	char l;
	unsigned char Data[2] ;
	while(!RI0);
	RI0 = 0;
	i = SBUF0;
	printf("step 1: %d ", i);
	dir = (i*12) + 850;
	printf("step 2: %d ", i*12);
	printf("step 3: %d ",dir);
	if(dir < 850){dir = 850;}
	if (dir > 2150){dir = 2150;}
	printf("Direction: %d", dir);
	l = dir; //low byte
	h = dir >> 8; // high byte
	Data[2] = (h, l);
	canbuf = can_get_tx_buf();
	can_set_address_std(canbuf, 0x06);
	can_set_buffer_data(canbuf, Data, sizeof(Data));
	can_send_tx_buf(canbuf);
	
}

unsigned int ADC_read(char n)
{
	char save = SFRPAGE;
	SFRPAGE = ADC0_PAGE;
	AMX0SL = n;//select pin
	ADC0CN &= ~(0x20);// reset for reading
	ADC0CN |= 0x10;
	while((ADC0CN & 0x20)==0); // wait for conversion to finish
	return ADC0;
	SFRPAGE = save;
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



void putchar(char c)
{
    while(!TI0); 
    TI0=0;
    SBUF0 = c;
}

//------------------------------------------------------------------------------------
// getchar()
//------------------------------------------------------------------------------------
char getchar(void)
{
    char c;
    while(!RI0);
    RI0 =0;
    c = SBUF0;
// Echoing the get character back to the terminal is not normally part of getchar()
  //  putchar(c);    // echo to terminal
    return SBUF0;
}