#include <iostream>
#include "lab2_header.h"
using namespace std;

int main() {
    quadratic_polynomial quadraticPolynomial(0, 0, 0);

    int choice;
    bool While = true;
    while (While) {
        cout << "Choose an action:\n"
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
                cout << "Enter coefficients a, b, and c for the quadratic polynomial (ax^2 + bx + c): ";
                double a, b, c;
                cin >> a >> b >> c;
                quadraticPolynomial = quadratic_polynomial(a, b, c);
                cout << "----------------------\n";
                break;
            case 2:
                double x;
                cout << "Enter the point to calculate the quadratic polynomial at: ";
                cin >> x;
                cout << "Value of the polynomial at x: " << quadraticPolynomial.calculate_the_value(x) << '\n';
                cout << "----------------------\n";
                break;
            case 3:
                cout << "Number of roots of the quadratic polynomial: "
                     << quadraticPolynomial.finding_the_number_of_roots() << '\n';
                cout << "----------------------\n";
                break;
            case 4: {
                cout << "Roots of the polynomial: ";
                pair<double, double> roots = quadraticPolynomial.finding_roots();
                cout << "Root 1: " << roots.first << ", root 2: " << roots.second << '\n';
            }
                cout << "----------------------\n";
                break;
            case 5:
                cout << "Extremum of the polynomial: " << quadraticPolynomial.search_for_min_or_max() << '\n';
                cout << "----------------------\n";
                break;
            case 6:
                cout << "Quadratic polynomial: ";
                quadraticPolynomial.output();
                cout << "----------------------\n";
                break;
            case 7:
                While = false;
                cout << "----------------------\n";
                cout << "Exiting program\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
                cout << "----------------------\n";
                break;
        }

    }
}