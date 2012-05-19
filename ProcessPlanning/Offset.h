#pragma once
#include "Contour.h"

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
