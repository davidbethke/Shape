#ifndef LINE_H
#define LINE_H
#include "Point.h"
class Line
{
public:
	explicit Line(double=1.0);
	Line(Point,Point);
	~Line(void);
	Point getBegin() const;
	Point getEnd() const;
	double getLength() const;
	Line createParallelLine(double, double=0.0,double=1.0) const;
private:
	Point begin, end;
	double length;
};

#endif //LINE_H