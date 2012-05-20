#include "Geometry.h"

namespace ProcessPlanning
{
	Geometry::Geometry(Graphics* imp)
	{
		this->ifImp = imp;
	}

	Geometry::~Geometry(void)
	{
		ifImp = NULL;
	}

	void Geometry::render(void)
	{
		throw "Not callable from Geometry";
	}

}