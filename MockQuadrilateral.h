#pragma once
#include "gmock\gmock.h"
#include "quadrilateral.h"
class MockQuadrilateral :
	public Quadrilateral
{
public:
	MOCK_CONST_METHOD0(displayDimensions,void());
};

