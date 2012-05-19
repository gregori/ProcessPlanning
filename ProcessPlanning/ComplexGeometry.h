#pragma once
#include "Geometry.h"
#include "GeometryList.h"
#include "Graphics.h"

namespace ProcessPlanning
{
	class ComplexGeometry :
		public Geometry
	{
	protected:
		GeometryList geomList;
	public:
		ComplexGeometry(Graphics* imp = NULL);
		~ComplexGeometry(void);
		void addGeometry(Geometry* geom);
		virtual void render() const = 0;
	};

}
