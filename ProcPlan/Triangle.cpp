#include "Triangle.h"
#include "stdafx.h"

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

    void Triangle::setVector (Vector* v)
    {
        normal = v;
    }

    Vector* Triangle::getVector(void) const
    {
        return normal;
    }

    Point* Triangle::getV1(void) const
    {
        return static_cast<Point*>(geomList.get(0));
    }

    Point* Triangle::getV2(void) const
    {
        return static_cast<Point*>(geomList.get(1));
    }

    Point* Triangle::getV3(void) const
    {
        return static_cast<Point*>(geomList.get(2));
    }

    void Triangle::addVertex(Point* p)
    {
        addGeometry(static_cast<Geometry*>(p));
    }

    bool Triangle::operator==(const Triangle &t) const
    {
        if (t.getVector() != normal)
            return false;

        if (t.getV1() == getV1() && t.getV2() == getV2() && t.getV3() == getV3())
            return true;

		return false;
    }

    bool Triangle::operator!=(const Triangle &t) const
    {
        if (t.getVector() == normal && t.getV1() == getV1() && t.getV2() == getV2()
                && t.getV3() == getV3())
            return false;
        return true;
    }

	void Triangle::render(void)
	{
		ifImp->prepareRender(this);
		geomList.renderAllGeometries();
		ifImp->finishRender();
	}
}
