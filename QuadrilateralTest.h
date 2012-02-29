#pragma once
#include "d:\users\dave\documents\visual studio 2010\projects\gmock\gmock-1.6.0\gtest\include\gtest\gtest.h"
#include "Quadrilateral.h"
class QuadrilateralTest :
	public ::testing::Test
{
protected:
	virtual void SetUp()
	{
	}
	virtual void TearDown()
	{
	}
	//Quadrilateral quad1, quad2;
	//const Quadrilateral quadConst;
public:
	QuadrilateralTest(void);
	~QuadrilateralTest(void);
};

