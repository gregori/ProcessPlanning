#include "stdafx.h"
#include "PointFactory.h"

namespace ProcessPlanning
{
	PointFactory::PVector PointFactory::points;

	PointFactory::PointFactory(void)
	{
	}


	PointFactory::~PointFactory(void)
	{
        //TODO: Clean Point Vector
	}

	Point* PointFactory::getPoint(const float x, const float y, const float z)
	{
		PVectorIterator it;
		Point* p;

		for (it = points.begin(); it != points.end(); ++it)
			if (x == (*it)->getX() && y == (*it)->getY() && z == (*it)->getZ())
				return (*it);

		p = new Point(x, y, z);
		points.push_back(p);
		return p;
	}

}
