#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point
{
	friend std::ostream& operator<<(std::ostream&,const Point&);
public:
	Point(double=0,double=0);
	~Point(void);
	double distance(const Point&) const;
	Point operator+(const Point&) const;
	Point operator-(const Point&) const;
	double getX() const;
	double getY() const;
private:
	double x,y;
};

#endif //POINT_H