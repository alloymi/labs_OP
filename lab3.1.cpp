#include <iostream>
#include "lab3_header.h"
#include <algorithm>

using namespace std;

void print_menu_massive() {
    cout << "Choose an action:\n"
            "----------------------\n"
            "2. Create an array\n"
            "1. Add two arrays\n"
            "2. Compare two arrays\n"
            "3. Exit Array Operations\n"
            "----------------------\n"
            "Enter your choice: ";
}

void print_menu_matrix() {
    cout << "Choose an action:\n"
            "----------------------\n"
            "1. Create a matrix\n"
            "1. Multiply two matrices\n"
            "2. Multiply matrix by scalar\n"
            "3. Exit Matrix Operations\n"
            "----------------------\n"
            "Enter your choice: ";
}

int main() {
    massive arr1, arr2;
    matrix mat1, mat2;
    int arrayChoice, matrixChoice;
    int mainChoice;

    do {
        cout << "==============================" << endl;
        cout << "Main Menu" << endl;
        cout << "1. Array Operations" << endl;
        cout << "2. Matrix Operations" << endl;
        cout << "3. Exit Program" << endl;
        cout << "==============================" << endl;
        cout << "Choose an option: ";

        cin >> mainChoice;

        switch(mainChoice) {
            case 1: {
                do {
                    print_menu_massive();
                    cin >> arrayChoice;

                    switch(arrayChoice) {
                        case 1:
                            cout << "Enter length of the array: ";
                            cin >> arr1.length;
                            cout << "Enter elements of the array:\n";
                            for (int i = 0; i < arr1.length; ++i) {
                                cin >> arr1.mas[i];
                            }
                            cout << "Array created successfully!\n";
                            break;


                        case 1: {
                            massive result = arr1 + arr2;
                            cout << "Result of addition: ";
                            for (int i = 0; i < min(result.get_length(), min(arr1.get_length(), arr2.get_length())); ++i) {
                                cout << result.get_elem(i) << " \n";
                            }
                            break;
                        }
                        case 2: {
                            if (arr1 == arr2)
                                cout << "Arrays are equal." << endl;
                            else
                                cout << "Arrays are not equal." << endl;
                            break;
                        }
                        case 3: {
                            cout << "Exiting Array Operations." << endl;
                            break;
                        }
                        default: {
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                        }
                    }
                } while (arrayChoice != 3);
                break;
            }
            case 2: {
                do {
                    print_menu_matrix();
                    cin >> matrixChoice;

                    switch(matrixChoice) {

                        case 1:
                            cout << "Enter elements of the matrix (3x3):\n";
                            for (int i = 0; i < 3; ++i) {
                                for (int j = 0; j < 3; ++j) {
                                    cin >> mat1.mat[i][j];
                                }
                            }
                            cout << "Matrix created successfully!\n";
                            break;


                        case 1: {
                            // Multiply two matrices
                            matrix result;
                            // Implement matrix multiplication logic
                            cout << "Result of matrix multiplication: " << endl;
                            // Output result matrix
                            break;
                        }
                        case 2: {
                            // Multiply matrix by scalar
                            matrix result;
                            // Implement matrix scalar multiplication logic
                            cout << "Result of matrix multiplication by scalar: " << endl;
                            // Output result matrix
                            break;
                        }
                        case 3: {
                            cout << "Exiting Matrix Operations." << endl;
                            break;
                        }
                        default: {
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                        }
                    }
                } while (matrixChoice != 3);
                break;
            }
            case 3: {
                cout << "Exiting the program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (mainChoice != 3);

    return 0;
}
