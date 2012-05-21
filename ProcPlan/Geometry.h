#pragma once
#include "stdafx.h"

#ifndef NULL
#define NULL 0
#endif

namespace ProcessPlanning 
{
	class Graphics;
	class Geometry
	{
	public:

		Geometry(void);
		virtual ~Geometry(void);

		virtual void render(void);

		void setInterface(Graphics* imp);
	protected:
		Graphics* ifImp;
	};

}
