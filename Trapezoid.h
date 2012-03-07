#pragma once
#include "quadrilateral.h"
class Trapezoid :
	public Quadrilateral
{
public:
	//Trapezoid(void);
	Trapezoid(double,double,double,double,double,double); // l1,l2,l3,l4, a1,a2
	~Trapezoid(void);
	virtual void displayDimensions() const;
private:
	double length1, length2, length3,length4,angle1, angle2,height;
};

