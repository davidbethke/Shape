#include "StdAfx.h"
#include "QuadrilateralTest.h"


QuadrilateralTest::QuadrilateralTest(void)
{
}


QuadrilateralTest::~QuadrilateralTest(void)
{
}
TEST_F(QuadrilateralTest,constructor1)
{
	Quadrilateral quad(0,0,
						0,1,
						1,1,
						1,0
						);

	// check x vals
	EXPECT_EQ(0,quad.getX(1))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getX(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(3))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(4))<<"x 1 FAIL";
	//check y vals
	EXPECT_EQ(0,quad.getY(1))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(3))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getY(4))<<"x 1 FAIL";
	// check Points
	Point p1(0,0),p2(0,1),p3(1,1),p4(1,0);
	EXPECT_TRUE(p1 == quad.getPoint(1))<<"point FAIL";
	EXPECT_TRUE(p2 == quad.getPoint(2))<<"point FAIL";
	EXPECT_TRUE(p3 == quad.getPoint(3))<<"point FAIL";
	EXPECT_TRUE(p4 == quad.getPoint(4))<<"point FAIL";
	// check Lines
	EXPECT_TRUE(p1 == quad.getLine(1).getBegin())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(1).getEnd())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(2).getBegin())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(2).getEnd())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(3).getBegin())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(3).getEnd())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(4).getBegin())<<"line FAIL";
	EXPECT_TRUE(p1 == quad.getLine(4).getEnd())<<"line FAIL";

}
TEST_F(QuadrilateralTest,constructor2)
{
	Point p1(0,0),p2(0,1),p3(1,1),p4(1,0);
	Quadrilateral quad(p1,p2,p3,p4);

	// check x vals
	EXPECT_EQ(0,quad.getX(1))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getX(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(3))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(4))<<"x 1 FAIL";
	//check y vals
	EXPECT_EQ(0,quad.getY(1))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(3))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getY(4))<<"x 1 FAIL";
	// check Points
	
	EXPECT_TRUE(p1 == quad.getPoint(1))<<"point FAIL";
	EXPECT_TRUE(p2 == quad.getPoint(2))<<"point FAIL";
	EXPECT_TRUE(p3 == quad.getPoint(3))<<"point FAIL";
	EXPECT_TRUE(p4 == quad.getPoint(4))<<"point FAIL";
	// check Lines
	EXPECT_TRUE(p1 == quad.getLine(1).getBegin())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(1).getEnd())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(2).getBegin())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(2).getEnd())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(3).getBegin())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(3).getEnd())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(4).getBegin())<<"line FAIL";
	EXPECT_TRUE(p1 == quad.getLine(4).getEnd())<<"line FAIL";

}
TEST_F(QuadrilateralTest,constructor3)
{
	Point p1(0,0),p2(0,1),p3(1,1),p4(1,0);
	Line l1(p1,p2), l2(p2,p3), l3(p3,p4), l4(p4,p1);
	Quadrilateral quad(l1,l2,l3,l4);

	// check x vals
	EXPECT_EQ(0,quad.getX(1))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getX(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(3))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getX(4))<<"x 1 FAIL";
	//check y vals
	EXPECT_EQ(0,quad.getY(1))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(2))<<"x 1 FAIL";
	EXPECT_EQ(1,quad.getY(3))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getY(4))<<"x 1 FAIL";
	// check Points
	
	EXPECT_TRUE(p1 == quad.getPoint(1))<<"point FAIL";
	EXPECT_TRUE(p2 == quad.getPoint(2))<<"point FAIL";
	EXPECT_TRUE(p3 == quad.getPoint(3))<<"point FAIL";
	EXPECT_TRUE(p4 == quad.getPoint(4))<<"point FAIL";
	// check Lines
	EXPECT_TRUE(p1 == quad.getLine(1).getBegin())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(1).getEnd())<<"line FAIL";
	EXPECT_TRUE(p2 == quad.getLine(2).getBegin())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(2).getEnd())<<"line FAIL";
	EXPECT_TRUE(p3 == quad.getLine(3).getBegin())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(3).getEnd())<<"line FAIL";
	EXPECT_TRUE(p4 == quad.getLine(4).getBegin())<<"line FAIL";
	EXPECT_TRUE(p1 == quad.getLine(4).getEnd())<<"line FAIL";

}