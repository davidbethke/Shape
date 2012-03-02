#pragma once
#include "d:\users\dave\documents\visual studio 2010\projects\gmock\gmock-1.6.0\gtest\include\gtest\gtest.h"
#include "Trapezoid.h"
class TrapezoidTest :
	public ::testing::Test
{
protected:
	virtual void SetUp()
	{
	}
	virtual void TearDown()
	{
	}
	Trapezoid trap;
public:
	TrapezoidTest(void);
	~TrapezoidTest(void);
};

