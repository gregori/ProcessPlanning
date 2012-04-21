#pragma once
#include "Point.h"
#include <vector>
#include <algorithm>

using namespace std;

namespace ProcessPlanning
{

	class PointFactory
	{
	private:
		typedef vector<Point*> PVector;
		typedef vector<Point*>::iterator PVectorIterator;
		static PVector points;
	public:
		PointFactory(void);
		~PointFactory(void);
		static Point* getPoint(const float x, const float y, const float z);
	};

}
