#ifndef PROGA___LFB2_HEADER_H
#define PROGA___LFB2_HEADER_H

#include <iostream>

class quadratic_polynomial {
private:
    double a, b, c;

public:
//    double get_a() const;
//    double get_b() const;
//    double get_c() const;

    // конструкторы:
    quadratic_polynomial(double _a, double _b, double _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
    //quadratic_polynomial(const quadratic_polynomial& other);

    // функционал:
    double calculate_the_value(double x);

    int finding_the_number_of_roots();

    void finding_roots();

    double search_for_min_or_max();

    void output();

    //void сopy_polynomial(const quadratic_polynomial& quadraticPolynomial);

};

#endif
