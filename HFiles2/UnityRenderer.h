#ifndef _UNITYRENDERER_H_
#define _UNITYRENDERER_H_
#include "Renderer.h"
#include "Vector3.h"


class UnityRenderer: public Renderer {
	// implementation of all virtual methods defined in Renderer
public:
	virtual void Initialize() = 0;
	virtual void LoadObject() = 0;
	virtual void LoadTexture() = 0;
	virtual void LoadScene()= 0;

};
#endif