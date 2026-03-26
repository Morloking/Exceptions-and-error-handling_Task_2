#include "figure.h"

int my_namespace::Figure::getSides() const { return amountSides; }

std::string my_namespace::Figure::getName() const { return nameF; }

void my_namespace::Figure::printInfo(Figure* fig) const {
	std::cout << fig->getName() << ":\n"
		<< "Стороны: " << fig->getLengths() << "\n"
		<< "Углы: " << fig->getCorners() << "\n\n";
}

my_namespace::Figure::~Figure() {}

my_namespace::Figure::Figure(std::string name, int sides) :
	nameF(name), amountSides(sides) {}
