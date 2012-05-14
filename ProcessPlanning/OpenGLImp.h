#pragma once
#include "GraphicsImp.h"

namespace ProcessPlanning
{

	class OpenGLImp :
		public GraphicsImp
	{
	private:
		float fgColor[3];  // array for storing RGB components for foreground color
		float bgColor[3];  // array for storing RGB components for background color
		void openGLInit(void);

	public:
		OpenGLImp(void);
		~OpenGLImp(void);

		void drawPoint(Point *p);
		void drawRect(Rect *r);
		void draw2dGeometry(ComplexGeometry *cg);
		void draw3dGeometry(ComplexGeometry *cg);
		void resizeView(float posX, float posY);
	
	};

}