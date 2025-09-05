#include <iostream>

int main() {
    // Declare and initialize an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print elements of the array
    std::cout << "The first element is: " << numbers[0] << std::endl;
    std::cout << "The third element is: " << numbers[2] << std::endl;

    // Modify an element of the array
    numbers[1] = 25;
    std::cout << "The modified second element is: " << numbers[1] << std::endl;

    // Loop through the array and print all elements
    std::cout << "All elements of the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}