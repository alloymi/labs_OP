#include "lab2_header.h"
#include <cmath>
#include <iostream>
using namespace std;

quadratic_polynomial::quadratic_polynomial(const quadratic_polynomial& another) {
    a = another.a;
    b = another.b;
    c = another.c;
}

quadratic_polynomial::quadratic_polynomial(double _a, double _b, double _c) {
    a = _a;
    b = _b;
    c = _c;
}

double quadratic_polynomial::calculate_the_value(double x) const {
    return a * x * x + b * x + c;
}

int quadratic_polynomial::finding_the_number_of_roots() const {
    double discr = b * b - 4 * a * c;
    if (discr > 0)
        return 2;
    else if (discr == 0)
        return 1;
    else
        return 0;
}

pair<double, double> quadratic_polynomial::finding_roots() const {
    double discr = b * b - 4 * a * c;
    if (discr < 0) {
        return {0, 0};
    } else {
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);
        return {root1, root2};
    }
}

double quadratic_polynomial::search_for_min_or_max() const {
    return -b / (2 * a);
}

void quadratic_polynomial::output() const {
    cout << "Quadratic polynomial: " << a << "x^2 + " << b << "x + " << c << '\n';
}
