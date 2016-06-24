#ifndef _RENDERER_H_
#define _RENDERER_H_

#include "Renderer.h"
#include "Vector3.h"


/*Virtual class, each renderer engine will extend from this virtual class and implement all methods defined here*/

class Renderer {
public:
	Renderer(); // initialize engine/ library etc.
	~Renderer();

	virtual void Initialize() = 0;
	virtual void LoadObject() = 0;
	virtual void LoadTexture() = 0;
	virtual void LoadScene() = 0;
	//virtual void LoadShaders() = 0;

};

#endif