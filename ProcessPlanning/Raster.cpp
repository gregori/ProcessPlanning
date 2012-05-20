#include "Raster.h"

namespace ProcessPlanning
{

	Raster::Raster(Graphics* imp)
		: ComplexGeometry(imp)
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