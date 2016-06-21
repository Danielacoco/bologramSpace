/*serial.h file
author Satoshi Konno
date 1995 */

/************************************************************
*
*	Copyright(C) Satoshi Konno 1995
*
*	Serial.h
*
*************************************************************/

#ifndef _SERIAL_H_
#define _SERIAL_H_

#include <windows.h> //windows only

#define SERIAL1 "COM1"
#define SERIAL2 "COM2"

typedef HANDLE FileHandle; //windows only

#define B9600 9600
#define B19200 19200
#define B38400 38400
#define B57600 57600
#define B115200 115200

/*Serial port class, used by polhemus to get serial data*/

class SerialPort {
	FileHandle file_handle;

public:
	SerialPort(char *device, int speed);
	~SerialPort(void);
	int Read(unsigned char *bp, int len);
	int Write(unsigned char *bp, int len);
	int Write(unsigned char *bp);
	void Close();
};

#endif

