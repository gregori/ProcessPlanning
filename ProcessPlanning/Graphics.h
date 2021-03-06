#pragma once

#include "GraphicsImp.h"
#include "Point.h"
#include "Rect.h"
#include "Triangle.h"
#include "Slice.h"
#include "Solid.h"
#include "Mesh.h"
#include "Raster.h"
#include "Contour.h"

namespace ProcessPlanning
{
	class Graphics
	{
	private:
		GraphicsImp* imp;

	public:
		Graphics(GraphicsImp* implementation = NULL);
		~Graphics();

		void render(Point* p);
		void prepareRender(Point* p);
		void prepareRender(Rect* r);
		void prepareRender(Triangle* t);
		void prepareRender(Raster* r);
		void prepareRender(Contour* c);
		void prepareRender(Mesh* m);
		void finishRender(void);
		void resizeView(float posX, float posY);

	};
}