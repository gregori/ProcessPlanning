#pragma once

#include "stdafx.h"
#include "Point.h"
#include "ComplexGeometry.h"

namespace ProcessPlanning
{
	class GraphicsImp
	{
	protected:
		GraphicsImp();
		virtual ~GraphicsImp();

	public:
		virtual void prepareRenderRect(void) = 0;
		virtual void prepareRenderTriangle(void) = 0;
		virtual void prepareRenderPolygon(void) = 0;
		virtual void finishRender(void) = 0;
		virtual void drawPoint(Point *p) = 0;
		//virtual void draw3dGeometry(ComplexGeometry *cg) = 0;
		virtual void resizeView(float posX, float posY) = 0;
	};
}