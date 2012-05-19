#pragma once

#include "ComplexGeometry.h"

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