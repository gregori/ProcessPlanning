#include "stdafx.h"
#include "Mesh.h"
#include "Triangle.h"

namespace ProcessPlanning
{
	Mesh::Mesh(void)
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
		return NULL;
    }

	void Mesh::render(void)
	{
		//ifImp->prepareRender(this);
		geomList.renderAllGeometries();
		//ifImp->finishRender();
	}
}


