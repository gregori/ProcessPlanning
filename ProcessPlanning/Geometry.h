#pragma once

namespace ProcessPlanning {

	class Geometry
{
public:

	Geometry(void)
	{
	}

	~Geometry(void)
	{
	}

	virtual float* getCoords() const = 0;
};

}
