#pragma once
#include "SimpleGeometry.h"

namespace ProcessPlanning 
{
	class Point : public ProcessPlanning::SimpleGeometry
	{
	public:
		Point(const float x = 0.0, const float y = 0.0, const float z = 0.0, Graphics* imp = NULL);
		~Point();
        bool operator==(const Point &p) const;
        bool operator!=(const Point &p) const;
        bool operator<(const Point &p) const;
        bool operator>(const Point &p) const;

		virtual void render(void);
	};
}
