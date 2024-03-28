#include <iostream>
#include "lab1_header.h"
using namespace std;

int main() {

    // Меняет значения двух входных переменных друг на друга
    int a = 4, b = 2;
    int a1 = a, b1 = b;
    cout << "a = " << a << " b = " << b << '\n';

    swap_point(&a, &b);
    cout << "Swap with pointers : a = " << a << " b = " << b << '\n';

    swap_ref(a1, b1);
    cout << "Swap with references : a = " << a1 << " b = " << b1 << '\n' << '\n';


    // Округляет вещественное число
    float c = 42.424242;
    float c1 = c;

    cout << c << '\n';

    round_point(&c);
    cout << c << '\n';

    round_ref(c1);
    cout << c1 << '\n' << '\n';


    // Умножает комплексную переменную на второй аргумент процедуры - вещественное число
    complex_num d = {4.2, 2.4};
    complex_num d1 = d;
    double e = 42.42;
    double e1 = e;

    cout << '(' << d.real << " + " << d.imag << ") * " << e << '\n';

    multiply_point(&d, e);
    cout << d.real << " + " << d.imag << '\n';

    multiply_ref(d1, e1);
    cout << d1.real << " + " << d1.imag << '\n' << '\n';


    // Транспонирует квадратную матрицу 3x3
    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';

    trans_matrix_point(mat);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';

    trans_matrix_ref(mat1);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat1[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';

}