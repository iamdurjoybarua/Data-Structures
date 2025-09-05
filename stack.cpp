#include <iostream>
#include <stack> // Include the stack header

int main() {
    // Create an integer stack
    std::stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element is: " << s.top() << std::endl; // The top element is 30

    // Pop an element from the stack
    s.pop();

    std::cout << "New top element is: " << s.top() << std::endl; // The new top is 20
    std::cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    return 0;
}