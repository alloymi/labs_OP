#include "lab4_header.h"
#include <iostream>
#include <limits> // For clearing input buffer

int main() {
    FigureContainer container;

    while (true) {
        std::cout << "1. Add a circle\n";
        std::cout << "2. Add a parallelogram\n";
        std::cout << "3. Print the total square of all figures\n";
        std::cout << "4. Print the total perimeter of all figures\n";
        std::cout << "5. Find the center of mass of the system\n";
        std::cout << "6. Exit the program\n";
        std::cout << "Choose an action: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                Circle* new_circle = new Circle(radius);
                new_circle->initFromDialog();
                figs.push_back(new_circle);
                break;
            }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            case 2: {
                double side1, side2;
                std::cout << "Enter the sides of the parallelogram: ";
                std::cin >> side1 >> side2;
                container.addFigure(new Parallelogram(side1, side2));
                break;
            }
            case 3:
                std::cout << "Total square of all figures: " << container.totalSquare() << std::endl;
                break;
            case 4:
                std::cout << "Total perimeter of all figures: " << container.totalPerimeter() << std::endl;
                break;
            case 5: {
                auto center = container.centerOfMass();
                std::cout << "Center of mass of the system: (" << center.first << ", " << center.second << ")" << std::endl;
                break;
            }
            case 6:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }

        // Clearing the input buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
