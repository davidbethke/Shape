#include "StdAfx.h"
#include "trapezoid.h"

/*
Trapezoid::Trapezoid(void)
{
}
*/
// build a trapezoid,<<assumption>> AT LEAST 1 pair of parallel sides
//									angles need to add up to 180degrees
//				len2
//			  _________
//		len1 /  180+a2 \
//			/           \  len3
//		   / a1	      a2 \
//        /_______________\
//				len4

Trapezoid::Trapezoid(double len1, double len2, double len3, double len4,
					double a1, double a2):length1(len1),length2(len2),
								length3(len3),length4(len4),angle1(angle1),angle2(a2),
								Quadrilateral(1,len1,len2,
								len3,len4,a1,0,(180+(180-a2)),180)
{
	height=len1*sin((a1*PI)/180);
}
																
Trapezoid::~Trapezoid(void)
{
}
