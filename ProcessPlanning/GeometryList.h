#pragma once
#include <list>
#include "Geometry.h"
using namespace std;

namespace ProcessPlanning
{
	class GeometryList
	{
	protected:
		list<Geometry*> lGeom;

	public:
		GeometryList(void);
		~GeometryList(void);
		void insert(Geometry* item);
	};

}
