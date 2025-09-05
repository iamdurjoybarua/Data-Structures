#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string sentence = "a dog a cat a dog";
    std::unordered_map<std::string, int> word_counts;

    // Use a stringstream or a simple loop to split the sentence into words
    // For this example, we'll manually insert the words.
    word_counts["a"]++; // counts become 1
    word_counts["dog"]++; // counts become 1
    word_counts["a"]++; // counts become 2
    word_counts["cat"]++; // counts become 1
    word_counts["a"]++; // counts become 3
    word_counts["dog"]++; // counts become 2

    // Print the word counts
    std::cout << "Word frequency count:" << std::endl;
    for (const auto& pair : word_counts) {
        std::cout << "\"" << pair.first << "\": " << pair.second << std::endl;
    }

    return 0;
}