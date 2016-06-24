/* Initialization Variables, set up in Main function. Determine constants used throughout the project*/
#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include "Tracker.h"
#include "Demo.h"
#include "C:\Users\Daniela\Documents\Visual Studio 2015\Projects\System1\System1\pugixml-1.7\src\pugixml.hpp"


class Configuration {

public:
	Configuration();
	~Configuration();
	void SetConfigurationVariables(FILE *file);
	void SetConfigurationVariables();

	Spheree::Tracker* InitializeTracker(); // initialize Kinect or Fastrak
	int GetNumberOfProjectors();
	Input* InitializeInput(); // initialize Keyboard or Stylus
	int GetWidthProjectors();
	int GetHeightProjectors();
	Renderer* InitializeRenderer(); // initialize a OpenGL, Unity or Unreal renderer depending on Configuration
	void CreateCalibrationObjectsForProjectors();
	// Change these to ints instead of booleans depending on how we manage trackers,inputs and demos.( Using IDs )
	int m_numProjectors;

	bool m_inputFastrak;
	bool m_inputKinect;
	bool m_inputMouse;
	bool m_inputKeyBoard;
	bool m_useStylus;
	bool m_useVirtualSphere;
	bool m_calibrationDone;

	//int m_widthProjectors[m_numProjectors];
	//int m_heightProjectors[m_numProjectors];
	//Calibration m_calibrationObjects[m_numProjectors];


};

#endif



