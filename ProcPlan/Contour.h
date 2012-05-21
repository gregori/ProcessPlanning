#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Contour :
		public ComplexGeometry
	{
	public:
		Contour(void);
		~Contour(void);
		virtual void render(void);
	};

}