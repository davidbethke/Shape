#include "StdAfx.h"
#include "PointHelper.h"
#include "Point.h"

using namespace std;
ostream& operator<<(ostream& os,const Point & p)
{
	os <<"x:"<<p.x<<", y:"<<p.y;
	return os;
}
