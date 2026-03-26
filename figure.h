#pragma once
#include <iostream>
#include <string>

namespace my_namespace {
	class Figure {
	public:
		int getSides() const;
		std::string getName() const;
		void printInfo(Figure* fig) const;
		virtual std::string getLengths() const = 0;
		virtual std::string getCorners() const = 0;
		virtual ~Figure();
	protected:
		Figure(std::string name, int sides);
	private:
		std::string nameF{ "Фигура" };
		int amountSides{ 0 };
	};
}
