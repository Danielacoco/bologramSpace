/*Abrstact class, describes the behaviour and capabilities that any input
used with spheree needs without commiting to particular implementation */
#ifndef _INPUT_H_
#define _INPUT_H_


#include "Vector3.h"


	class Input { //input have its own thread (case: polhemus and fastrak used)
	public:
		Input();
		int GetFrequency();
		// in case of stylus we want it's position (stored in buffer, array?)
		void LoadData();

	private:
	protected:

	};
#endif