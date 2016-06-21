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
		void RunDemo();

	private:
		Renderer* m_renderer;
		Display* m_display;

};
#endif