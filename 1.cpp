#include "lab1_header.h"
#include <cmath>

void swap_point(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_ref(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void round_point(float* a) {
    *a = round(*a);
}

void round_ref(float& a) {
    a = round(a);
}

void multiply_point(complex_num* c, double a){
    c->real *= a;
    c->imag *= a;
}

void multiply_ref(complex_num& c, double a){
    c.real *= a;
    c.imag *= a;
}

void trans_matrix_point(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void trans_matrix_ref(int (&matrix)[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
