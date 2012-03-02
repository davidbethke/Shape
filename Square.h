#pragma once
#include "rectanglea.h"
class Square :
	public RectangleA
{
public:
	Square(double);
	~Square(void);
	virtual void displayDimensions() const;
private:
	double width;
};

