#include "lab2_header.h"
#include <cmath>
#include <iostream>
using namespace std;



double quadratic_polynomial::calculate_the_value(double x) {
    return a * x * x + b * x + c;
}

int quadratic_polynomial::finding_the_number_of_roots() {
    double discr = b * b - 4 * a * c;
    if (discr > 0)
        return 2;
    else if (discr == 0)
        return 1;
    else
        return 0;
}

void quadratic_polynomial::finding_roots() {
    double discr = b * b - 4 * a * c;
    if (discr < 0) {
        return;
    } else {
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);
        return;
    }
}

double quadratic_polynomial::search_for_min_or_max() {
    return -b / (2 * a);
}

void quadratic_polynomial::output() {


}


void function_that_uses_copy_constructor(const quadratic_polynomial& poly) {
    quadratic_polynomial copy(poly);
}







//
//Polynomial::Polynomial(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}
//
//double Polynomial::getA() const { return a; }
//double Polynomial::getB() const { return b; }
//double Polynomial::getC() const { return c; }
//
//double Polynomial::evaluate(double x) const {
//    return a * x * x + b * x + c;
//}
//
//int Polynomial::numRoots() const {
//    double discriminant = b * b - 4 * a * c;
//    if (discriminant > 0)
//        return 2;
//    else if (discriminant == 0)
//        return 1;
//    else
//        return 0;
//}
//
//std::pair<double, double> Polynomial::roots() const {
//    double discriminant = b * b - 4 * a * c;
//    if (discriminant < 0) {
//        return std::make_pair(NAN, NAN);
//    } else {
//        double root1 = (-b + sqrt(discriminant)) / (2 * a);
//        double root2 = (-b - sqrt(discriminant)) / (2 * a);
//        return std::make_pair(root1, root2);
//    }
//}
//
//double Polynomial::extrema() const {
//    return -b / (2 * a);
//}
//
//std::ostream& operator<<(std::ostream& os, const Polynomial& poly) {
//    os << poly.getA() << "x^2";
//    if (poly.getB() >= 0)
//        os << " + " << poly.getB() << "x";
//    else
//        os << " - " << -poly.getB() << "x";
//    if (poly.getC() >= 0)
//        os << " + " << poly.getC();
//    else
//        os << " - " << -poly.getC();
//    return os;
//}
