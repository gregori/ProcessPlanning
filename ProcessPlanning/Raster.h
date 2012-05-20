#pragma once
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning 
{

	class Raster :
		public ComplexGeometry
	{
	public:
		Raster(Graphics* imp = NULL);
		~Raster(void);
		virtual void render(void);
	};

}