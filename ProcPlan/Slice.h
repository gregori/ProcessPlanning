#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Slice :
		public ComplexGeometry
	{
	public:
		Slice(void);
		~Slice(void);
		virtual void render(void);
	};

}