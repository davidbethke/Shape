#include "StdAfx.h"
#include "Line.h"


Line::Line(double l):begin(0,0),end(l,0),length(l)
{
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
Line  Line::createParallelLine(double offset, double ratio) const
{
	// for readability
	double yMult=(end.getY()-begin.getY())/(ratio*length);
	double xMult=(begin.getX()-end.getX())/(ratio*length);
	double newX1=begin.getX()+ offset*yMult;
	double newX2=begin.getX()+ offset*yMult;
	double newY1=begin.getX()+ offset*xMult;
	double newY2=begin.getX()+ offset*xMult;

	return(Line(Point(newX1,newY1),Point(newX2,newY2)));
}
