/*Fastrack, methds needed to obtain information/ data from Polhemus
tracker*/


#ifndef _FASTRAK_H_
#define _FASTRAK_H_

#include "Tracker.h"
#include "Input.h"
#include <pthread.h>
#include "serial.h"
 
/*extracted from Head_Tracking_Fastrak*/
 
/* States for serial port parser*/
#define COMMAND 1
#define STATION 2
#define STATUS_CODE 3
#define DATA 4
#define ACCUM 5
#define CR 6
#define LF 7

/*Polhemus messages*/

#define PH_REQUEST_RECORD "P"
//...

/*Polhemus sensors attached?*/
#define PH_TYPE_NO_SENSOR 0
// ...
/*Message lengths*/

/*Data format*/

/*GetBlocking, GetNonBlocking flags*/
namespace Tracker {

	typedef struct {
		//...
	}PolRecord;
	class Fastrak : public Tracker
	{
	public:
		Fastrak(char* device, int speed);
		~Fastrak();
		int InitFastrak(char* device, int speed);
		void CloseFastrak();
		SerialPort* GetSerialPort() { return serial_port; }
		pthread_t* GetThread() { return fastrak_thread; }
		PolRecord* GetRecord() { return &record; }
		void SendRequ();
		void SetRecord(unsigned char station, float *rec);
		int GetRecord(PolRecord *rec, int mask);
		void RemoveMsg(unsinged char *buf, int cp_len) { memcpy(record.mesgbuff, buf, c_len); }
		void SignalData(int station);

		/*mutex*/
		pthread_mutex_t *_record_lock;
		pthread_mutex_t *_status_lock;
		pthread_mutex_t *_thread_lock;



	private:
		SerialPort *_serialPort;
		pthread_t* _fastrakThread;
		PolRecord _record;
		int _data_status;
		int _sensor_idx;

		int GetNBytes(unsigned char *buff, int bytes);
		void PolFree(void *ptr);
		bool _keepThreadRunning;
		bool _keepCallbackThreadRunning;




	};
};
#endif

