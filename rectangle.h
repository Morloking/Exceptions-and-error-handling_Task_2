#pragma once
#include "quadrangle.h"

namespace my_namespace {
	class Rectangle :
		public Quadrangle {
	public:
		Rectangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4);
	};
}
