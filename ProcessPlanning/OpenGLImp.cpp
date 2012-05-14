#include "OpenGLImp.h"
#include <gl/GL.h>
#include <gl/GLU.h>



namespace ProcessPlanning
{

	OpenGLImp::OpenGLImp(void)
	{
		// Color arrays default setup
		bgColor[0] = 0.0f; bgColor[1] = 0.0f; bgColor[2] = 0.0f;
		fgColor[0] = 1.0f; fgColor[1] = 1.0f; fgColor[2] = 1.0f;


	}


	OpenGLImp::~OpenGLImp(void)
	{
	}

	void OpenGLImp::openGLInit(void)
	{
		// Basic Setup:
		//
		// Set color to use when clearing the background.
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClearDepth(1.0f);
 
		// Turn on backface culling
		glFrontFace(GL_CCW);
		glCullFace(GL_BACK);
 
		// Turn on depth testing
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);
	}

	void OpenGLImp::resizeView(float posX, float posY)
	{
		// Map the OpenGL coordinates.
		glViewport(0, 0, posX, posY);
 
		// Projection view
		glMatrixMode(GL_PROJECTION);
 
		glLoadIdentity();
 
		// Set our current view perspective
		gluPerspective(35.0f, (float)posX / (float)posY, 0.01f, 2000.0f);
 
		// Model view
		glMatrixMode(GL_MODELVIEW);
	}



}