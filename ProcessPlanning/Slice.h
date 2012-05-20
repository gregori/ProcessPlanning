#pragma once

#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Slice :
		public ComplexGeometry
	{
	public:
		Slice(Graphics* imp = NULL);
		~Slice(void);
		virtual void render(void) const;
	};

}