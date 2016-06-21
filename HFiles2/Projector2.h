/* New simplified projector class */

#ifndef _PROJECTOR2_H_
#define _PROJECTOR2_H_

#include "Calibration.h"
#include "Vector3.h"
	class Projector {
	public:
		Projector(int projWidth, int projHeight, Calibration* calibrationobj, Vector3d Position);
		~Projector();

		void SetWidthHeight();
    void SetCalibrationInformation();
    void SetPosition();
    void Display();
    // have this method to set all info for a projector and passing a configuration object
    void SetAllVars(Configuration* configurationObj, projectorNumber);

	private:
		int m_projectorCalibrationData[];
		int m_projectorWidth;
		int m_projectorHeight;
		Calibration* m_calibrationObj;
		Vector3d m_projectorPosition;



	};
};
#endif
