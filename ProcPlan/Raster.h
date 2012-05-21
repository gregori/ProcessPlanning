#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning 
{

	class Raster :
		public ComplexGeometry
	{
	public:
		Raster(void);
		~Raster(void);
		virtual void render(void);
	};

}