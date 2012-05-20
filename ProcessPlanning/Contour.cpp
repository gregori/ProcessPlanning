#include "Contour.h"

namespace ProcessPlanning
{

	Contour::Contour(Graphics* imp)
		: ComplexGeometry(imp)
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