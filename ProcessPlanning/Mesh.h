#pragma once
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
		Mesh(Graphics* imp = NULL);
		~Mesh(void);
		
		void setMinBoundary(const float x, const float y, const float z);
		void setMaxBoundary(const float x, const float y, const float z);

		void getMinBoundary(float &x, float &y, float &z);
		void getMaxBoundary(float &x, float &y, float &z);

		Triangle* getTriangle(Triangle *t) const;
		virtual void render(void);
	};

}
