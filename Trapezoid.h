#pragma once
#include "quadrilateral.h"
class Trapezoid :
	public Quadrilateral
{
public:
	//Trapezoid(void);
	Trapezoid(double,double,double,double,double,double);
	~Trapezoid(void);
private:
	double length1, length2, length3,length4,angle1, angle2,height;
};

