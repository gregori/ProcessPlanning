#pragma once
#include "Mesh.h"
#include "Solid.h"

namespace ProcessPlanning
{

	class Slicer
	{
    private:
	public:
		Slicer(void);
		virtual ~Slicer(void);

        virtual Solid* sliceMesh(Mesh* m)=0;
	};

}
