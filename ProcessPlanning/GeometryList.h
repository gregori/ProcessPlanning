#pragma once
#include <vector>
#include "Geometry.h"
using namespace std;

namespace ProcessPlanning
{
	class GeometryList
	{
	protected:
		vector<Geometry*> lGeom;
        vector<Geometry*>::iterator lgit;

	public:
		GeometryList(void);
		~GeometryList(void);
		void insert(Geometry* item);
	};

}
