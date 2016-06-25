#ifndef _FLATDISPLAY_H_
#define _FLATDISPLAY_H_

#include "Display.h"



class FlatDisplay : public Display {
public:
	class Tracker { //tracker have its own thread?
		//FlatDisplay(Projector* projectors, int numProjectors, Tracker* tracker, Renderer* renderer);
		~FlatDisplay(); // clean up upon destruction

	};
#endif