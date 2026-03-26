#include "equilateral_triangle.h"
#include "my_exception.h"

my_namespace::EquilateralTriangle::EquilateralTriangle(int l1, int l2, int l3, int c1, int c2, int c3) :
	Triangle(l1, l2, l3, c1, c2, c3, "Равносторонний треугольник") {
	if (l1 != l2 || l2 != l3) throw MyException("не все стороны равны");
	if (c1 != 60 || c2 != 60 || c3 != 60) throw MyException("не каждый угол равен 60");
}
