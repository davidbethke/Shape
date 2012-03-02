#include "StdAfx.h"
#include "Square.h"
#include <iostream>

using namespace std;
Square::Square(double w):RectangleA(w,w)
{
}


Square::~Square(void)
{
}
void Square::displayDimensions() const
{
	cout <<"Square Dimensions"<<endl;
	cout <<"Width:"<<width<<endl;
}