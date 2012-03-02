#include "StdAfx.h"
#include "Parallelogram.h"


//Parallelogram::Parallelogram(double length1, double length2, double angle):
//											l1(length1,angle),
//											l2(length2,0,l1.getEnd()),
//											l4(length2,0,l1.getBegin()),
//											l3(l4.getEnd(),l2.getEnd()),
//											Quadrilateral(l1,l2,l3,l4)
Parallelogram::Parallelogram(double length1, double length2,double angle):
							l1(length1,angle),
							l2(length2),
							l3(length1),
							l4(length2)
							
{
	//Line l1(length1,angle);
	//Line l2(length2,0,l1.getEnd());
	//Line l3=l1.createParallelLine(length2);
	//Line l4(l1.getBegin(),l3.getBegin());
	Quadrilateral(l1,l2,l3,l4);
}


Parallelogram::~Parallelogram(void)
{
}
void Parallelogram::displayDimensions() const
{
	//TODO Parallelogram displayDimensions
}
