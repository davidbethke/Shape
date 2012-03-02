#pragma once
#include "Trapezoid.h"
class Parallelogram :
	public Trapezoid
{
public:
	Parallelogram(double, double, double);
	~Parallelogram(void);
	virtual void displayDimensions() const;
private:
	double length1, length2, angle;
	Line l1,l2,l3,l4;
};

