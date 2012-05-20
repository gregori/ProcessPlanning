#pragma once
#include "Contour.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Offset :
		public Contour
	{
	public:
		Offset(Graphics* imp = NULL);
		~Offset(void);
	};

}
