// Shapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Quadrilateral.h"
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
	Point p1(0,0),p2(0,100),p3(100,100),p4(100,0);
	Quadrilateral quad(p1,p2,p3,p4);
	quad.draw();
#endif //NDEBUG
}