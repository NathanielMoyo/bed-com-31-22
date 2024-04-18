#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to calculate the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// Function to calculate the number of words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word in a string
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    std::ifstream file("textfile.txt"); // Open the text file
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData); // Read the contents of the file into a string
    file.close(); // Close the file

    // Calculate and output number of vowels
    std::cout << "Number of vowels: " << countVowels(fileData) << std::endl;

    // Calculate and output number of words
    std::cout << "Number of words: " << countWords(fileData) << std::endl;

    // Output the reversed statement
    std::cout << "Reversed statement: " << reverse(fileData) << std::endl;

    // Output the statement with the second letter capitalized
    std::cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}
