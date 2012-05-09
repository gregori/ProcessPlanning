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

    void Triangle::setVector (const Vector* v)
    {
        normal = v;
    }

    Vector* Triangle::getVector(void) const
    {
        return normal;
    }

    void Triangle::addVertex(const Point* p)
    {
        addGeometry(static_cast<Geometry*>(p));
    }

    bool Triangle::operator==(const Triangle &t) const
    {
        if (t.getVector() != normal)
            return false;
        //for each vertex in GeometryList
        //compare vertexes
    }

}
