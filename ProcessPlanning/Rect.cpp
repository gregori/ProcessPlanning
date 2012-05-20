#include "Rect.h"

namespace ProcessPlanning 
{

	Rect::Rect(Graphics* imp)
		: ComplexGeometry(imp)
	{
	}


	Rect::~Rect(void)
	{
	}

	void Rect::render(void)
	{
		ifImp->prepareRender(this);
		geomList.renderAllGeometries();
		ifImp->finishRender();
	}

}