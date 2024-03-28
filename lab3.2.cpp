#include <cmath>
#include <iostream>
#include "lab3_header.h"

using namespace std;

matrix::matrix() {}

#include "types.h"

// Оператор умножения матриц
Matrix3x3 Matrix3x3::operator*(const Matrix3x3& other) const {
    Matrix3x3 result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.matrix[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
            }
        }
    }
    return result;
}

// Оператор умножения матрицы на вещественное число
Matrix3x3 Matrix3x3::operator*(double scalar) const {
    Matrix3x3 result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.matrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return result;
}

// Оператор сложения матриц
Matrix3x3 Matrix3x3::operator+(const Matrix3x3& other) const {
    Matrix3x3 result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        }
    }
    return result;
}

// Оператор вычитания матриц
Matrix3x3 Matrix3x3::operator-(const Matrix3x3& other) const {
    Matrix3x3 result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
        }
    }
    return result;
}

// Оператор сравнения матриц на равенство
bool Matrix3x3::operator==(const Matrix3x3& other) const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] != other.matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}

// Оператор сравнения матриц на неравенство
bool Matrix3x3::operator!=(const Matrix3x3& other) const {
    return !(*this == other);
}


// Конструктор по умолчанию
Matrix3x3::Matrix3x3() {
    // Заполняем матрицу нулями при создании объекта
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = 0;
        }
    }
}

// Конструктор с параметрами
Matrix3x3::Matrix3x3(int arr[3][3]) {
    // Копируем переданную матрицу в матрицу объекта
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = arr[i][j];
        }
    }
}

// Перегрузка оператора умножения матриц
Matrix3x3 Matrix3x3::operator*(const Matrix3x3& other) const {
    Matrix3x3 result;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.matrix[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
            }
        }
    }
    return result;
}

// Метод для получения элемента матрицы по индексу
int Matrix3x3::getElement(int row, int col) const {
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        return matrix[row][col];
    } else {
        std::cerr << "Error: Index out of bounds!" << std::endl;
        return 0; // Возвращаем 0, если индекс выходит за границы
    }
}

// Метод для установки значения элемента матрицы по индексу
void Matrix3x3::setElement(int row, int col, int value) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        matrix[row][col] = value;
    } else {
        std::cerr << "Error: Index out of bounds! Value not set." << std::endl;
    }
}

// Метод для вывода матрицы на экран
void Matrix3x3::printMatrix() const {
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}



massive::massive() {}

massive massive::operator+(const massive& mas) const {
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

bool massive::operator==(const massive& mas) const {
    if (length != mas.length)
        return false;
    for (int i = 0; i < length; ++i) {
        if (mas.mas[i] != mas.mas[i])
            return false;
    }
    return true;
}

bool massive::operator!=(const massive& mas) const {
    return !(this->operator==(mas));
}


bool massive::operator>(const massive& mas) const {
    for (int i = 0; i < length && i < mas.length; ++i) {
        if (mas.mas[i] > mas.mas[i])
            return true;
        else if (mas.mas[i] < mas.mas[i])
            return false;
    }
    return length > mas.length;
}

bool massive::operator<(const massive& mas) const {
    for (int i = 0; i < length && i < mas.length; ++i) {
        if (mas.mas[i] < mas.mas[i])
            return true;
        else if (mas.mas[i] > mas.mas[i])
            return false;
    }
    return length < mas.length;
}


//int massive::get_length() const {
//    return length;
//}
//
//int massive::get_elem(int i) const {
//    return mas[i];
//}