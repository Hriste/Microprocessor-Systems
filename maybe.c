//LITEC Car code
//MPS Final Project
//Objject avoidence and response to incliine
//sends data to CAN Car
//
//Christina Paolicelli 12/12/2016
#include <c8051_SDCC.h>
#include <stdio.h>
#include <stdlib.h>
#include <i2c.h>
 
//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void SMB0_Init(void);
void XBR0_Init(void);
//void ADC_Init(void);
 
void STOP(void);
void Control(void);
void ReadAccelometer();
void ReadRanger(void);
void Avoid(void);
void Accel_Init_C(void);
//signed int ReadBattery();
 
#define STEER_CENTER_PW 2754
#define STEER_MIN_PW 2224
#define STEER_MAX_PW 3344
 
#define DRIVE_PW_CENTER 2771
#define DRIVE_PW_MAX 3508
#define DRIVE_PW_MIN 2031
 
unsigned char PCA_Count = 0;
char FLAG = 0;
char addr_accelC = 0x3A;
unsigned char Data2[3];
//unsigned int Battery_Read = 15000;
char X_Gain = 7;    //Gain in tenths of a unit
char Y_Gain = 5;    //Gain in tenths of a unit
char S_Gain = 3;    //Gain in tenths of a unit
 
long AccelX;
long AccelY;
 
unsigned char AccPtr = 0;
char AVOID = 0;
char threshold = 20;
int Xoff = 0;
int Yoff = 0;
 
//__sbit __at (0xB6) RUN;
 
//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------
void main(void) {
    // initialize board
    Sys_Init();
    Port_Init();
    XBR0_Init();
    PCA_Init();
    SMB0_Init();
    Accel_Init_C();
    putchar(' '); //the quotes in this line may not format correctly
    printf("Conversion Attempt - since this can print \n\r");
    PCA_Count = 0;                         //reset PCA count
 
    while (AccPtr < 250) {
        if (FLAG) {                //if PCA interrupt enabled
            ReadAccelometer();              
        }
    }
    Xoff = (AccelX)/AccPtr;             //set X (side-to-side) offset   
    Yoff = (AccelY)/AccPtr;             //set Y (front-to-back) offset
    AccelX = 0;                         //reset accelerometer X and Y readings and the number of readings taken
    AccelY = 0; 
    AccPtr = 0;
    //Main Loop
    while(1) {
        if(AVOID){Avoid();}
		if(FLAG){ReadAccelometer();
			if(PCA_Count%4 ==0){ReadRanger();}
			if(PCA_Count%16 ==0){Control();}
			if(PCA_Count%128 == 0){PCA_Count = 0;}
			FLAG = 0;
		}
    }
}
 
//-----------------------------------------------------------------------------
// Port_Init
//-----------------------------------------------------------------------------
//
// Set up ports for input and output
//
void Port_Init() {
    P1MDOUT = 0x05;//set output pin for CEX0, CEX2 in push-pull mode
    P1MDIN &= (~0x20); //set input pin P1.5 for open drain
    P1 |= 0x20;
}
 
//-----------------------------------------------------------------------------
// SMB0_Init
//-----------------------------------------------------------------------------
//
// Set up the SMB
//
void SMB0_Init() {
    SMB0CR = 0x93; // set SCL to 100KHz
    ENSMB = TRUE; // enable SMBUS0
}
 
//-----------------------------------------------------------------------------
// XBR0_Init
//-----------------------------------------------------------------------------
//
// Set up the crossbar
//
void XBR0_Init() {
    XBR0 = 0x27 ; //configure crossbar as directed in the laboratory
}
 
//-----------------------------------------------------------------------------
// PCA_Init
//-----------------------------------------------------------------------------
//
// Set up Programmable Counter Array
//
void PCA_Init(void) {
    PCA0CN = 0x40;
    PCA0MD = 0x81;
    PCA0CPM0 = 0xC2;
    PCA0CPM2 = 0xC2;
    EIE1 |= 0x08;
    EA=1;
 
    //Set PCA output to a neutral setting
    PCA0CP0 = 0xFFFF - STEER_CENTER_PW;
    PCA0CP2 = 0xFFFF - DRIVE_PW_CENTER;
}
 
//-----------------------------------------------------------------------------
// PCA_ISR
//-----------------------------------------------------------------------------
//
// Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
//
void PCA_ISR ( void ) __interrupt 9 {
    if (CF) {
        //Clear Flag
        CF=0;
        FLAG = 1;
        //signal has a period of 20 ms.
        PCA0 = 28671;
        PCA_Count++;
    } else {
        PCA0CN &= 0xC0;
    }
}
 
//-----------------------------------------------------------------------------
// STOP
//-----------------------------------------------------------------------------
//
// Stops the car
//
void STOP(void){
    PCA0CPL2 = 0xFFFF - DRIVE_PW_CENTER; //set next compare value to 65535- drive center PW
    PCA0CPH2 = (0xFFFF - DRIVE_PW_CENTER)>>8;  //so that outputted PW to drive motor is the center PW
}
  

//-----------------------------------------------------------------------------
// ReadAccelometer
//-----------------------------------------------------------------------------
//
// Reads the Accelerometer
//
void ReadAccelometer(){
    unsigned char addr = 0x3A; //the address of the sensor
    unsigned char Data[5];      //array with a length of 5
    int q = 0;
    Data[0]=0;
     
    while((Data[0]&0x03)!= 0x03) {      //check that x and y axis values are ready to be read
        i2c_read_data(addr,0x27,Data,1);
        for(q=0;q<1200;q++);         
    }
    i2c_read_data(addr,0x28|0x80,Data,4); //read all registers that contain x and y axis readings
    AccelX += ((Data[1]<<8)>>4);            //bitshift up by 8 and than down by 4 to get bits out of twos complement form
    AccelY += ((Data[3]<<8)>>4);
    AccPtr++;
}
 
void Control() {
        int Xavg = ((AccelX)/AccPtr) - Xoff;    //average the side-to-side (X) accelerometer values and subtract initial offset
        int Yavg = ((AccelY)/AccPtr) - Yoff;    //average the front-to-back (Y) accelerometer values and subtract offset
		int D;
		int S;
        volatile int SteerServoPW = STEER_CENTER_PW - Xavg*X_Gain;      //set steering PW based off of x-axis error multiplied by its LCD inputted gain
        volatile int DriveMotorPW = DRIVE_PW_CENTER + Yavg*Y_Gain + abs(Xavg*S_Gain)+ 737; //set steering PW based off of y-axis error multiplied by its LCD inputted gain 
        AccelX = 0;                 //reset all accelerometer readings and number of accelerometer readings taken
        AccelY = 0;
        AccPtr = 0;
         
        if (SteerServoPW > STEER_MAX_PW) { SteerServoPW = STEER_MAX_PW; }            //set bounding conditions for steering and drive motor PW
        else if (SteerServoPW < STEER_MIN_PW) { SteerServoPW = STEER_MIN_PW; }
        else if (DriveMotorPW > DRIVE_PW_MAX) { DriveMotorPW = DRIVE_PW_MAX; }
        else if (DriveMotorPW < DRIVE_PW_MIN) { DriveMotorPW = DRIVE_PW_MIN; }
        if(DriveMotorPW < DRIVE_PW_CENTER){
		D = (float)(DriveMotorPW/(DRIVE_PW_CENTER - DRIVE_PW_MIN))*10;
		printf("D%X\n\r",D);
	}else{
		D = (float)(DriveMotorPW/(DRIVE_PW_MAX - DRIVE_PW_CENTER))*10;
		printf("D%X\n\r",D);
	}
	if(SteerServoPW < STEER_CENTER_PW){
		S = (float)(SteerServoPW/(STEER_CENTER_PW - STEER_MIN_PW))*10;
		printf("S%X-\n\r",S);
	}else{
		S = (float)(SteerServoPW/(STEER_MAX_PW - STEER_CENTER_PW))*10;
		printf("S%X+\n\r",S);
	}
        PCA0CP2 = 0xFFFF - DriveMotorPW;        //set next compare values for the drive motor and steering servo so that correct PWs within the bounds specified
        PCA0CP0 = 0xFFFF - SteerServoPW;        //are only input into each system
     
}
void Avoid()
{
	int Reverse = 2000;
	printf("A1\n\r");
	PCA0CP2 = 0xFFFF - Reverse;
	PCA0CP2 = 0xFFFF - STEER_MIN_PW + 20;
	while(!(PCA_Count%10 == 0));// go backwards for two seconds
	PCA0CP2 = 0xFFFF - DRIVE_PW_CENTER;
	PCA0CP0 = 0xFFFF - STEER_CENTER_PW;
	printf("A0\n\r");
	AVOID = 0;
}
void ReadRanger()
{
	unsigned char addr = 0xE0;
	unsigned char Data[2];
	unsigned int range;
	i2c_read_data(addr,2,Data,2);
	range = (((unsigned int)Data[0]<<8)|Data[1]);
	Data[0]=0x51;
	i2c_write_data(addr,0,Data,1);
	if(range < threshold){AVOID =1;}
	else{AVOID=0;}
}
void Accel_Init_C(void)
{
// unsigned char Data2[3];
//setting Block Data Update bit locks up I2C bus
Data2[0]=0x04; //set register address auto increment bit
i2c_write_data(addr_accelC, 0x23, Data2, 1);
Data2[0]=0x6B; //R20 normal power mode, 800Hz ODR, y & x axes enabled
// Data2[0]=0x3B; //R20 normal power mode, 100Hz ODR, y & x axes enabled
Data2[1]=0x00; //R21 Default - no HP filtering
// Data2[1]=0x13; //R21 filtered data selected, HPF = 1.0->0.125Hz
Data2[2]=0x00; //R22 Default - no interrupts enabled
i2c_write_data(addr_accelC, 0x20, Data2, 1);
}