#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    int vowel_count = 0;
    // Usng a pointer to iterate through the string
    const char* ptr = input_string.c_str();

    while (*ptr != '\0') {
        char lower_char = std::tolower(*ptr); // Convertng to lowercase for easy comparison
        if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || lower_char == 'o' || lower_char == 'u') {
            vowel_count++;
        }
        ptr++; // Movng the pointer to the next character
    }

    std::cout << "Number of vowels: " << vowel_count << std::endl;

    return 0;
}