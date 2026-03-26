#include "rectangle.h"
#include "my_exception.h"

my_namespace::Rectangle::Rectangle(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4) :
	Quadrangle( l1, l2, l3, l4, c1, c2, c3, c4, "Прямоугольник") {
	if (l1 != l3 || l2 != l4) throw MyException("стороны a,c и b,d попарно не равны");
	if (c1 != 90 || c2 != 90 || c3 != 90 || c4 != 90) throw MyException("не каждый угол равен 90");
}

