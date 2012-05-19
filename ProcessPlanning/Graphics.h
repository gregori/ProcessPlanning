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
		void render(Rect* r);
		void render(Triangle* t);
		void render(Slice* s);
		void render(Raster* r);
		void render(Contour* c);
		void render(Mesh* m);
		void render(Solid* s);
		void resizeView(float posX, float posY);

	};
}