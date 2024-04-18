#include <iostream>
#include <string>

int main() {
    std::string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    for (const auto& element : arr) {
        if (element[0] == 'B') {
            std::cout << element << std::endl;
        }
    }

    return 0;
}
