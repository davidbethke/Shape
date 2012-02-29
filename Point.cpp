#include "StdAfx.h"
#include "Point.h"

#include <cmath>

Point::Point(double a, double b):x(a),y(b)
{
}

Point::~Point(void)
{
}
double Point::distance(const Point& other) const
{
	double xd=x-other.x;
	double xy=y-other.y;
	return sqrt(xd*xd +xy*xy);
}
Point Point::operator+(const Point& other) const
{
	return Point((x+other.x),(y+other.y));
}
Point Point::operator-(const Point& other) const
{
	return Point((x-other.x),(y-other.y));
}
double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}