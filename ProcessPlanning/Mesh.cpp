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

	void Mesh::addTriangle(Triangle* t)
	{
        insert(static_cast<ComplexGeometry*> t);
	}

    Triangle* Mesh::getTriangle(Triangle* t) const
    {
        //traverse list and compares the triangle
    }

}


