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
		p_cout_streambuf = std::cout.rdbuf();
	}
	virtual void TearDown()
	{
		std::cout.rdbuf(p_cout_streambuf); // restore
	}
	Line lenLine, ptLine,threeFour;
	const Line lenLineConst;
	std::ostringstream oss;
	std::streambuf* p_cout_streambuf;
public:
	LineTest(void);
	~LineTest(void);
};
#endif //LINE_TEST_H