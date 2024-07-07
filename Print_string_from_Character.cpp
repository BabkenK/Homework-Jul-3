#include <iostream>

int main() {
    const int MAX_SIZE = 40; // Maximum size for the character array
    
    char arr[MAX_SIZE] = {}; // Initialize array with zeros
    char ch = 0;
    int flag = 0;

    std::cout << "Enter a string: ";
    std::cin >> arr;

    std::cout << "Enter a character to start from: ";
    std::cin >> ch;

    char *str = arr;
    while (*str != '\0') {
        if (*str == ch) {
            flag = 1;
            std::cout << "Substring starting from " << ch << " " << str << std::endl;
            break;
        }
        str++;
    }

    if (flag == 0) {
        std::cout << "Your character " <<ch <<" Not founded " << std::endl;
    }

    return 0;
}
