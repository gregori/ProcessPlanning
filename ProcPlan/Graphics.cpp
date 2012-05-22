
#include "stdafx.h"

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
	
	void Graphics::clearScreen(void)
	{
		imp->clearScreen();
	}

	void Graphics::cameraSetup(float zoom, float posX, float posY, float rotX, float rotY)
	{
		imp->cameraSetup(zoom, posX, posY, rotX, rotY);
	}

	void Graphics::init(void)
	{
		imp->init();
	}

	void Graphics::prepareRender(Rect *r)
	{
		imp->prepareRenderRect();
	}

	void Graphics::prepareRender(Triangle *t)
	{
		imp->prepareRenderTriangle();
	}

	void Graphics::prepareRender(Contour *C)
	{
		imp->prepareRenderPolygon();
	}

	void Graphics::prepareRender(Raster* r)
	{
		imp->prepareRenderRect();
	}

	void Graphics::prepareRender(Mesh* m)
	{
		imp->prepareRenderTriangle();
	}

	void Graphics::render(Point *p)
	{
		imp->drawPoint(p);
	}

	void Graphics::finishRender(void)
	{
		imp->finishRender();
	}

	void Graphics::resizeView(float posX, float posY)
	{
		imp->resizeView(posX, posY);
	}

}