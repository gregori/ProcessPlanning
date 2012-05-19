#include "Slice.h"

namespace ProcessPlanning
{

	Slice::Slice(Graphics* imp)
		: ComplexGeometry(imp)
	{
	}


	Slice::~Slice(void)
	{
	}

	void Slice::render(void) const
	{
		ifImp->render(this);
	}

}