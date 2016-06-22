//
//  mockDemo.cpp

//This file shows the flow of calls/ interactions in the Spheree system.

#include "CalibrationBlock.h"
#include "Calibration.h"
#include "Configuration.h"
#include "Tracker.h"
#include "Demo2.h"
#include "Input.h"
#include "Projector2.h"

using namespace Spheree;

class CubeDemo : public Demo {
public:
	CubeDemo(Renderer* renderer);

private:
	Renderer* m_renderer;

};

int main(){

     // start a calibration block
    CalibrationBlock* calibrationBlock = new CalibrationBlock();// probably pass projectors and tracker here
    calibrationBlock->CalibrateSpheree(); // this will do A LOT of things, including creating data files (separate project?)
    
    // start a configuration
    Configuration* configurationBlock = new  Configuration();
    // loading file or have them set through console
    configurationBlock->SetConfigurationVariables();

    // Initialize tracker, projectors and renderer to initialize Display (tracker will have its own thread)
    Tracker* tracker = configurationBlock->InitializeTracker();
    //-----> start running thread here?

    // projector array, size given in configuration
	int numProjectors = configurationBlock->GetNumberOfProjectors();
    Projector projectors[numProjectors];
	Calibration calibrationProjectors[numProjectors];

    int i = 0;
    for (i; i < numProjectors; i++){
		calibrationProjectors[i]->loadData;
        projectors[i]->SetAllVars( calibrationProjectors[i], i); // NICE WAY TO INITIALIZE PROYECTORS AS WE NEED WIDTH, HEIGHT, POSITION AND CALIBOBJECT
    }
    // Initialize renderer specified in configurations
    Renderer* renderer = configurationBlock->InitializeRenderer();
    // in case there is input
    Input* input = configurationBlock->InitializeInput();

    // initialize Demo after renderer and Display have been initialize
    Demo* runningDemo = new CubeDemo(renderer);

    // initialize Display according to configuration (Display will have its own thread?)
    // -----> start thread here?
    Display* display = new Display (projectors, numProjectors, runningDemo, renderer);

    display->InitializeDisplay();
    display->RunThread();
    
    while (display -> IsRunning());
    
    delete display;
    
};





    
    

