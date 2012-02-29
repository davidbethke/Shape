#include "StdAfx.h"
#include "PointTest.h"
#include <iostream>
using namespace std;
PointTest::PointTest(void):myPoint(),fiveFive(5,5),twoThree(2,3),myPointConst()
{
}


PointTest::~PointTest(void)
{
}
TEST_F(PointTest,basicPoint)
{
	EXPECT_EQ(0,myPoint.getX())<<"get x non const FAIL";
	EXPECT_EQ(0,myPoint.getY())<<"get y non const FAIL";
	EXPECT_EQ(0,myPointConst.getX())<<"get x const FAIL";
	EXPECT_EQ(0,myPointConst.getY())<<"get y const FAIL";
	EXPECT_EQ(5,fiveFive.getX())<<"get x const FAIL";
	EXPECT_EQ(5,fiveFive.getY())<<"get y const FAIL";
	EXPECT_EQ(2,twoThree.getX())<<"get x const FAIL";
	EXPECT_EQ(3,twoThree.getY())<<"get y const FAIL";

}
TEST_F(PointTest,opPlus)
{
	Point sum1;
	sum1=fiveFive+myPoint;
	EXPECT_EQ(5,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(5,sum1.getY())<<"sum y FAIL";
	sum1=fiveFive+twoThree;
	EXPECT_EQ(7,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(8,sum1.getY())<<"sum y FAIL";
	//const
	sum1=twoThree+myPointConst;
	EXPECT_EQ(2,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(3,sum1.getY())<<"sum y FAIL";

}
TEST_F(PointTest,opMinus)
{
	Point sum1;
	sum1=fiveFive-myPoint;
	EXPECT_EQ(5,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(5,sum1.getY())<<"sum y FAIL";
	sum1=myPoint-fiveFive;
	EXPECT_EQ(-5,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(-5,sum1.getY())<<"sum y FAIL";
	sum1=fiveFive-twoThree;
	EXPECT_EQ(3,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(2,sum1.getY())<<"sum y FAIL";
	//const
	sum1=twoThree-myPointConst;
	EXPECT_EQ(2,sum1.getX())<<"sum x FAIL";
	EXPECT_EQ(3,sum1.getY())<<"sum y FAIL";

}
TEST_F(PointTest,opDist)
{
	double dist;
	dist=fiveFive.distance(myPoint);
	EXPECT_NEAR(7.07107,dist,.00001)<<"dist calc FAIL";
	dist=fiveFive.distance(twoThree);
	EXPECT_DOUBLE_EQ(3.6055512754639891,dist)<<"dist calc FAIL";
	dist=fiveFive.distance(twoThree);
	ASSERT_DOUBLE_EQ(3.6055512754639891,dist)<<"dist calc FAIL";
	//const
	dist=myPointConst.distance(fiveFive);
	EXPECT_NEAR(7.07107,dist,.00001)<<"dist calc const FAIL";

}
TEST_F(PointTest,printPoint)
{
	std::cout.rdbuf(oss.rdbuf());
	cout << fiveFive;
	EXPECT_EQ("x:5, y:5",oss.str());
	oss.str("");
	cout << twoThree;
	EXPECT_EQ("x:2, y:3",oss.str());
	oss.str("");
	cout << myPoint;
	EXPECT_EQ("x:0, y:0",oss.str());
	oss.str("");
	cout << myPointConst;
	EXPECT_EQ("x:0, y:0",oss.str());
	oss.str("");
}

