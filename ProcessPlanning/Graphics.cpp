#include "Graphics.h"

namespace ProcessPlanning
{
	Graphics::Graphics(GraphicsImp* implementation)
	{
		imp = implementation;
	}

	Graphics::~Graphics()
	{
		imp = NULL;
	}

	void Graphics::drawPoint(Point *p)
	{
		imp->drawPoint(p);
	}

	void Graphics::drawRect(Rect *r)
	{
		imp->drawRect(r);
	}

	void Graphics::draw2dPolygon(ComplexGeometry *cg)
	{
		imp->draw2dGeometry(cg);
	}

	void Graphics::draw3dPolygon(ComplexGeometry *cg)
	{
		imp->draw3dGeometry(cg)
	}

	void Graphics::resizeView(float posX, float posY)
	{
		imp->resizeView(posX, posY);
	}

}