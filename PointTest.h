#pragma once
#include "d:\users\dave\documents\visual studio 2010\projects\gmock\gmock-1.6.0\gtest\include\gtest\gtest.h"
#include "Point.h"
class PointTest :
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
	Point myPoint,fiveFive,twoThree;
	const Point myPointConst;
	std::ostringstream oss;
	std::streambuf* p_cout_streambuf;
public:
	PointTest(void);
	~PointTest(void);
};

