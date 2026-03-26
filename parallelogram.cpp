#include "parallelogram.h"
#include "my_exception.h"

my_namespace::Parallelogram::Parallelogram(int l1, int l2, int l3, int l4, int c1, int c2, int c3, int c4) :
	Quadrangle(l1, l2, l3, l4, c1, c2, c3, c4, "Параллелограмм") {
	if (l1 != l3 || l2 != l4) throw MyException("стороны a,c и b,d попарно не равны");
	if (c1 != c3 || c2 != c4) throw MyException("углы A,C и B,D попарно не равны");
}
