#ifndef PROGA___LAB3_HEADER_H
#define PROGA___LAB3_HEADER_H

#include <iostream>
#include <vector>
using namespace std;

//4
class matrix {

public:
    int mat[3][3];

    matrix();

    matrix operator * (const matrix &other) const;
    matrix operator * (double real_num) const;

    matrix operator + (const matrix &other) const;
    matrix operator - (const matrix &other) const;

    bool operator == (const matrix &other) const;
    bool operator != (const matrix &other) const;

    bool operator > (const matrix &other) const;
    bool operator < (const matrix &other) const;

    void print_matrix() const;

};

// 6
class massive {

public:
    int mas[100];
    int length;

    massive();

    massive operator + (const massive &mas) const;

    bool operator == (const massive &mas) const;
    bool operator != (const massive &mas) const;

    bool operator > (const massive &mas) const;
    bool operator < (const massive &mas) const;

    void print_massive() const;

};

#endif //PROGA___LAB3_HEADER_H