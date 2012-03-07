#include "StdAfx.h"
#include "trapezoid.h"
#include <iostream>

using namespace std;
/*
Trapezoid::Trapezoid(void)
{
}
*/
// build a trapezoid,<<assumption>> AT LEAST 1 pair of parallel sides
//									angles need to add up to 180degrees
//				len2
//			  _________
//		len1 /		   \
//			/           \  len3
//		   / a1	      a2 \
//        /_______________\
//				len4

Trapezoid::Trapezoid(double len1, double len2, double len3, double len4,
					double a1, double a2):length1(len1),length2(len2),
								length3(len3),length4(len4),angle1(a1),angle2(a2),
								Quadrilateral(1,len1,len2,
								len3,len4,a1,0,(180+(180-a2)),180)
{
	height=len1*sin((a1*PI)/180);
}
																
Trapezoid::~Trapezoid(void)
{
	
}
void Trapezoid::displayDimensions() const
{
	cout <<"Trapezoid Dimensions"<<endl;
	cout<<"Length1:"<<length1<<endl;
	cout<<"Length2:"<<length2<<endl;
	cout<<"Length3:"<<length3<<endl;
	cout<<"Length4:"<<length4<<endl;
	cout <<"Angle1:"<<angle1<<endl;
	cout <<"Angle2:"<<angle2<<endl;
	cout <<"Height:"<<height<<endl;
}