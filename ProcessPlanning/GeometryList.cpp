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
		lGeom.insert(item);
	}

	Geometry* GeometryList::get(int index) const
	{
		lGeom.get(index);
	}

}
