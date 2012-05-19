#include "Mesh.h"
#include "Triangle.h"

namespace ProcessPlanning
{
	Mesh::Mesh(Graphics* imp)
		: ComplexGeometry(imp)
	{
	}

	Mesh::~Mesh(void)
	{
	}

	void Mesh::setMinBoundary(const float x, const float y, const float z)
	{
		xMin = x; yMin = y; zMin = z;
	}

	void Mesh::setMaxBoundary(const float x, const float y, const float z)
	{
		xMax = x; yMax = y; zMax = z;
	}

    Triangle* Mesh::getTriangle(Triangle* t) const
    {
        //traverse list and compares the triangle
    }

	void Mesh::render(void) const
	{
		ifImp->render(this);
	}
}


