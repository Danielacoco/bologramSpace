#pragma once
#ifndef _DEMO_H_
#define _DEMO_H_

#include "Renderer.h"
#include "Display.h"
#include "Configuration.h"
#include "Vector3.h"

/* Demo selects uses determined renderer to determined display*/
/* Derived classes from this class will call renderer specific functions to load the content and implement particular demo
methods (RunDemo) */

class Demo {
public:
	// Demo takes in renderer
	Demo(Renderer* renderer);
	~Demo();
	// each derived demo implements this according to objects being loaded
	void RunDemo() {
		m_renderer->Initialize();
		//Load Cube
		m_renderer->LoadObject();//path to obj file
								 //Load Grid
		m_renderer->LoadObject();//path to obj file
								 // LoadAxis
		m_renderer->LoadObject();//path to obj file
								 // LoadCubeTexture
		m_renderer->LoadTexture();//path to texture files

		m_renderer->LoadScene();//path to files
	}

private:
	Renderer* m_renderer;
	Display* m_display;

};
#endif