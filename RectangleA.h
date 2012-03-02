#pragma once
#include "parallelogram.h"
class RectangleA :
	public Parallelogram
{
public:
	RectangleA(double, double);
	~RectangleA(void);
private:
	double height, width;
};

