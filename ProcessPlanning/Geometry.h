#pragma once

#include "Graphics.h"

#ifndef NULL
#define NULL 0
#endif

namespace ProcessPlanning 
{
	class Geometry
	{
	public:

		Geometry(Graphics* imp = NULL);
		virtual ~Geometry(void);

		virtual void render(void);

	protected:
		Graphics* ifImp;
	};

}
