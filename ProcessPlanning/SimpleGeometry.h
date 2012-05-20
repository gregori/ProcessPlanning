#pragma once
#include "Geometry.h"
#include "Graphics.h"

namespace ProcessPlanning {

class SimpleGeometry :
	public Geometry
{
protected:
	float x;
	float y;
	float z;
	
public:
	SimpleGeometry(const float x = 0.0, const float y = 0.0, const float z = 0.0, Graphics* imp = NULL);
	~SimpleGeometry(void);
	
	//getters
	float getX(void) const;
	float getY(void) const;
	float getZ(void) const;

	//setters
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);

	virtual float* getCoords(void) const;

    bool operator==(const SimpleGeometry &sg) const; 
    bool operator!=(const SimpleGeometry &sg) const; 

	virtual void render(void) = 0;
};

}
