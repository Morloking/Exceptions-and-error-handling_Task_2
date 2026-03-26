#include "rectangular_triangle.h"
#include "my_exception.h"

my_namespace::RectangularTriangle::RectangularTriangle(int l1, int l2, int l3, int c1, int c2, int c3) :
	Triangle(l1, l2, l3, c1, c2, c3, "Прямоугольный треугольник") {
	if (c3 != 90) throw MyException("угол C не равен 90");
}
