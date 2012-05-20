#pragma once
#include "ComplexGeometry.h"
#include "Graphics.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Rect :
		public ComplexGeometry
	{
	public:
		Rect(Graphics* imp = NULL);
		~Rect(void);
		virtual void render(void);
	};

}
