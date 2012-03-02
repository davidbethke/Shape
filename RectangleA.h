#pragma once
#include "parallelogram.h"
class RectangleA :
	public Parallelogram
{
public:
	RectangleA(double, double);
	~RectangleA(void);
	virtual void displayDimensions() const;
private:
	double height, width;
};

