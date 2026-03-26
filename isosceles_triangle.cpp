#include "isosceles_triangle.h"
#include "my_exception.h"

my_namespace::IsoscelesTriangle::IsoscelesTriangle(int l1, int l2, int l3, int c1, int c2, int c3) :
	Triangle(l1, l2, l3, c1, c2, c3, "Равнобедренный треугольник") {
	if (l1 != l3) throw MyException("стороны a и c не равны");
	if (c1 != c3) throw MyException("углы A и C не равны");
}
