#pragma once
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Solid :
		public ComplexGeometry
	{
	public:
		Solid(Graphics* imp = NULL);
		~Solid(void);
		virtual void render(void) const;
	};

}
