#include "OpenGLImp.h"

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

	void OpenGLImp::drawPoint(Point* p)
	{
		glBegin(GL_POINTS);
			glVertex3f(p->getX(), p->getY(), p->getZ());
		glEnd();
	}

	void OpenGLImp::drawTriangle(Triangle* t)
	{
		Point *v1, *v2, *v3;

		v1 = t->getV1(); v2 = t->getV2(); v3 = t->getV3();

		glBegin(GL_TRIANGLES);
			glVertex3f( v1->getX(), v1->getY(), v1->getZ());
			glVertex3f( v2->getX(), v2->getY(), v2->getZ());
			glVertex3f( v3->getX(), v3->getY(), v3->getZ());
		glEnd();
	}

	void OpenGLImp::clearScreen(void)
	{
		// Clear color and depth buffer bits
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

}