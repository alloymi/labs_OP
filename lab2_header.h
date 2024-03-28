#ifndef PROGA___LFB2_HEADER_H
#define PROGA___LFB2_HEADER_H

#include <iostream>
using namespace std;

class quadratic_polynomial {
private:
    double a, b, c;

public:
    // конструкторы:
    quadratic_polynomial(double _a, double _b, double _c);

    quadratic_polynomial(const quadratic_polynomial& another);

    // функционал:
    double calculate_the_value(double x) const;

    int finding_the_number_of_roots() const;

    pair<double, double> finding_roots() const;

    double search_for_min_or_max() const;

    void output() const;

};


#endif
