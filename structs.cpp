#include <iostream>
#include <string>

// Define a structure named 'Student'
struct Student {
    std::string name;
    int roll_number;
    double marks;
};

int main() {
    // Create a variable of type 'Student'
    Student s1;

    // Assign values to the structure members
    s1.name = "Alice";
    s1.roll_number = 101;
    s1.marks = 95.5;

    // Access and print the structure members
    std::cout << "Student Details:" << std::endl;
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll Number: " << s1.roll_number << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;

    return 0;
}