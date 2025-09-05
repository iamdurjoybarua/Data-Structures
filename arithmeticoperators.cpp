#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    // Addition (+)
    std::cout << "a + b = " << a + b << std::endl; // Output: 13

    // Subtraction (-)
    std::cout << "a - b = " << a - b << std::endl; // Output: 7

    // Multiplication (*)
    std::cout << "a * b = " << a * b << std::endl; // Output: 30

    // Division (/) - Integer division
    std::cout << "a / b = " << a / b << std::endl; // Output: 3 (10 / 3 = 3 with a remainder)

    // Modulo (%) - Remainder of division
    std::cout << "a % b = " << a % b << std::endl; // Output: 1 (10 % 3 = 1)

    // Increment (++) and Decrement (--)
    a++; // a becomes 11 (post-increment)
    b--; // b becomes 2 (post-decrement)

    std::cout << "a after increment: " << a << std::endl; // Output: 11
    std::cout << "b after decrement: " << b << std::endl; // Output: 2

    return 0;
}