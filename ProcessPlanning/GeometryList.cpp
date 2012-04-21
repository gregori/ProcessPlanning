#include "GeometryList.h"

namespace ProcessPlanning {
	
	GeometryList::GeometryList(void)
	{
	}


	GeometryList::~GeometryList(void)
	{
	}
	
	void GeometryList::insert(Geometry* item)
	{
		lGeom.push_back(item);
	}

}
