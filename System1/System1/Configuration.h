/* Initialization Variables, set up in Main function. Determine constants used throughout the project*/
#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include "Tracker.h"
#include "Renderer.h"
#include "Input.h"
#include <string.h>

#include "C:\Users\Daniela\Documents\Visual Studio 2015\Projects\bologramSpace\System1\System1\pugixml-1.7\src\pugixml.hpp"
using namespace std;

class Configuration {

public:
	//Configuration();
	~Configuration();
	void SetConfigurationVariables(char* file);
	//void SetConfigurationVariables();

	Spheree::Tracker* InitializeTracker(); // initialize Kinect or Fastrak
	int GetNumberOfProjectors();
	Input* InitializeInput(); // initialize Keyboard or Stylus
	int GetWidthProjectors();
	int GetHeightProjectors();
	Renderer* InitializeRenderer(); // initialize a OpenGL, Unity or Unreal renderer depending on Configuration
	void CreateCalibrationObjectsForProjectors();//---> diff way to do this
	// Change these to ints instead of booleans depending on how we manage trackers,inputs and demos.( Using IDs )
	
	
	
	int m_numProjectors;
	const pugi::char_t* m_xml_tracker;
	const pugi::char_t* m_xml_input;
	const pugi::char_t* m_xml_renderer;
	int m_projectorWidth;
	int m_projectorHeight;
	const pugi::char_t* m_xml_display;
	const pugi::char_t* m_xml_demo;

	//int m_widthProjectors[m_numProjectors];
	//int m_heightProjectors[m_numProjectors];
	//Calibration m_calibrationObjects[m_numProjectors];


};

#endif



