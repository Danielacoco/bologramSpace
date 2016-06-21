#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "Projector.h"
#include "Tracker.h"
#include "Renderer.h"
#include "Vector3.h"
#include "Input.h"


/* Display surface class. All display classes will inherit from this class and will be in charge of displaying content 
correctly onto the physical or virtual display surfaces (this is done in update)*/
/* Loading of meshes is done here */
/* content independent */


class Display {
	public:
		Display (Projector* projectors, int numProjectors, Tracker* tracker, Demo* demo);
		Display (Projector* projectors, int numProjectors, Tracker* tracker, Demo* demo, Input* input);
		~Display(); // clean up upon destruction
		void InitializeDisplay();
		void RunThread();
		bool IsRunning();
		void StopThread();



	private:
		Projector* m_projectors[];
		Demo* m_demo;
		Tracker* m_tracker;


};
#endif