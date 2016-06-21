//
//  mockDemo.cpp

//This file shows the flow of calls/ interactions in the Spheree system.

#include "mockDemo.hpp"
#include "CalibrationBlock.h"
#include "Configuration.h"
#include "Tracker.h"
#include "Demo2.h"
#include "Input.h"


int main(){

     // start a calibration block
    Calibration calibrationBlock = new Calibration();// probably pass projectors and tracker here
    calibrationBlock->CalibrateSpheree(); // this will do A LOT of things, including creating data files (separate project?)
    
    // start a configuration
    Configuration* configurationBlock = new  Configuration();
    // loading file or have them set through console
    configurationBlock->setConfigurationVariables();

    // Initialize tracker, projectors and renderer to initialize Display (tracker will have its own thread)
    Tracker* tracker = configurationBlock->InitializeTracker();
    //-----> start running thread here?

    // projector array, size given in configuration
    Projector projectors[configurationBlock->GetNumberOfProjectors()];
    int numProjectors = configurationBlock->GetNumberOfProjectors();
    int i = 0;
    for (i; i < numProjectors; i++){
        projectors[i]->SetAllVars( configurationBlock, i); // NICE WAY TO INITIALIZE PROYECTORS AS WE NEED WIDTH, HEIGHT, POSITION AND CALIBOBJECT
    }
    // Initialize renderer specified in configurations
    Renderer* renderer = configurationBlock->InitializeRenderer();
    // in case there is input
    Input* input = configurationBlock->IntitializeInput();


    // initialize Demo after renderer and Display have been initialize
    Demo* runningDemo = new CubeDemo(renderer);

    // initialize Display according to configuration (Display will have its own thread?)
    // -----> start thread here?
    Display* display = new Display (projectors, numProjectors, runningDemo, renderer);
    display-> DisplayDemo();

    display->InitializeDisplay();
    display->RunThread();
    
    while (display -> IsRunning());
    
    delete display;


        
    
};
/* NOTE: In InitializeDisplay we can start loading demo files (RunDemo), 
then in RunThread  we have main update loop to determine corresponding images to
projector taking into account tracker information */ 

// CUBE DEMO

class CubeDemo: public Demo2 {

    void RunDemo {
        m_renderer->Initialize();
        //Load Cube
        m_renderer-> LoadObject(//path to obj file);
        //Load Grid
        m_renderer-> LoadObject(//path to obj file);
        // LoadAxis
        m_renderer-> LoadObject(//path to obj file);
        // LoadCubeTexture
        m_renderer-> LoadTextures(//path to texture files);

        m_renderer-> LoadScene(//path to files)
    };




};

    
    

