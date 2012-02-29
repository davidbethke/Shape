#include "StdAfx.h"
#include "Quadrilateral.h"
#include <iostream>


using namespace std;
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
	//initPoints();
	p1=l1.getBegin();
	p2=l2.getBegin();
	p3=l3.getBegin();
	p4=l4.getBegin();
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
double Quadrilateral::getX(int i) const
{
	switch (i)
	{
	case 1:
		return x1;
		break;
	case 2:
		return x2;
		break;
	case 3:
		return x3;
		break;
	case 4:
		return x4;
		break;
	default:
		return x1;

	}
}
double Quadrilateral::getY(int i) const
{
	switch (i)
	{
	case 1:
		return y1;
		break;
	case 2:
		return y2;
		break;
	case 3:
		return y3;
		break;
	case 4:
		return y4;
		break;
	default:
		return y1;

	}
}

Point Quadrilateral::getPoint(int i) const
{
	switch (i)
	{
	case 1:
		return p1;
		break;
	case 2:
		return p2;
		break;
	case 3:
		return p3;
		break;
	case 4:
		return p4;
		break;
	default:
		return p1;

	}
}
Line Quadrilateral::getLine(int i) const
{
	switch (i)
	{
	case 1:
		return l1;
		break;
	case 2:
		return l2;
		break;
	case 3:
		return l3;
		break;
	case 4:
		return l4;
		break;
	default:
		return l1;

	}
}
void Quadrilateral::draw()
{
}
void Quadrilateral::displayDimensions()
{
	cout <<"Side1 length:"<<l1.getLength()<< endl;
	cout <<"Side2 length:"<<l2.getLength()<< endl;
	cout <<"Side3 length:"<<l3.getLength()<< endl;
	cout <<"Side4 length:"<<l4.getLength()<< endl;

	cout <<"Verteces"<<endl;
	cout << p1<< endl << p2 << endl << p3 << endl << p4<< endl;
}
