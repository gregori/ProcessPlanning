#pragma once
#include "ComplexGeometry.h"

namespace ProcessPlanning
{

	class Contour :
		public ComplexGeometry
	{
	public:
		Contour(Graphics* imp = NULL);
		~Contour(void);
		virtual void render(void) const;
	};

}