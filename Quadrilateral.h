#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Point.h"
#include "Line.h"
#include "CImg.h"
class Quadrilateral
{
public:
	Quadrilateral(double,double,double,double,double,double,double,double);
	Quadrilateral(Point,Point,Point,Point);
	Quadrilateral(Line,Line,Line,Line);
	~Quadrilateral(void);
	virtual void draw();
	virtual void displayDimensions();
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
	void initColor();
	//unsigned char blue[3];
	//cimg_library::CImg<unsigned char> myImg;
};

#endif //QUADRILATERAL_H