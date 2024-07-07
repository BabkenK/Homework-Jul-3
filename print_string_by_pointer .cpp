#include <iostream>

int main() {
   const int size = 100;
   char arr[size] = {};
   char *ptr = arr;
    
    std::cout << " Please enter your string: ";
    std::cin.getline(arr, size);
    
    std::cout << "You entered: \n";
    while(*ptr != '\0'){
    std::cout << *ptr <<std::endl;
    ++ptr;
    }
    return 0;
}