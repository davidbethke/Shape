#pragma once
#include "rectanglea.h"
class Square :
	public RectangleA
{
public:
	Square(double);
	~Square(void);
private:
	double width;
};

