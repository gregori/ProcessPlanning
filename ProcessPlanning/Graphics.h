#pragma once

#include "GraphicsImp.h"
#include "Point.h"
#include "Rect.h"
#include "ComplexGeometry.h"

namespace ProcessPlanning
{
	class Graphics
	{
	private:
		GraphicsImp* imp;

	public:
		Graphics(GraphicsImp* implementation = NULL);
		~Graphics();

		void drawPoint(Point* p);
		void drawRect(Rect* r);
		void draw2dPolygon(ComplexGeometry* cg);
		void draw3dPolygon(ComplexGeometry* cg);
		void resizeView(float posX, float posY);

	};
}