#pragma once
#include "ComplexGeometry.h"

namespace ProcessPlanning
{

	class Rect :
		public ComplexGeometry
	{
	public:
		Rect(Graphics* imp = NULL);
		~Rect(void);
		virtual void render(void) const;
	};

}
