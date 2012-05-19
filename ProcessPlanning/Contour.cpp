#include "Contour.h"

namespace ProcessPlanning
{

	Contour::Contour(Graphics* imp)
		: ComplexGeometry(imp)
	{
	}


	Contour::~Contour(void)
	{
	}

	void Contour::render(void) const
	{
		ifImp->render(this);
	}

}