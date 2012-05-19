#pragma once
#include "ComplexGeometry.h"

namespace ProcessPlanning {

	class Raster :
		public ComplexGeometry
	{
	public:
		Raster(Graphics* imp = NULL);
		~Raster(void);
		virtual void render(void) const;
	};

}