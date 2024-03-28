#include <iostream>
#include "lab3_header.h"
#include <algorithm>

using namespace std;

void print_menu_massive() {
    cout << "Choose an action:\n"
            "----------------------\n"
            "1. Create arrays\n"
            "2. Addition of two arrays\n"
            "3. Compare two arrays (==)\n"
            "4. Compare two arrays (!=)\n"
            "5. Compare two arrays (>)\n"
            "5. Compare two arrays (<)\n"
            "7. Exit Array Operations\n"
            "----------------------\n"
            "Enter your choice: ";
}

void print_menu_matrix() {
    cout << "Choose an action:\n"
            "----------------------\n"
            "1. Create matrices\n"
            "2. Multiply two matrices\n"
            "3. Multiply matrix by real number\n"
            "4. Matrix addition\n"
            "5. Matrix subtraction\n"
            "6. Compare two matrices (==)\n"
            "7. Compare two matrices (!=)\n"
            "8. Compare two matrices (>)\n"
            "9. Compare two matrices (<)\n"
            "10. Exit Matrix Operations\n"
            "----------------------\n"
            "Enter your choice: ";
}

int main() {
    matrix mat1, mat2;
    massive arr1, arr2;
    int main_choice, array_choice, matrix_choice;

    do {
        cout << "----------------------\n"
                "Main Menu\n"
                "1. Array Operations\n"
                "2. Matrix Operations\n"
                "3. Exit Program\n"
                "----------------------\n"
                "Choose an option: ";

        cin >> main_choice;

        switch(main_choice) {
            case 1: {
                do {
                    print_menu_massive();
                    cin >> array_choice;

                    switch(array_choice) {
                        case 1:
                            cout << "First array\n"
                                    "----------------------\n"
                                    "Enter length of the array: ";
                            cin >> arr1.length;
                            cout << "\nEnter elements of the array:\n";
                            for (int i = 0; i < arr1.length; i++) {
                                cin >> arr1.mas[i];
                            }
                            cout << "Array created successfully!\n"
                                    "----------------------\n";

                            cout << "Second array\n"
                                    "----------------------\n"
                                    "Enter length of the array: ";
                            cin >> arr2.length;
                            cout << "\nEnter elements of the array:\n";
                            for (int i = 0; i < arr2.length; i++) {
                                cin >> arr2.mas[i];
                            }
                            cout << "Array created successfully!\n"
                                    "----------------------\n";
                            break;

                        case 2: {
                            massive result = arr1 + arr2;
                            cout << "Result of addition: ";
                            result.print_massive();
//                            for (int i = 0; i < min(result.length, min(arr1.length, arr2.length)); ++i) {
//                                cout << result.mas[i] << " \n";
//                            }
                            cout << "----------------------\n";
                            break;
                        }

                        case 3: {
                            if (arr1 == arr2) cout << "Arrays are equal.\n";
                            else cout << "Arrays are not equal.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 4: {
                            if (arr1 != arr2) cout << "Arrays are not equal.\n";
                            else cout << "Arrays are equal.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 5: {
                            if (arr1 < arr2) cout << "The first array is less than the second array.\n";
                            else cout << "The second array is less than the first array.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 6: {
                            if (arr1 > arr2) cout << "The second array is less than the first array.\n";
                            else cout << "The first array is less than the second array.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 7: {
                            cout << "Exiting Array Operations." << endl;
                            break;
                        }

                        default: {
                            cout << "Invalid choice. Please try again.\n"
                                    "----------------------\n";
                            break;
                        }
                    }
                } while (array_choice != 7);
                break;
            }

            case 2: {
                do {
                    print_menu_matrix();
                    cin >> matrix_choice;

                    switch(matrix_choice) {
                        case 1:
                            cout << "First matrix\n"
                                    "----------------------\n"
                                    "Enter elements of the matrix (3x3):\n";
                            for (int i = 0; i < 3; ++i) {
                                for (int j = 0; j < 3; ++j) {
                                    cin >> mat1.mat[i][j];
                                }
                            }
                            cout << "Matrix created successfully!\n"
                                    "----------------------\n";

                            cout << "Second matrix\n"
                                    "----------------------\n"
                                    "Enter elements of the matrix (3x3):\n";
                            for (int i = 0; i < 3; ++i) {
                                for (int j = 0; j < 3; ++j) {
                                    cin >> mat2.mat[i][j];
                                }
                            }
                            cout << "Matrix created successfully!\n"
                                    "----------------------\n";
                            break;

                        case 2: {
                            matrix result = mat1 * mat2;
                            cout << "Result of matrices multiplication: \n";
                            result.print_matrix();
                            cout << "----------------------\n";
                            break;
                        }

                        case 3: {
                            double number;
                            cout << "Enter the number to multiply: \n";
                            cin >> number;
                            matrix result = mat1 * number;
                            cout << "Result of the first matrix multiplication by real number: \n";
                            mat1.print_matrix();
                            break;
                        }

                        case 4: {
                            matrix result = mat1 + mat2;
                            cout << "Result of matrices addition: \n";
                            result.print_matrix();
                            cout << "----------------------\n";
                            break;
                        }

                        case 5: {
                            matrix result = mat1 - mat2;
                            cout << "Result of matrices subtraction: \n";
                            result.print_matrix();
                            cout << "----------------------\n";
                            break;
                        }

                        case 6: {
                            if (mat1 == mat2) cout << "Matrices are equal.\n";
                            else cout << "Matrices are not equal.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 7: {
                            if (mat1 != mat2) cout << "Matrices are not equal.\n";
                            else cout << "Matrices are equal.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 8: {
                            if (mat1 > mat2) cout << "The second matrix is less than the first matrix.\n";
                            else cout << "The first matrix is less than the second matrix.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 9: {
                            if (mat1 < mat2) cout << "The first matrix is less than the second matrix.\n";
                            else cout << "The second matrix is less than the first matrix.\n";
                            cout << "----------------------\n";
                            break;
                        }

                        case 10: {
                            cout << "Exiting Matrix Operations."
                                    "----------------------\n";
                            break;
                        }
                        default: {
                            cout << "Invalid choice. Please try again."
                                    "----------------------\n";
                            break;
                        }
                    }
                } while (matrix_choice != 10);
                break;
            }
            case 3: {
                cout << "Exiting the program."
                        "----------------------\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again."
                        "----------------------\n";
                break;
            }
        }
    } while (main_choice != 3);

    return 0;
}
