#include "lab4_header.h"
#include <iostream>
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::square() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

void Circle::draw() const {
    std::cout << "Circle: radius = " << radius << ", center point = (" << x1 << ", " << y1 << ")\n";
}

double Circle::mass() const {
    return this->weight;
}

void Circle::initFromDialog() {
    std::cout << "Input radius of circle: ";
    std::cin >> radius;
    std::cout << "Input coordinates of the center as x, y: ";
    std::cin >> x1 >> y1;
}

unsigned int Circle::size() const {
    return sizeof(*this);
}

const char *Circle::classname() const {
    return class_name;
}

Parallelogram::Parallelogram(double s1, double s2) : side1(s1), side2(s2) {}

double Parallelogram::square() const {
    return side1 * side2;
}

double Parallelogram::perimeter() const {
    return 2 * (side1 + side2);
}

void Parallelogram::draw() const {
    std::cout << "Parallelogram: " << "First side = " << side1 << "Second side = " << side2 << '\n';
}

double Parallelogram::mass() const {
    return this->weight;
}

void Parallelogram::initFromDialog() {
    std::cout << "Input sides of parallelogram: ";
    std::cin >> side1 >> side2;
    std::cout << "Input coordinates of the points as x, y: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
}

unsigned int Parallelogram::size() const {
    return sizeof(*this);
}

const char* Parallelogram::classname() const {
    return class_name;
}
//
//void FigureContainer::addFigure(IGeoFig* figure) {
//    figures.push_back(figure);
//}
//
//double FigureContainer::totalSquare() const {
//    double total = 0;
//    for (const auto& figure : figures) {
//        total += figure->square();
//    }
//    return total;
//}
//
//double FigureContainer::totalPerimeter() const {
//    double total = 0;
//    for (const auto& figure : figures) {
//        total += figure->perimeter();
//    }
//    return total;
//}
//
//// Центр масс всей системы.
//std::pair<double, double> FigureContainer::centerOfMass() const {
//    double totalX = 0, totalY = 0;
//    double totalMass = 0;
//
//    for (const auto& figure : figures) {
//        double mass = figure->mass();
//        auto position = figure->position();
//        totalX += position.x * mass;
//        totalY += position.y * mass;
//        totalMass += mass;
//    }
//
//    return {totalX / totalMass, totalY / totalMass};
//}

#include <iostream>

