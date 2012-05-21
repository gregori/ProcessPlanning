#include "stdafx.h"
#include "Slice.h"

namespace ProcessPlanning
{

	Slice::Slice(void)
	{
	}


	Slice::~Slice(void)
	{
	}

	void Slice::render(void)
	{
		geomList.renderAllGeometries();
	}

}