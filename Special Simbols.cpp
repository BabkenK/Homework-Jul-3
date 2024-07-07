#include <iostream>
#include <string>
#include <cctype> // For isdigit and isalpha functions

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Special characters in the string: ";
    for (char ch : input) {
        if (!(std::isdigit(ch) || std::isalpha(ch))) {
            std::cout << ch <<  std::endl;
        }
    }

    return 0;
}

