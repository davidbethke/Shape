#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Point.h"
#include "Line.h"
class Quadrilateral
{
public:
	Quadrilateral(double,double,double,double,double,double,double,double);
	Quadrilateral(Point,Point,Point,Point);
	Quadrilateral(Line,Line,Line,Line);
	~Quadrilateral(void);
	void draw();
	virtual void displayDimensions();
private:
	double x1,y1,x2,y2,x3,y3,x4,y4;
	Point p1, p2, p3, p4;
	Line l1, l2, l3, l4;
	void initPoints();
	void initLines();
	void initDouble();
};

#endif //QUADRILATERAL_H