#pragma once
#include "SimpleGeometry.h"

namespace ProcessPlanning 
{
	class Point : public SimpleGeometry
	{
	public:
		Point(const float x=0.0, const float y=0.0, const float z=0.0);
		~Point();
	};
}