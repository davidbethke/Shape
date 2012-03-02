#pragma once
#include "quadrilateral.h"
class Trapezoid :
	public Quadrilateral
{
public:
	//Trapezoid(void);
	Trapezoid(double,double,double,double,double,double);
	~Trapezoid(void);
	virtual void displayDimensions() const;
private:
	double length1, length2, length3,length4,angle1, angle2,height;
};

