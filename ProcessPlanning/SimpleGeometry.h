#pragma once
#include "geometry.h"

namespace ProcessPlanning {

class SimpleGeometry :
	public Geometry
{
protected:
	float x;
	float y;
	float z;
	
public:
	SimpleGeometry(const float x = 0.0, const float y = 0.0, const float z = 0.0);
	~SimpleGeometry(void);
	
	//getters
	float getX() const;
	float getY() const;
	float getZ() const;

	//setters
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);

	virtual float* getCoords() const;

};

}