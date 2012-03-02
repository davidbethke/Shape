// Shapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Quadrilateral.h"
#include "Trapezoid.h"
#include "Parallelogram.h"
#include "RectangleA.h"
#include "Square.h"
#include "CImg.h"
#include <vector>
#include <algorithm>

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
	vector<Quadrilateral*> myShapes;
	myShapes.push_back(new Trapezoid(30,60,30,110,45,45));
	myShapes.push_back(new Parallelogram(90,110,45));
	myShapes.push_back(new RectangleA(110,140));
	myShapes.push_back(new Square(65));
	vector<Quadrilateral*>::iterator it;
	for(it=myShapes.begin(); it != myShapes.end();++it)
	{
		(*it)->draw();
		(*it)->displayDimensions();
	}
	

#endif //NDEBUG
}