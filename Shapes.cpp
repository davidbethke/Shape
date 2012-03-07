// Shapes.cpp : Defines the entry point for the console application.
// Dave Bethke
// Assignment 4, Problem 2.2
// Two releases
// #define _DEBUG or #define NDEBUG
// included unit tests (googletest unit test framework), *Test files, based on previous comment
// Ill omit these in the future, if you'd like
//  Using cimg.h for graphics drawing
// portable compiles on win, mac, linux
// http://cimg.sourceforge.net/reference/group__cimg__overview.html
//

#include "stdafx.h"
#include "Quadrilateral.h"
#include "Trapezoid.h"
#include "Parallelogram.h"
#include "RectangleA.h"
#include "Square.h"
#include <vector>


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
	
	vector<Quadrilateral*> myShapes;
	myShapes.push_back(new Trapezoid(30,60,30,110,45,45));
	myShapes.push_back(new Parallelogram(90,110,45));
	myShapes.push_back(new RectangleA(110,140));
	myShapes.push_back(new Square(65));
	vector<Quadrilateral*>::iterator it; //try iterator instead of int i= ...
	for(it=myShapes.begin(); it != myShapes.end();++it)
	{
		(*it)->displayDimensions();
		(*it)->draw();
	}
	

#endif //NDEBUG
}