#ifndef LINE_H
#define LINE_H
#include "Point.h"
class Line
{
public:
	Line(double);
	Line(Point,Point);
	~Line(void);
	Point getBegin() const;
	Point getEnd() const;
	double getLength() const;
	Line createParallelLine(double, double=1.0) const;
private:
	Point begin, end;
	double length;
};

#endif //LINE_H