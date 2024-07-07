#include <iostream>
#include <cstring>

int main() {
   const int size = 100;
   char arr[size] = {};

    std::cout << " Please enter your string: \n";
    std::cin.getline(arr, size);
    
    int length = strlen(arr);
    std::cout << "Lenght of your string: " << length << std:: endl;
    
    return 0;
}