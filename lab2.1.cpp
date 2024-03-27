#include <iostream>
#include "lab2_header.h"
using namespace std;

int main() {
    quadratic_polynomial quadraticPolynomial(0, 0, 0);

    int choice;
    bool While = true;
    while (While) {
        cout << "Choose an action:"
                "1. Create a quadratic polynomial\n"
                "2. Calculate the value at a given point\n"
                "3. Finding the number of roots\n"
                "4. Find roots of the polynomial\n"
                "5. Search for minimum/maximum\n"
                "6. Display the polynomial\n"
                "7. Exit\n"
                "Enter your choice: ";

        cin >> choice;
        switch (choice) {
            case 1:
                double a, b, c;
                cin >> a >> b >> c;
                quadraticPolynomial = quadratic_polynomial(a, b, c);
                break;
            case 2:
                double x;
                cout << "Enter the point to calculate the quadratic polynomial at: ";
                cin >> x;
                cout << "Value of the polynomial at x = " << x << ": " << quadraticPolynomial.calculate_the_value(x) << '\n';
                break;
            case 3:
                cout << "Number of roots of the quadratic polynomial: " << quadraticPolynomial.finding_the_number_of_roots() << '\n';
                break;
            case 4:
                cout << "Roots of the polynomial: ";
                quadraticPolynomial.finding_roots();
                cout << '\n';
                break;
            case 5:
                cout << "Extremum of the polynomial: " << quadraticPolynomial.search_for_min_or_max() << '\n';
                break;
            case 6:
                cout << "Quadratic polynomial: ";
                quadraticPolynomial.output();
                cout << '\n';
                break;
            case 7:
                While = false;
                std::cout << "Exiting program\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
                //While = false;

                break;
        }

    }
}



















//    double a, b, c;
//    std::cout << "Enter coefficients a, b, and c for the quadratic polynomial (ax^2 + bx + c): ";
//    std::cin >> a >> b >> c;
//
//    Polynomial poly(a, b, c);
//
//    int choice;
//    do {
//        std::cout << "\nChoose an action:\n"
//                     "1. Evaluate polynomial at a point\n"
//                     "2. Count roots of the polynomial\n"
//                     "3. Find roots of the polynomial\n"
//                     "4. Find extremum of the polynomial\n"
//                     "5. Display the polynomial\n"
//                     "6. Exit\n"
//                     "Enter your choice: ";
//        std::cin >> choice;
//
//        switch (choice) {
//            case 1: {
//                double x;
//                std::cout << "Enter the point to evaluate the polynomial at: ";
//                std::cin >> x;
//                std::cout << "Value of the polynomial at x = " << x << ": " << poly.evaluate(x) << std::endl;
//                break;
//            }
//            case 2:
//                std::cout << "Number of roots of the polynomial: " << poly.numRoots() << std::endl;
//                break;
//            case 3: {
//                auto [root1, root2] = poly.roots();
//                std::cout << "Roots of the polynomial: ";
//                if (!std::isnan(root1)) {
//                    std::cout << root1;
//                    if (!std::isnan(root2))
//                        std::cout << ", " << root2;
//                } else {
//                    std::cout << "No real roots";
//                }
//                std::cout << std::endl;
//                break;
//            }
//            case 4:
//                std::cout << "Extremum of the polynomial: x = " << poly.extrema() << std::endl;
//                break;
//            case 5:
//                std::cout << "Polynomial: " << poly << std::endl;
//                break;
//            case 6:
//                std::cout << "Exiting program.\n";
//                break;
//            default:
//                std::cout << "Invalid choice. Please enter a number between 1 and 6.\n";
//        }
//    } while (choice != 6);
//
//    return 0;
//}
