#include "StdAfx.h"
#include "PointHelper.h"
#include "Point.h"

using namespace std;
ostream& operator<<(ostream& os,const Point & p)
{
	os <<"x:"<<p.x<<", y:"<<p.y;
	return os;
}
bool operator==(const Point& p1,const Point& p2)
{
	if((p1.x==p2.x) && (p1.y==p2.y))
		return true;
	else
		return false;
}
