#include "ComplexGeometry.h"

namespace ProcessPlanning
{
	ComplexGeometry::ComplexGeometry(Graphics* imp)
		: Geometry(imp)
	{
	}


	ComplexGeometry::~ComplexGeometry(void)
	{
	}

	void ComplexGeometry::addGeometry(Geometry* geom)
	{
		geomList.insert(geom);
	}
}
