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
Line  Line::createParallelLine(double offset,double shift, double scale) const
{
	// for readability http://stackoverflow.com/questions/2825412/draw-a-parallel-line
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
