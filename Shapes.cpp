// Shapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Quadrilateral.h"
#include "Trapezoid.h"
#include "Parallelogram.h"
#include "CImg.h"
#include <vector>
using namespace cimg_library;
using namespace std;
#ifdef _DEBUG
#include "gmock/gmock.h"

TEST(sample_test_case, sample_test)

{
	EXPECT_EQ(1, 1);
}
#endif //_DEBUG
int main(int argc, char** argv) 
{ 
#ifdef _DEBUG
	testing::InitGoogleTest(&argc, argv); 
	RUN_ALL_TESTS(); 
	std::getchar(); // keep console window open until Return keystroke
#endif //_DEBUG
#ifdef NDEBUG
	CImg<int> myImg(500,400,1,3,0);
	myImg.fill(0);
	const int blue[]={0,0,255};
	Point p1(0,0),p2(0,100),p3(100,100),p4(100,0);
	Quadrilateral quad(p1,p2,p3,p4);
	//quad.draw();
	vector<Line> myLines;
	for(int i=0; i<100; ++i)
		myLines.push_back(Line(i+100,i*10,Point(200,200)));
	for(int i=0;i<100;++i)
		myImg.draw_line(myLines[i].getBegin().getX(),
						myLines[i].getBegin().getY(),
						myLines[i].getEnd().getX(),
						myLines[i].getEnd().getY(),
						blue
						);
	//myImg.display("Lines");
	//Quadrilateral *quad2=new Parallelogram(50,100,45);
	//quad2->Quadrilateral::displayDimensions();
	Parallelogram pGram(50,100,45);
	//pGram.displayDimensions();
	//quad2->draw();
	//quad constructor len test
	double len1,len2,len3,len4;
	len1=len2=len3=len4=50.0;
	//Point p1(0,0), p2(0,50),p3(50,50),p4(50,0);
	//use default angles for now
	//construct Quadrilateral
	//Quadrilateral quad2(1,len1,len2,len3,len4); // default angle
	//quad2.draw();
	//quad2.displayDimensions();
	Trapezoid trap(30,60,30,110,45,45);
	trap.draw();
	trap.displayDimensions();
	getchar();

#endif //NDEBUG
}