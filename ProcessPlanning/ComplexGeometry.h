#pragma once
#include "Geometry.h"
#include "GeometryList.h"

namespace ProcessPlanning
{
	class ComplexGeometry :
		public Geometry
	{
	protected:
		GeometryList geomList;
	public:
		ComplexGeometry(void);
		~ComplexGeometry(void);
		void addGeometry(Geometry* geom);
	};

}
