#pragma once
#include "ComplexGeometry.h"
#include "Point.h"
#include "Vector.h"

namespace ProcessPlanning
{

	class Mesh :
		public ComplexGeometry
	{
	public:
		Mesh(void);
		~Mesh(void);
		
		void addTriangle(Triangle* t);
	};

}
