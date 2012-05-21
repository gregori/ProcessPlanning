#include "stdafx.h"
#include "Contour.h"

namespace ProcessPlanning
{

	Contour::Contour(void)
	{
	}


	Contour::~Contour(void)
	{
	}

	void Contour::render(void)
	{
		ifImp->prepareRender(this);
		geomList.renderAllGeometries();
		ifImp->finishRender();
	}

}