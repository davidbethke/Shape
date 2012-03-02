#pragma once
#include "quadrilateral.h"
class Parallelogram :
	public Quadrilateral
{
public:
	Parallelogram(double=1, double=1,double=0);
	~Parallelogram(void);
	virtual void displayDimensions() const;
private:
	double length1, length2, angle;
	Line l1,l2,l3,l4;
};

