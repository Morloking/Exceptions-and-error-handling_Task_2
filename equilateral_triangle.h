#pragma once
#include "triangle.h"

namespace my_namespace {
	class EquilateralTriangle :
		public Triangle {
	public:
		EquilateralTriangle(int l1, int l2, int l3, int c1, int c2, int c3);
	};
}
