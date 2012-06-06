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

	void Mesh::setXMin(const float x)
	{
		xMin = x;
	}

	void Mesh::setYMin(const float y)
	{
		yMin = y;
	}

	void Mesh::setZMin(const float z)
	{
		zMin = z;
	}

	void Mesh::setXMax(const float x)
	{
		xMax = x;
	}

	void Mesh::setYMax(const float y)
	{
		yMax = y;
	}

	void Mesh::setZMax(const float z)
	{
		zMax = z;
	}

	float Mesh::getXMin(void) const
	{
		return xMin;
	}

	float Mesh::getYMin(void) const
	{
		return yMin;
	}

	float Mesh::getZMin(void) const
	{
		return zMin;
	}

	float Mesh::getXMax(void) const
	{
		return xMax;
	}

	float Mesh::getYMax(void) const
	{
		return yMax;
	}

	float Mesh::getZMax(void) const
	{
		return zMax;
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


