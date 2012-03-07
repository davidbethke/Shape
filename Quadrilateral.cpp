#include "StdAfx.h"
#include "Quadrilateral.h"
#include <iostream>

using namespace cimg_library;
using namespace std;
//Construct a Quadralateral w/ 8 doubles
//			
//	(x2,y2)	_________ (x3,y3)
//			|		|
//			|		|  
//			|_______|
//		(x1,y1)     (x4,y4)	 
//HACK int i, int j
Quadrilateral::Quadrilateral(double x1, double y1,
							double x2, double y2,
							double x3, double y3,
							double x4, double y4,
							int i, int j):
x1(x1),y1(y1),x2(x2),y2(y2),x3(x3),y3(y3),x4(x4),y4(y4) //TODO this->x1=x1 correct?
{
	
	//init Points for convenience
	initPoints();
	initLines();
	// init lines
	

}

// Construct a Quadrilateral w/ 4 lengths and 4 angles
//  <<assumption>> angles specified close the quadrilateral
//						line2(len2,a2,l1.getEnd())
//							_________	
//							|		|
//	line1					|		|  Line3(len3,a3,l2.getEnd())
//	(len1,a1,Point(0,0)		|_______|
//							line4(len4,a4,l3.getEnd())
Quadrilateral::Quadrilateral(int i,double len1, double len2, double len3, double len4,
							double a1, double a2, double a3, double a4)
{
	// construct the lines based on the passed in values
#ifdef _DEBUG  // construct a quad starting at Point 0,0, for unit tests
	l1=Line(len1,a1);		//defaults to starting at origin, expected val for unit tests
#endif //_DEBUG
#ifdef NDEBUG
	l1=Line(len1,a1,Point(50,50));				// DONE, changed starting point at (50,50)
#endif //NDEBUG
	l2=Line(len2,a2,l1.getEnd());	// starting point at end of l1;
	l3=Line(len3,a3,l2.getEnd());
	l4=Line(len4,a4,l3.getEnd());
	// init the other member variables
	p1=l1.getBegin();
	p2=l2.getBegin();
	p3=l3.getBegin();
	p4=l4.getBegin();
	initDouble();
}
//Construct a Quadrilateral w/ 4 Points
//			
//		 P2	_________ P3
//			|		|
//			|		|  
//			|_______|
//		  P1         P4	  
Quadrilateral::Quadrilateral(Point p1,Point p2, Point p3, Point p4):
							p1(p1),p2(p2),p3(p3),p4(p4)
{
	// init double vals
	
	initDouble();
	initLines();

}
//Construct a Quadrilateral w/ 4 Lines
//			
//				l2
//		 	_________ 
//			|		|
//		l1	|		|  l3 
//			|_______|
//		        l4	  
Quadrilateral::Quadrilateral(Line line1, Line line2, Line line3, Line line4):
							l1(line1), l2(line2), l3(line3),l4(line4)
{
	
	p1=l1.getBegin();
	p2=l2.getBegin();
	p3=l3.getBegin();
	p4=l4.getBegin();
	initDouble();
}


Quadrilateral::~Quadrilateral(void)
{
}
void Quadrilateral::initDouble()
{
	x1=p1.getX();
	y1=p1.getY();
	x2=p2.getX();
	y2=p2.getY();
	x3=p3.getX();
	y3=p3.getY();
	x4=p4.getX();
	y4=p4.getY();
}
void Quadrilateral::initLines()
{
	l1=Line(p1,p2);
	l2=Line(p2,p3);
	l3=Line(p3,p4);
	l4=Line(p4,p1);
}
void Quadrilateral::initPoints()
{
	p1=Point(x1,y1);
	p2=Point(x2,y2);
	p3=Point(x3,y3);
	p4=Point(x4,y4);
}
double Quadrilateral::getX(int i) const
{
	switch (i)
	{
	case 1:
		return x1;
		break;
	case 2:
		return x2;
		break;
	case 3:
		return x3;
		break;
	case 4:
		return x4;
		break;
	default:
		return x1;

	}
}
double Quadrilateral::getY(int i) const
{
	switch (i)
	{
	case 1:
		return y1;
		break;
	case 2:
		return y2;
		break;
	case 3:
		return y3;
		break;
	case 4:
		return y4;
		break;
	default:
		return y1;

	}
}
Point Quadrilateral::getPoint(int i) const
{
	switch (i)
	{
	case 1:
		return p1;
		break;
	case 2:
		return p2;
		break;
	case 3:
		return p3;
		break;
	case 4:
		return p4;
		break;
	default:
		return p1;

	}
}
Line Quadrilateral::getLine(int i) const
{
	switch (i)
	{
	case 1:
		return l1;
		break;
	case 2:
		return l2;
		break;
	case 3:
		return l3;
		break;
	case 4:
		return l4;
		break;
	default:
		return l1;

	}
}
void Quadrilateral::draw()
{
	
	const int blue[]={0,0,255};
	CImg<int> myImg(500,400,1,3,0);
	myImg.fill(0);
	myImg.draw_line(x1,y1,x2,y2,blue);
	myImg.draw_line(x2,y2,x3,y3,blue);
	myImg.draw_line(x3,y3,x4,y4,blue);
	myImg.draw_line(x4,y4,x1,y1,blue);
	
	
	
	myImg.display("Shape Image (hit enter to continue)");
	
}
void Quadrilateral::displayDimensions() const
{
	cout <<"Quadrilateral Dimensions"<<endl;
	cout <<"Side1 length:"<<l1.getLength()<< endl;
	cout <<"Side2 length:"<<l2.getLength()<< endl;
	cout <<"Side3 length:"<<l3.getLength()<< endl;
	cout <<"Side4 length:"<<l4.getLength()<< endl;

	cout <<"Verteces"<<endl;
	cout << p1<< endl << p2 << endl << p3 << endl << p4<< endl;
}

