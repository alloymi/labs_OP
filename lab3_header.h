#ifndef PROGA___LAB3_HEADER_H
#define PROGA___LAB3_HEADER_H

#include <iostream>
#include <vector>
using namespace std;

//4

class matrix {
private:
    int mat[3][3];

public:
    matrix();

    Matrix3x3 operator*(const Matrix3x3& other) const;
    Matrix3x3 operator*(int scalar) const;
    Matrix3x3 operator+(const Matrix3x3& other) const;
    Matrix3x3 operator-(const Matrix3x3& other) const;
    bool operator==(const Matrix3x3& other) const;
    bool operator!=(const Matrix3x3& other) const;
    bool operator>(const Matrix3x3& other) const;
    bool operator<(const Matrix3x3& other) const;

};




// 6
class massive {
private:
//    int mas[100];
//    int length;

public:
    massive();

    massive operator + (const massive &mas) const;

    bool operator == (const massive &mas) const;

    bool operator != (const massive &mas) const;

    bool operator > (const massive &mas) const;

    bool operator < (const massive &mas) const;

    int mas[100];
    int length;

//    int get_length() const;
//    int get_elem(int i) const;
};


#endif //PROGA___LAB3_HEADER_H
