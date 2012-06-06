#pragma once
#include "stdafx.h"
#include "ComplexGeometry.h"
#include "Point.h"
#include "Vector.h"

using namespace ProcessPlanning;

namespace ProcessPlanning
{

	class Mesh :
		public ComplexGeometry
	{
	private:
		float xMin, yMin, zMin;
		float xMax, yMax, zMax;
	public:
		Mesh(void);
		~Mesh(void);
		
		void setXMin(const float x);
		void setYMin(const float y);
		void setZMin(const float z);

		void setXMax(const float x);
		void setYMax(const float y);
		void setZMax(const float z);

		float getXMin(void) const;
		float getYMin(void) const;
		float getZMin(void) const;

		float getXMax(void) const;
		float getYMax(void) const;
		float getZMax(void) const;

		Triangle* getTriangle(Triangle *t) const;
		virtual void render(void);
	};

}
