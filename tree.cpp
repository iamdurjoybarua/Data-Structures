#include <iostream>

// Define a structure for a Node in a binary tree
struct Node {
    int data;
    Node* left;  // Pointer to the left child
    Node* right; // Pointer to the right child
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int main() {
    // Create the root node
    Node* root = createNode(1);

    // Create child nodes and link them
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);

    // Let's print the root's data and its children's data
    std::cout << "Root Node: " << root->data << std::endl;
    std::cout << "Left child of root: " << root->left->data << std::endl;
    std::cout << "Right child of root: " << root->right->data << std::endl;
    std::cout << "Left child of root's left child: " << root->left->left->data << std::endl;

    // To prevent memory leaks, we should deallocate memory
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}