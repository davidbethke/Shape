#include "StdAfx.h"
#include "LineTest.h"
#include <iostream>
using namespace std;

LineTest::LineTest(void):lenLine(5),ptLine(Point(),Point(5)),threeFour(Point(),Point(3,4)),lenLineConst(10)
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
	Line pLine=lenLine.createParallelLine(5,0,2); //offset 5, 0 shift, twice as long
	EXPECT_EQ(10,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(0,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-5,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(10,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(-5,pLine.getEnd().getY())<<"pLine y end FAIL";
}
TEST_F(LineTest,createParallelLineShift)
{
	Line pLine=lenLine.createParallelLine(5,2); // offset by 5,shift by 2 to the left
	//verify lenLine
	EXPECT_EQ(5,lenLine.getLength())<<"lenLine len FAIL";
	EXPECT_EQ(5,lenLine.getEnd().getX())<<"lenline x FAIL";
	EXPECT_EQ(0,lenLine.getEnd().getY())<<"lenLine y FAIL";
	EXPECT_EQ(5,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(-2,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-5,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(3,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(-5,pLine.getEnd().getY())<<"pLine y end FAIL";
}
TEST_F(LineTest,createParallelLineShift2)
{
	Line pLine=threeFour.createParallelLine(5,0,2); // offset by 5,shift by 0 to the left, len*2
	//verify threeFour
	EXPECT_EQ(5,threeFour.getLength())<<"lenLine len FAIL";
	EXPECT_EQ(3,threeFour.getEnd().getX())<<"lenline x FAIL";
	EXPECT_EQ(4,threeFour.getEnd().getY())<<"lenLine y FAIL";
	EXPECT_EQ(10,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(4,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-3,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(10,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(5,pLine.getEnd().getY())<<"pLine y end FAIL";
	//check distance of beg and end
	EXPECT_EQ(5,threeFour.getBegin().distance(pLine.getBegin()))<<"beg dist FAIL";
	//EXPECT_EQ(5,threeFour.getEnd().distance(pLine.getEnd()))<<"end dist FAIL"; //expect fail longer
}

TEST_F(LineTest,createParallelLine3)
{
	Line pLine=threeFour.createParallelLine(5); // offset by 5,shift by 0 to the left, len
	//verify threeFour
	EXPECT_EQ(5,threeFour.getLength())<<"lenLine len FAIL";
	EXPECT_EQ(3,threeFour.getEnd().getX())<<"lenline x FAIL";
	EXPECT_EQ(4,threeFour.getEnd().getY())<<"lenLine y FAIL";
	EXPECT_EQ(5,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(4,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-3,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(7,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(1,pLine.getEnd().getY())<<"pLine y end FAIL";
	//check distance of beg and end
	EXPECT_EQ(5,threeFour.getBegin().distance(pLine.getBegin()))<<"beg dist FAIL";
	EXPECT_EQ(5,threeFour.getEnd().distance(pLine.getEnd()))<<"end dist FAIL";
}
TEST_F(LineTest,createParallelLinePrint)
{
	std::cout.rdbuf(oss.rdbuf());
	Line pLine=threeFour.createParallelLine(5); // offset by 5,shift by 0 to the left, len
	//verify threeFour
	EXPECT_EQ(5,threeFour.getLength())<<"lenLine len FAIL";
	EXPECT_EQ(3,threeFour.getEnd().getX())<<"lenline x FAIL";
	EXPECT_EQ(4,threeFour.getEnd().getY())<<"lenLine y FAIL";
	EXPECT_EQ(5,pLine.getLength())<<"pLine len FAIL";
	EXPECT_EQ(4,pLine.getBegin().getX())<<"pLine x FAIL";
	EXPECT_EQ(-3,pLine.getBegin().getY())<<"pLine y FAIL";
	EXPECT_EQ(7,pLine.getEnd().getX())<<"pLine x end FAIL";
	EXPECT_EQ(1,pLine.getEnd().getY())<<"pLine y end FAIL";
	// print it
	cout<<pLine.getBegin();
	EXPECT_EQ("x:4, y:-3",oss.str());
	oss.str("");
	cout <<pLine.getEnd();
	EXPECT_EQ("x:7, y:1",oss.str());
	//check distance of beg and end
	EXPECT_EQ(5,threeFour.getBegin().distance(pLine.getBegin()))<<"beg dist FAIL";
	EXPECT_EQ(5,threeFour.getEnd().distance(pLine.getEnd()))<<"end dist FAIL";
}