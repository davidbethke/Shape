#include "StdAfx.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;
//Parallelogram,  opposite sides parallel, equal angles
//					len2						
//			  _________________							
//			 /			      /				
//	len1	/				 / len1
//		   /				/
//        /__a1____________/ a1
//				len2
//
Parallelogram::Parallelogram(double len1, double len2,double a1):
							length1(len1),length2(len2),angle(a1),
							Trapezoid(len1,len2,len1,len2,a1,(180-a1))
							
{
	
}


Parallelogram::~Parallelogram(void)
{
}
void Parallelogram::displayDimensions() const
{
	cout <<"Parallelogram Dimensions"<<endl;
	cout <<"Length1:"<<length1<<endl;
	cout <<"Length2:"<<length2<<endl;
	cout <<"Angle:"<<angle<<endl;
}
