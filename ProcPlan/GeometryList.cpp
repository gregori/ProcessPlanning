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
		Geometry* g;

		for (aux = lGeom.getFirst(); aux->getNext() != NULL; aux = aux->getNext())
		{
			g = aux->getData();
			g->render();
		}
	}

	int GeometryList::getSize(void) const
	{
		return lGeom.getSize();
	}
}
