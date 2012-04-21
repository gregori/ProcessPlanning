#include "ComplexGeometry.h"

namespace ProcessPlanning
{
	ComplexGeometry::ComplexGeometry(void)
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
