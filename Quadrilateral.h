#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Point.h"
#include "Line.h"
#include "CImg.h"
class Quadrilateral
{
public:
	Quadrilateral(double,double,double,double,double,double,double,double,int,int); //HACK to insure correct constructor call
	Quadrilateral(int,double,double,double,double,double=90,double=0,double=270,double=180); //int is dummy param to change signature
	Quadrilateral(Point=Point(),Point=Point(0,1),Point=Point(1,1),Point=Point(1,0));
	Quadrilateral(Line,Line,Line,Line);
	~Quadrilateral(void);
	void draw();
	virtual void displayDimensions() const;
	double getX(int) const;
	double getY(int) const;
	Point getPoint(int) const;
	Line getLine(int) const;
protected:
	double x1,y1,x2,y2,x3,y3,x4,y4;
	Point p1, p2, p3, p4;
	Line l1, l2, l3, l4;
	void initPoints();
	void initLines();
	void initDouble();
};

#endif //QUADRILATERAL_H