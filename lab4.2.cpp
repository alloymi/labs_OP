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


Parallelogram::Parallelogram(double s1, double s2) : side1(s1), side2(s2) {}

double Parallelogram::square() const {
    return side1 * side2;
}

double Parallelogram::perimeter() const {
    return 2 * (side1 + side2);
}

void FigureContainer::addFigure(IGeoFig* figure) {
    figures.push_back(figure);
}

double FigureContainer::totalSquare() const {
    double total = 0;
    for (const auto& figure : figures) {
        total += figure->square();
    }
    return total;
}

double FigureContainer::totalPerimeter() const {
    double total = 0;
    for (const auto& figure : figures) {
        total += figure->perimeter();
    }
    return total;
}

// Центр масс всей системы.
std::pair<double, double> FigureContainer::centerOfMass() const {
    double totalX = 0, totalY = 0;
    double totalMass = 0;

    for (const auto& figure : figures) {
        double mass = figure->mass(); // Предположим, что этот метод реализован в наследниках IPhysObject
        auto position = figure->position(); // Предположим, что этот метод реализован в наследниках IPhysObject
        totalX += position.x * mass;
        totalY += position.y * mass;
        totalMass += mass;
    }

    return {totalX / totalMass, totalY / totalMass};
}
