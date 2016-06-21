#ifndef _OPENGLRENDERER_H_
#define _OPENGLRENDERER_H_
#include "Renderer.h"
#include "Vector3.h"


class UnrealRenderer: public Renderer {
	public:
		virtual void Initialize() = 0;
		virtual void LoadObject() = 0;
		virtual void LoadTexture() = 0;
		virtual void LoadScene()= 0;
	private:

};
#endif