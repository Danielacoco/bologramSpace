#ifndef _ThreeDPCDISPLAY_H_
#define _ThreeDPCDISPLAY_H_
// NOTE ON NAME: IDK what name we are giving spheree

#include "Vector3.h"

/* Display surface class. All display classes will inherit from this class and will be in charge of displaying content correctly onto the physical or virtual display surfaces*/
/* Loading of meshes is done here */
/* content independent */

class ThreeDPCDisplay: public Display {
	public:
		ThreeDPCDisplay (Projector* projectors, int numProjectors, Tracker* tracker, Renderer* renderer);
		~ThreeDPCDisplay(); // clean up upon destruction

};
#endif