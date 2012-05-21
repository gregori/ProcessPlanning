#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"
#include "Graphics.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Rect :
		public ComplexGeometry
	{
	public:
		Rect(void);
		~Rect(void);
		virtual void render(void);
	};

}
