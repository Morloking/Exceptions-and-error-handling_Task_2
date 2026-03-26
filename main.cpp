#include <iostream>

#include "my_exception.h"

#include "triangle.h"
#include "rectangular_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    // ========== ПРАВИЛЬНЫЕ ФИГУРЫ ==========
    std::cout << "=== Правильные фигуры ===\n";
    try {
        my_namespace::Triangle triangle(10, 20, 30, 50, 60, 70);
        triangle.printInfo(&triangle);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::RectangularTriangle rectTriangle(10, 20, 30, 30, 60, 90);
        rectTriangle.printInfo(&rectTriangle);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::IsoscelesTriangle isosTriangle(10, 15, 10, 50, 80, 50);
        isosTriangle.printInfo(&isosTriangle);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::EquilateralTriangle eqTriangle(30, 30, 30, 60, 60, 60);
        eqTriangle.printInfo(&eqTriangle);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::Quadrangle quad(10, 20, 30, 40, 60, 80, 100, 120);
        quad.printInfo(&quad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        rectangle.printInfo(&rectangle);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::Square square(20, 20, 20, 20, 90, 90, 90, 90);
        square.printInfo(&square);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::Parallelogram parallelogram(20, 30, 20, 30, 30, 150, 30, 150);
        parallelogram.printInfo(&parallelogram);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    try {
        my_namespace::Rhomb rhomb(30, 30, 30, 30, 60, 120, 60, 120);
        rhomb.printInfo(&rhomb);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // ========== НЕПРАВИЛЬНЫЕ ФИГУРЫ ==========
    std::cout << "\n=== Неправильные фигуры ===\n";

    // Треугольник: сумма углов != 180
    try {
        my_namespace::Triangle triangleBad(10, 20, 30, 50, 60, 80);
        triangleBad.printInfo(&triangleBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Прямоугольный треугольник: угол C != 90
    try {
        my_namespace::RectangularTriangle rectTriangleBad(10, 20, 30, 50, 50, 80);
        rectTriangleBad.printInfo(&rectTriangleBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Равнобедренный треугольник: стороны a и c не равны
    try {
        my_namespace::IsoscelesTriangle isosTriangleBad(10, 15, 12, 50, 80, 50);
        isosTriangleBad.printInfo(&isosTriangleBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Равносторонний треугольник: стороны не равны
    try {
        my_namespace::EquilateralTriangle eqTriangleBad(30, 40, 30, 60, 60, 60);
        eqTriangleBad.printInfo(&eqTriangleBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Четырёхугольник: сумма углов != 360
    try {
        my_namespace::Quadrangle quadBad(10, 20, 30, 40, 50, 60, 70, 80);
        quadBad.printInfo(&quadBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Прямоугольник: стороны не попарно равны
    try {
        my_namespace::Rectangle rectangleBad(10, 20, 30, 40, 90, 90, 90, 90);
        rectangleBad.printInfo(&rectangleBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Квадрат: стороны не равны
    try {
        my_namespace::Square squareBad(20, 20, 30, 30, 90, 90, 90, 90);
        squareBad.printInfo(&squareBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Параллелограмм: стороны не попарно равны
    try {
        my_namespace::Parallelogram parallelogramBad(20, 30, 40, 50, 30, 150, 30, 150);
        parallelogramBad.printInfo(&parallelogramBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    // Ромб: стороны не равны
    try {
        my_namespace::Rhomb rhombBad(30, 30, 40, 40, 60, 120, 60, 120);
        rhombBad.printInfo(&rhombBad);
    }
    catch (my_namespace::MyException& ex) {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << "\n";
    }

    return 0;
}
