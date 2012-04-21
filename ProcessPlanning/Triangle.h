#pragma once
#include "complexgeometry.h"

namespace ProcessPlanning
{
	class Triangle :
		public ComplexGeometry
	{
	private:
		float zMin;
		float zMax;
	public:
		Triangle(void);
		~Triangle(void);
		float getZMin() const;
		float getZMax() const;
	};

}

