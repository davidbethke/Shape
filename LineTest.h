#ifndef LINE_TEST_H
#define LINE_TEST_H
#include "d:\users\dave\documents\visual studio 2010\projects\gmock\gmock-1.6.0\gtest\include\gtest\gtest.h"
#include "Line.h"
class LineTest :
	public ::testing::Test
{
protected:
	virtual void SetUp()
	{
	}
	virtual void TearDown()
	{
	}
	Line lenLine, ptLine,threeFour;
	const Line lenLineConst;
public:
	LineTest(void);
	~LineTest(void);
};
#endif //LINE_TEST_H