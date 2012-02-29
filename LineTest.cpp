#include "StdAfx.h"
#include "LineTest.h"


LineTest::LineTest(void):lenLine(5),ptLine(Point(),Point(5)),lenLineConst(10)
{
}


LineTest::~LineTest(void)
{
}
TEST_F(LineTest,getLength)
{
	EXPECT_EQ(5,lenLine.getLength())<<"lenLine length FAIL";
	EXPECT_EQ(5,ptLine.getLength())<<"ptLine length FAIL";
	EXPECT_EQ(10,lenLineConst.getLength())<<"lenLineConst length FAIL";
}
TEST_F(LineTest,getBegin)
{
	EXPECT_EQ(0,lenLine.getBegin().getX())<<"lenLine getBegin x FAIL";
	EXPECT_EQ(0,lenLine.getBegin().getY())<<"lenLine getBegin x FAIL";
	EXPECT_EQ(0,ptLine.getBegin().getX())<<"lenLine getBegin x FAIL";
	EXPECT_EQ(0,ptLine.getBegin().getY())<<"lenLine getBegin x FAIL";
	EXPECT_EQ(0,lenLineConst.getBegin().getX())<<"lenLine getBegin x FAIL";
	EXPECT_EQ(0,lenLineConst.getBegin().getY())<<"lenLine getBegin x FAIL";
}
TEST_F(LineTest,getEnd)
{
	EXPECT_EQ(5,lenLine.getEnd().getX())<<"lenLine getEnd x FAIL";
	EXPECT_EQ(0,lenLine.getEnd().getY())<<"lenLine getEnd x FAIL";
	EXPECT_EQ(5,ptLine.getEnd().getX())<<"lenLine getEnd x FAIL";
	EXPECT_EQ(0,ptLine.getEnd().getY())<<"lenLine getEnd x FAIL";
	EXPECT_EQ(10,lenLineConst.getEnd().getX())<<"lenLine getEnd x FAIL";
	EXPECT_EQ(0,lenLineConst.getEnd().getY())<<"lenLine getEnd x FAIL";
}
TEST_F(LineTest,createParallelLine)
{
	Line pLine=lenLine.createParallelLine(5);
	EXPECT_EQ(5,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(0,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-5,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(5,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(-5,pLine.getEnd().getY())<<"pLine y end FAIL";
}
TEST_F(LineTest,createParallelLine2)
{
	Line pLine=lenLine.createParallelLine(5,2); // twice as long
	EXPECT_EQ(10,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(0,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-5,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(10,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(-5,pLine.getEnd().getY())<<"pLine y end FAIL";
}
