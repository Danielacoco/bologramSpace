/*Abstract class, should be extended by all devices that can be used 
to track motion wrt sphere */

#include "Vector3.h"

#ifndef _TRACKER_H_
#define _TRACKER_H_
namespace Spheree {
	class Tracker { //tracker have its own thread?
	public:
		Tracker();
		Vector3d GetPosition();
		Vector3d GetOrientation();
		int GetFrequency();
		int GetData();//array? file? buffer?

	private:
		int _frequency;
		Vector3d _headPosition;
		Vector3d _orientation;
		Buffer _data;

	};
};
#endif
