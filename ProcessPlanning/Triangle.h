#pragma once
#include "ComplexGeometry.h"
#include "Vector.h"
#include "Point.h"

namespace ProcessPlanning
{
	class Triangle :
		public ComplexGeometry
	{
	private:
		float zMin;
		float zMax;
        Vector* normal;
	public:
		Triangle(void);
		~Triangle(void);
		float getZMin() const;
		float getZMax() const;
        void addVertex(Point* p);
        void addVector(Vector* v);
	};

}

