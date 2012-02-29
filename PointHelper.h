#ifndef POINT_HELPER_H
#define POINT_HELPER_H
#include <iostream>
class Point;
std::ostream& operator<<(std::ostream&, const Point &);
bool operator==(const Point&,const Point&);
#endif // POINT_HELPER_H