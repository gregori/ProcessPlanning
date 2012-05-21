#include "stdafx.h"
#include "Rect.h"

namespace ProcessPlanning 
{

	Rect::Rect(void)
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