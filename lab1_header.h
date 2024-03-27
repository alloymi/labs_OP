#ifndef PROGA___LAB1_HEADER_H
#define PROGA___LAB1_HEADER_H

struct complex_num {
    double real;
    double imag;
};

void swap_point(int* a, int* b);
void swap_ref(int& a, int& b);

void round_point(float* a);
void round_ref(float& a);

void multiply_point(complex_num* c, double a);
void multiply_ref(complex_num& c, double a);

void trans_matrix_point(int matrix[3][3]);
void trans_matrix_ref(int (&matrix)[3][3]);

#endif //PROGA___LAB1_HEADER_H
