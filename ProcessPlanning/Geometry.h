#pragma once

namespace ProcessPlanning {

class Geometry
{
public:

	Geometry(void)
	{
	}

	virtual ~Geometry(void)
	{
	}

	virtual float* getCoords() const = 0;
};

}
