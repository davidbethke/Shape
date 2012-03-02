#include "StdAfx.h"
#include "TrapezoidTest.h"


TrapezoidTest::TrapezoidTest(void):trap(3,6,3,11,45,45)
{
}


TrapezoidTest::~TrapezoidTest(void)
{
}
TEST_F(TrapezoidTest,constructor)
{
		
	EXPECT_NEAR(3,trap.getLine(1).getLength(),.1)<<"line 1 len FAIL";
	EXPECT_NEAR(6,trap.getLine(2).getLength(),.1)<<"line 2 len FAIL";
	EXPECT_NEAR(3,trap.getLine(3).getLength(),.1)<<"line 3 len FAIL";
	EXPECT_NEAR(11,trap.getLine(4).getLength(),.1)<<"line 4 len FAIL";
	
	//check points data
	EXPECT_NEAR(0,trap.getLine(2).getBegin().getX(),.1)<<"p2 x FAIL";
	EXPECT_NEAR(0,trap.getLine(2).getBegin().getY(),.1)<<"p2 y FAIL";
	EXPECT_NEAR(0,trap.getLine(3).getBegin().getX(),.1)<<"p3 x FAIL";
	EXPECT_NEAR(0,trap.getLine(3).getBegin().getY(),.1)<<"p3 y FAIL";
	EXPECT_NEAR(0,trap.getLine(4).getBegin().getX(),.1)<<"p4 x FAIL";
	EXPECT_NEAR(0,trap.getLine(4).getBegin().getY(),.1)<<"p4 y FAIL";

	EXPECT_NEAR(0,trap.getLine(2).getEnd().getX(),.1)<<"end p2 x FAIL";
	EXPECT_NEAR(0,trap.getLine(2).getEnd().getY(),.1)<<"end p2 y FAIL";
	EXPECT_NEAR(0,trap.getLine(3).getEnd().getX(),.1)<<"end p3 x FAIL";
	EXPECT_NEAR(0,trap.getLine(3).getEnd().getY(),.1)<<"end p3 y FAIL";
	EXPECT_NEAR(0,trap.getLine(4).getEnd().getX(),.1)<<"end p4 x FAIL";
	EXPECT_NEAR(0,trap.getLine(4).getEnd().getY(),.1)<<"end p4 y FAIL";
}


