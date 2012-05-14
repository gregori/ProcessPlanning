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
        void addVertex(const Point* p);
        void setVector(const Vector* v);
        Point* getV1(void) const;
        Point* getV2(void) const;
        Point* getV3(void) const;
        Vector* getVector(void) const;
        bool operator==(const Triangle &t) const;
        bool operator!=(const Triangle &t) const;
	};

}

