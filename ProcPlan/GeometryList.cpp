#include "stdafx.h"
#include "GeometryList.h"

namespace ProcessPlanning {
	
	GeometryList::GeometryList(void)
	{
	}


	GeometryList::~GeometryList(void)
	{
	}
	
	void GeometryList::insert(Geometry* item)
	{
		lGeom.insert(item);
	}

	Geometry* GeometryList::get(int index) const
	{
		return lGeom.get(index);
	}

	void GeometryList::renderAllGeometries(void)
	{
		List<Geometry>::Node<Geometry> *aux;

		for (aux = lGeom.getFirst(); aux->getNext() != NULL; aux = aux->getNext())
			aux->getData()->render();
	}

	int GeometryList::getSize(void) const
	{
		return lGeom.getSize();
	}
}
