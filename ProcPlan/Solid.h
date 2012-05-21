#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Solid :
		public ComplexGeometry
	{
	public:
		Solid(void);
		~Solid(void);
		virtual void render(void);
	};

}
