#pragma once
#include "GraphicsImp.h"
#include <gl/GL.h>
#include <gl/GLU.h>

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class OpenGLImp :
		public GraphicsImp
	{
	private:
		float fgColor[3];  // array for storing RGB components for foreground color
		float bgColor[3];  // array for storing RGB components for background color

	public:
		OpenGLImp(void);
		~OpenGLImp(void);

		void prepareRenderRect(void);
		void prepareRenderTriangle(void);
		void prepareRenderPolygon(void);
		void finishRender(void);
		void drawPoint(Point *p);
		void draw3dGeometry(ComplexGeometry *cg);
		void resizeView(float posX, float posY);
		void openGLInit(void);
		void clearScreen(void);
	};

}