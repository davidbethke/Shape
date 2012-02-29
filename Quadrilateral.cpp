#include "StdAfx.h"
#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(double x1, double y1,
							double x2, double y2,
							double x3, double y3,
							double x4, double y4):
x1(x1),y1(y1),x2(x2),y2(y2),x3(x3),y3(y3),x4(x4),y4(y4) //TODO this->x1=x1 correct?
{
	//init Points for convenience
	initPoints();
	initLines();
	// init lines
	

}
Quadrilateral::Quadrilateral(Point p1,Point p2, Point p3, Point p4):
							p1(p1),p2(p2),p3(p3),p4(p4)
{
	// init double vals;
	initDouble();
	initLines();

}

Quadrilateral::Quadrilateral(Line l1, Line l2, Line l3, Line l4):
							l1(l1), l2(l2), l3(l3),l4(l4)
{
	initPoints();
	initDouble();
}


Quadrilateral::~Quadrilateral(void)
{
}
void Quadrilateral::initDouble()
{
	x1=p1.getX();
	y1=p1.getY();
	x2=p2.getX();
	y2=p2.getY();
	x3=p3.getX();
	y3=p3.getY();
	x4=p4.getX();
	y4=p4.getY();
}

void Quadrilateral::initLines()
{
	l1=Line(p1,p2);
	l2=Line(p2,p3);
	l3=Line(p3,p4);
	l4=Line(p4,p1);
}

void Quadrilateral::initPoints()
{
	p1=Point(x1,y1);
	p2=Point(x2,y2);
	p3=Point(x3,y3);
	p4=Point(x4,y4);
}