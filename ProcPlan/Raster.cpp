#include "stdafx.h"
#include "Raster.h"

namespace ProcessPlanning
{

	Raster::Raster(void)
	{
	}


	Raster::~Raster(void)
	{
	}

	void Raster::render(void)
	{
		ifImp->prepareRender(this);
		geomList.renderAllGeometries();
		ifImp->finishRender();
	}
}