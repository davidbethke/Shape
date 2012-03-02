#include "StdAfx.h"
#include "Parallelogram.h"


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
							Trapezoid(len1,len2,len1,len2,a1,(180-a1))
							
{
	
}


Parallelogram::~Parallelogram(void)
{
}
