#include "Point.h"

namespace ProcessPlanning
{
	Point::Point(const float x, const float y, const float z, Graphics* imp)
		: SimpleGeometry(x, y, z, imp)
	{
	}

	Point::~Point()
	{
	}


    bool Point::operator== (const Point &p)
    {
        return (this->x == p.x && this->y == p.y && this->z == p.z);
    }		/* -----  end of method Point::operator==  ----- */

    bool Point::operator!= (const Point &p)
    {
        return (this->x != p.x || this->y != p.y || this->z != p.z);
    }		/* -----  end of method Point::operator!=  ----- */

    bool Point::operator< (const Point &p)
    { // For simplicity, we compare only the Z coord
        return (this->z < p.z);
    }		/* -----  end of method Point::operator!=  ----- */

    bool Point::operator> (const Point &p)
    { // For simplicity, we compare only the Z coord
        return (this->z > p.z);
    }		/* -----  end of method Point::operator!=  ----- */

	void Point::render(void) const
	{
		ifImp->render(this);
	}
}
