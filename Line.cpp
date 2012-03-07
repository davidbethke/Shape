#include "StdAfx.h"
#include "Line.h"
#include <cmath>

using namespace std;

Line::Line(double l, double a, Point start):begin(start),length(l),angle(a)
{
	// right triangle
	double x2=length*cos((PI*angle)/180) + begin.getX(); // offset by starting point, convert to radians
	double y2=length*sin((PI*angle)/180) + begin.getY();
	// round up, otherwis too many numbers after decimal
	//TODO also see modf to split int with fraction
	x2=ceil(x2*1000)/1000;
	y2=ceil(y2*1000)/1000;
	end=Point(x2,y2);
}
Line::Line(Point b, Point e):begin(b),end(e)
{
	//precompute length
	length=begin.distance(end);
}


Line::~Line(void)
{
}
Point Line::getBegin() const
{
	return Point(begin);  //TODO do I need copy constructor, no pointers
}
Point Line::getEnd() const
{
	return Point(end);   // TODO same as above
}
double Line::getLength() const
{
	return(begin.distance(end));
}

Line  Line::createParallelLine(double offset,double shift, double scale) const
{
	//  http://stackoverflow.com/questions/2825412/draw-a-parallel-line
	//move in orthog direction
	double yOrth=(end.getY()-begin.getY())/(length);
	double xOrth=(begin.getX()-end.getX())/(length);
	
	// calc offset ortho, new x, y vals
	// x=x2-x1, y=y2-y1
	// [0 -1][x]
	// [1  0][y]
	double newX1=begin.getX()+ offset*yOrth;
	double newX2=end.getX()+ offset*yOrth;
	double newY1=begin.getY()+ offset*xOrth;
	double newY2=end.getY()+ offset*xOrth;
	// calc shift parallel
	// x=x2-x1, y=y2-y1
	//[-1  0][x]
	//[ 0 -1][y]
	double xPara=(newX1-newX2)/(length);
	double yPara=(newY2-newY1)/(length);
	
	// calc scale, 
	double deltaY=(newY2-newY1)*scale;
	double deltaX=(newX2-newX1)*scale;
	
	// new begining, shifted
	newX1=newX1+shift*xPara;
	newY1=newY1+shift*yPara;

	//new end point, scaled
	newX2=newX1+deltaX;
	newY2=newY1+deltaY;

	
	return(Line(Point(newX1,newY1),Point(newX2,newY2)));
}
