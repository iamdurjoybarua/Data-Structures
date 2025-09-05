#include <iostream>

// Define a structure for a Node in the linked list
struct Node {
    int data;
    Node* next; // Pointer to the next node
};

int main() {
    // Create the first node and allocate memory
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr; // Initialize next to null

    // Create the second node
    Node* second = new Node();
    second->data = 20;
    second->next = nullptr;

    // Link the first node to the second node
    head->next = second;

    // Traverse and print the data in the linked list
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;

    // Don't forget to free the allocated memory!
    delete head;
    delete second;

    return 0;
}