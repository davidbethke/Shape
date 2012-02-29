#pragma once
#include "d:\users\dave\documents\visual studio 2010\projects\gmock\gmock-1.6.0\gtest\include\gtest\gtest.h"
#include "Quadrilateral.h"
class QuadrilateralTest :
	public ::testing::Test
{
protected:
	virtual void SetUp()
	{
		p_cout_streambuf = std::cout.rdbuf();
	}
	
	virtual void TearDown()
	{
		std::cout.rdbuf(p_cout_streambuf); // restore
	}
	Point p1,p2, p3,p4;
	Quadrilateral quad1;
	std::ostringstream oss;
	std::streambuf* p_cout_streambuf;
	std::string dimString;
	//const Quadrilateral quadConst;
public:
	QuadrilateralTest(void);
	~QuadrilateralTest(void);
};

