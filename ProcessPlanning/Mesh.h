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
		
		void addNormal(const float x, const float y, const float z);
		void addNormal(Vector* v);
		void addVertex(const float x, const float y, const float z);
		void addVertex(Point* p);
	};

}