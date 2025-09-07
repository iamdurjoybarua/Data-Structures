#include <iostream>

int main() {
    // Declarng an array of 10 integers
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Using a pointer to the last element of the array
    int* ptr = &arr[9]; 

    std::cout << "Elements of the array in reverse order:" << std::endl;

    // Loop through the array in reverse order using the pointer
    for (int i = 0; i < 10; ++i) {
        std::cout << *ptr << " ";
        ptr--; // Movng the pointer to the previous element
    }

    std::cout << std::endl;

    return 0;
}