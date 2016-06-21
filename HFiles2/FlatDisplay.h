#ifndef _FLATDISPLAY_H_
#define _FLATDISPLAY_H_

#include "Vector3.h"


class FlatDisplay: public Display {
	public:
		FlatDisplay (Projector* projectors, int numProjectors, Tracker* tracker, Renderer* renderer);
		~FlatDisplay(); // clean up upon destruction

};
#endif