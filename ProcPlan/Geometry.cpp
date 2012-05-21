#include "stdafx.h"
#include "Geometry.h"
#include "Graphics.h"

namespace ProcessPlanning
{
	Geometry::Geometry(void)
	{
		ifImp = NULL;
	}

	Geometry::~Geometry(void)
	{
		ifImp = NULL;
	}

	void Geometry::render(void)
	{
		throw "Not callable from Geometry";
	}

	void Geometry::setInterface(Graphics* imp)
	{
		if (imp != NULL)
			ifImp = imp;
		else
			throw "Interface must not be NULL!";
	}

}