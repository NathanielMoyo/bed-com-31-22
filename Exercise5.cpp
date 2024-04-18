#include <iostream>

// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    int choice;
    double base, height, length, width, side;

    while (true) {
        std::cout << "Select a shape to calculate the area:\n";
        std::cout << "1. Triangle\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Square\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 4)
            break;

        switch (choice) {
            case 1:
                std::cout << "Enter base and height of the triangle: ";
                std::cin >> base >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            case 2:
                std::cout << "Enter length and width of the rectangle: ";
                std::cin >> length >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            case 3:
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}
