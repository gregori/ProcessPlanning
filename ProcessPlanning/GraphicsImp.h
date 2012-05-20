#pragma once

#include "Point.h"
#include "Rect.h"
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{
	class GraphicsImp
	{
	protected:
		GraphicsImp();
		virtual ~GraphicsImp();

	public:
		virtual void render(Point *p) = 0;
		virtual void prepareRenderRect(void) = 0;
		virtual void prepareRenderTriangle(void) = 0;
		virtual void prepareRenderPolygon(void) = 0;
		virtual void finishRender(void) = 0;
		virtual void drawPoint(Point *p) = 0;
		virtual void draw3dGeometry(ComplexGeometry *cg) = 0;
		virtual void resizeView(float posX, float posY) = 0;
	};
}