#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map with string keys and integer values
    std::map<std::string, int> student_grades;

    // Insert key-value pairs
    student_grades["Alice"] = 95;
    student_grades["Bob"] = 88;
    student_grades["Charlie"] = 72;

    // Access values using their keys
    std::cout << "Alice's grade is: " << student_grades["Alice"] << std::endl;

    // Update a value
    student_grades["Bob"] = 90;
    std::cout << "Bob's updated grade is: " << student_grades["Bob"] << std::endl;

    // Iterate through the map and print all key-value pairs
    std::cout << "\nAll student grades:" << std::endl;
    for (const auto& pair : student_grades) {
        std::cout << "Name: " << pair.first << ", Grade: " << pair.second << std::endl;
    }

    return 0;
}