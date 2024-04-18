#include <iostream>
#include <limits>

int main() {
    int inputValue;

    while (true) {
        std::cout << "Please enter an integer value between 5 and 10: ";
        std::cin >> inputValue;

        if (std::cin.fail() || inputValue < 5 || inputValue > 10) {
            std::cin.clear(); // clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter an integer value between 5 and 10." << std::endl;
        } else {
            break; // exit loop if input is valid
        }
    }

    std::cout << "Your input value (" << inputValue << ") has been accepted." << std::endl;

    return 0;
}

