#pragma once
#include "List.h"
#include "Geometry.h"

namespace ProcessPlanning
{
	class Geometry;

	class GeometryList
	{
	protected:
		List<Geometry> lGeom;

	public:
		GeometryList(void);
		~GeometryList(void);
		void insert(Geometry* item);
		Geometry* get(int index) const;
		void renderAllGeometries(void);
		int getSize(void) const;
	};

}
