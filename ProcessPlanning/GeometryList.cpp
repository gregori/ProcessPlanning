#include "GeometryList.h"

namespace ProcessPlanning {
	
	GeometryList::GeometryList(void)
	{
	}


	GeometryList::~GeometryList(void)
	{
	}
	
	void GeometryList::insert(const Geometry* item)
	{
		lGeom.push_back(item);
	}

}