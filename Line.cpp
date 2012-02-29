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
Line  Line::createParallelLine(double offset, double scale) const
{
	// for readability http://stackoverflow.com/questions/2825412/draw-a-parallel-line
	double yMult=(end.getY()-begin.getY())/(length);
	double xMult=(begin.getX()-end.getX())/(length);
	// calc new x, y vals
	double newX1=begin.getX()+ offset*yMult;
	double newX2=end.getX()+ offset*yMult;
	double newY1=begin.getY()+ offset*xMult;
	double newY2=end.getY()+ offset*xMult;
	// scale, add to the begin x1,y1
	double deltaY=(newY2-newY1)*scale;
	double deltaX=(newX2-newX1)*scale;
	//new end point
	newX2=newX1+deltaX;
	newY2=newY1+deltaY;

	

	return(Line(Point(newX1,newY1),Point(newX2,newY2)));
}
