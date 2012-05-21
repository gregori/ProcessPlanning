#include "stdafx.h"
#include "Point.h"

namespace ProcessPlanning
{
	Point::Point(const float x, const float y, const float z)
		: SimpleGeometry(x, y, z)
	{
	}

	Point::~Point()
	{
	}


    bool Point::operator== (const Point &p) const
    {
        return (this->x == p.x && this->y == p.y && this->z == p.z);
    }		/* -----  end of method Point::operator==  ----- */

    bool Point::operator!= (const Point &p) const
    {
        return (this->x != p.x || this->y != p.y || this->z != p.z);
    }		/* -----  end of method Point::operator!=  ----- */

    bool Point::operator< (const Point &p) const
    { // For simplicity, we compare only the Z coord
        return (this->z < p.z);
    }		/* -----  end of method Point::operator!=  ----- */

    bool Point::operator> (const Point &p) const
    { // For simplicity, we compare only the Z coord
        return (this->z > p.z);
    }		/* -----  end of method Point::operator!=  ----- */

	void Point::render(void)
	{
		ifImp->render(this);
	}
}
