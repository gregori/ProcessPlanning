#pragma once
#include "stdafx.h"
#include "Geometry.h"
#include "GeometryList.h"
#include "Graphics.h"

using namespace ProcessPlanning;

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
		virtual void render(void) = 0;
	};

}
