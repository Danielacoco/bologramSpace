/* New simplified projector class */

#ifndef _PROJECTOR2_H_
#define _PROJECTOR2_H_

#include "Calibration.h"
#include "Vector3.h"
#include "Configuration.h"

class Projector {
public:
	//Projector(int projWidth, int projHeight, Calibration* calibrationobj, Vector3d Position);
	~Projector();

	void SetWidthHeight();
	void SetCalibrationInformation(Configuration* configurationObj);
	void SetPosition();
	void Display();
	// have this method to set all info for a projector and passing a configuration object
	//void SetAllVars(, int projectorNumber);

private:
	int m_projectorCalibrationData;
	int m_projectorWidth;
	int m_projectorHeight;
	Calibration* m_calibrationObj;
	vector3d m_projectorPosition;



};

#endif

