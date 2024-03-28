#include <cmath>
#include <iostream>
#include "lab3_header.h"
using namespace std;

matrix::matrix() {}

matrix matrix::operator * (const matrix& other) const {
    matrix result_mat;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_mat.mat[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result_mat.mat[i][j] += mat[i][k] * other.mat[k][j];
            }
        }
    }
    return result_mat;
}

matrix matrix::operator * (double real_num) const {
    matrix result_mat;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_mat.mat[i][j] = mat[i][j] * real_num;
        }
    }
    return result_mat;
}

matrix matrix::operator + (const matrix& other) const {
    matrix result_mat;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_mat.mat[i][j] = mat[i][j] + other.mat[i][j];
        }
    }
    return result_mat;
}

matrix matrix::operator - (const matrix& other) const {
    matrix result_mat;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result_mat.mat[i][j] = mat[i][j] - other.mat[i][j];
        }
    }
    return result_mat;
}

bool matrix::operator == (const matrix& other) const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mat[i][j] != other.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool matrix::operator != (const matrix& other) const {
    return !(*this == other);
}

bool matrix::operator > (const matrix& other) const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mat[i][j] <= other.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool matrix::operator < (const matrix& other) const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mat[i][j] >= other.mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void matrix::print_matrix() const {
    cout << "Matrix: \n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
}

massive::massive() {}

massive massive::operator + (const massive& mas) const {
    massive result_mas;
    int total_length = length + mas.length;
    if (total_length > 100)
        result_mas.length = 100;
    else
        result_mas.length = total_length;
    for (int i = 0; i < result_mas.length; ++i) {
        if (i < length)
            result_mas.mas[i] = mas.mas[i];
        else
            result_mas.mas[i] = mas.mas[i - length];
    }
    return result_mas;
}

bool massive::operator == (const massive& mas) const {
    if (length != mas.length)
        return false;
    for (int i = 0; i < length; ++i) {
        if (mas.mas[i] != mas.mas[i])
            return false;
    }
    return true;
}

bool massive::operator != (const massive& mas) const {
    return !(this->operator==(mas));
}


bool massive::operator > (const massive& mas) const {
    for (int i = 0; i < length && i < mas.length; ++i) {
        if (this->mas[i] > mas.mas[i])
            return true;
        else if (this->mas[i] < mas.mas[i])
            return false;
    }
    return length > mas.length;
}

bool massive::operator < (const massive& mas) const {
    for (int i = 0; i < length && i < mas.length; ++i) {
        if (this->mas[i] < mas.mas[i])
            return true;
        else if (this->mas[i] > mas.mas[i])
            return false;
    }
    return length < mas.length;
}

void massive::print_massive() const {
    cout << "Array: \n";
    for (int i = 0; i < 3; ++i) {
        cout << mas[i] << ' ';
    }
}
