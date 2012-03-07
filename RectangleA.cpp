#include "StdAfx.h"
#include "RectangleA.h"
#include <iostream>


using namespace std;
RectangleA::RectangleA(double h, double w):height(h),width(w),Parallelogram(h,w,90)
{
}


RectangleA::~RectangleA(void)
{
}
void RectangleA::displayDimensions() const
{
	cout <<"Rectangle Dimensions:"<<endl;
	cout <<"Length:"<<height<<endl;
	cout <<"Width:"<<width<<endl;
}

