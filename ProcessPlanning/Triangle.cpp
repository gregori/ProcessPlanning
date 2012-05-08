#include "Triangle.h"

namespace ProcessPlanning
{

	Triangle::Triangle(void)
	{
	}

	Triangle::~Triangle(void)
	{
	}

	float Triangle::getZMax() const
	{
		return zMax;
	}

	float Triangle::getZMin() const
	{
		return zMin;
	}

    void Triangle::setVector ( Vector* v )
    {
        normal = v;
    }

    void Triangle::addVertex(Point* p)
    {
        addGeometry(static_cast<Geometry*>(p));
    }

}
