#include "StdAfx.h"
#include "QuadrilateralTest.h"
#include "MockQuadrilateral.h"
#include "gmock\gmock.h"
#include "Square.h"

QuadrilateralTest::QuadrilateralTest(void):p1(0,0),
											p2(0,1),
											p3(1,1),
											p4(1,0),
											quad1(p1,p2,p3,p4)
{
	dimString="Quadrilateral Dimensions\nSide1 length:1\nSide2 length:1\nSide3 length:1\nSide4 length:1\nVerteces\nx:0, y:0\nx:0, y:1\nx:1, y:1\nx:1, y:0\n";
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
						,1,1
						);

	// check x vals
	EXPECT_EQ(0,quad.getX(1))<<"x 1 FAIL";
	EXPECT_EQ(0,quad.getX(2))<<"x 2 FAIL";
	EXPECT_EQ(1,quad.getX(3))<<"x 3 FAIL";
	EXPECT_EQ(1,quad.getX(4))<<"x 4 FAIL";
	//check y vals
	EXPECT_EQ(0,quad.getY(1))<<"y 1 FAIL";
	EXPECT_EQ(1,quad.getY(2))<<"y 2 FAIL";
	EXPECT_EQ(1,quad.getY(3))<<"y 3 FAIL";
	EXPECT_EQ(0,quad.getY(4))<<"y 4 FAIL";
	// check Points
	Point p1(0,0),p2(0,1),p3(1,1),p4(1,0);
	EXPECT_TRUE(p1 == quad.getPoint(1))<<"point 1 FAIL";
	EXPECT_TRUE(p2 == quad.getPoint(2))<<"point 2 FAIL";
	EXPECT_TRUE(p3 == quad.getPoint(3))<<"point 3 FAIL";
	EXPECT_TRUE(p4 == quad.getPoint(4))<<"point 4 FAIL";
	// check Lines
	EXPECT_TRUE(p1 == quad.getLine(1).getBegin())<<"line1 FAIL";
	EXPECT_TRUE(p2 == quad.getLine(1).getEnd())<<"line1 FAIL";
	EXPECT_TRUE(p2 == quad.getLine(2).getBegin())<<"line2 FAIL";
	EXPECT_TRUE(p3 == quad.getLine(2).getEnd())<<"line2 FAIL";
	EXPECT_TRUE(p3 == quad.getLine(3).getBegin())<<"line3 FAIL";
	EXPECT_TRUE(p4 == quad.getLine(3).getEnd())<<"line3 FAIL";
	EXPECT_TRUE(p4 == quad.getLine(4).getBegin())<<"line4 FAIL";
	EXPECT_TRUE(p1 == quad.getLine(4).getEnd())<<"line4 FAIL";

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
TEST_F(QuadrilateralTest,display)
{
	std::cout.rdbuf(oss.rdbuf());
	quad1.displayDimensions();
	EXPECT_EQ(dimString,oss.str())<<"display string FAIL";
}
TEST_F(QuadrilateralTest,constructorLen)
{
	double len1,len2,len3,len4;
	len1=len2=len3=len4=50.0;
	Point p1(0,0), p2(0,50),p3(50,50),p4(50,0);
	//use default angles for now
	//construct Quadrilateral
	Quadrilateral quad(1,len1,len2,len3,len4); // default angle
	ASSERT_NEAR(50,quad.getLine(1).getLength(),.1)<<"line 1 len FAIL";
	ASSERT_NEAR(50,quad.getLine(2).getLength(),.1)<<"line 2 len FAIL";
	ASSERT_NEAR(50,quad.getLine(3).getLength(),.1)<<"line 3 len FAIL";
	ASSERT_NEAR(50,quad.getLine(4).getLength(),.1)<<"line 4 len FAIL";
	/*
	//check points
	EXPECT_EQ(p1,quad.getPoint(1))<<"point1 FAil";
	EXPECT_EQ(p2,quad.getPoint(2))<<"point1 FAil";
	EXPECT_EQ(p3,quad.getPoint(3))<<"point1 FAil";
	EXPECT_EQ(p4,quad.getPoint(4))<<"point1 FAil";
	*/
	//check points from line
	/*
	EXPECT_TRUE(p1==quad.getLine(1).getBegin())<<"point1 FAil";
	EXPECT_TRUE(p2==quad.getLine(2).getBegin())<<"point2 FAil";
	EXPECT_TRUE(p3==quad.getLine(3).getBegin())<<"point3 FAil";
	EXPECT_TRUE(p4==quad.getLine(4).getBegin())<<"point4 FAil";
	*/
	//check points data
	ASSERT_NEAR(p2.getX(),quad.getLine(2).getBegin().getX(),.2)<<"p2 x FAIL";
	ASSERT_NEAR(p2.getY(),quad.getLine(2).getBegin().getY(),.1)<<"p2 y FAIL";
	ASSERT_NEAR(p3.getX(),quad.getLine(3).getBegin().getX(),.1)<<"p3 x FAIL";
	ASSERT_NEAR(p3.getY(),quad.getLine(3).getBegin().getY(),.1)<<"p3 y FAIL";
	ASSERT_NEAR(p4.getX(),quad.getLine(4).getBegin().getX(),.1)<<"p4 x FAIL";
	ASSERT_NEAR(p4.getY(),quad.getLine(4).getBegin().getY(),.1)<<"p4 y FAIL";

	ASSERT_NEAR(p3.getX(),quad.getLine(2).getEnd().getX(),.1)<<"end p2 x FAIL";
	ASSERT_NEAR(p3.getY(),quad.getLine(2).getEnd().getY(),.1)<<"end p2 y FAIL";
	ASSERT_NEAR(p4.getX(),quad.getLine(3).getEnd().getX(),.1)<<"end p3 x FAIL";
	ASSERT_NEAR(p4.getY(),quad.getLine(3).getEnd().getY(),.1)<<"end p3 y FAIL";
	ASSERT_NEAR(p1.getX(),quad.getLine(4).getEnd().getX(),.1)<<"end p4 x FAIL";
	ASSERT_NEAR(p1.getY(),quad.getLine(4).getEnd().getY(),.1)<<"end p4 y FAIL";
}
// try Mock
TEST_F(QuadrilateralTest,mockTest1)
{
	MockQuadrilateral mQuad;
	EXPECT_CALL(mQuad,displayDimensions())              
	  .Times(1);
	Square square(25);
	mQuad.displayDimensions();
	mQuad.displayDimensions();

}
