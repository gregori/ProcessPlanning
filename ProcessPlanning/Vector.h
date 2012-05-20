#pragma once
#include "SimpleGeometry.h"
using namespace ProcessPlanning;

namespace ProcessPlanning 
{

	class Vector :
		public SimpleGeometry
	{
	public:
		Vector(const float x=0.0, const float y=0.0, const float z=0.0);
		~Vector(void);
	};

}
