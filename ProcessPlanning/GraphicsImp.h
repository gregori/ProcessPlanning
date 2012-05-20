#pragma once

#include "Point.h"
#include "Rect.h"
#include "ComplexGeometry.h"

namespace ProcessPlanning
{
	class GraphicsImp
	{
	protected:
		GraphicsImp();
		virtual ~GraphicsImp();

	public:
		virtual void drawPoint(Point *p) = 0;
		virtual void drawRect(Rect *r) = 0;
		virtual void drawTriangle(Triangle *t) = 0;
		virtual void draw2dGeometry(ComplexGeometry *cg) = 0;
		virtual void draw3dGeometry(ComplexGeometry *cg) = 0;
		virtual void resizeView(float posX, float posY) = 0;
	};
}