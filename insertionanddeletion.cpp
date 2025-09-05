#include <iostream>

int main() {
    int arr[100] = {10, 20, 40, 50, 60};
    int current_size = 5;

    // --- 1. Insertion ---
    int element_to_insert = 30;
    int position_to_insert = 2; // Insert at index 2 (before 40)

    // Check if position is valid
    if (position_to_insert >= 0 && position_to_insert <= current_size) {
        // Shift elements to the right to make space for the new element
        for (int i = current_size; i > position_to_insert; --i) {
            arr[i] = arr[i - 1];
        }
        // Insert the new element
        arr[position_to_insert] = element_to_insert;
        current_size++;
    }

    std::cout << "Array after insertion: ";
    for (int i = 0; i < current_size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // --- 2. Deletion ---
    int position_to_delete = 3; // Delete the element at index 3 (which is 40)

    // Check if position is valid
    if (position_to_delete >= 0 && position_to_delete < current_size) {
        // Shift elements to the left to overwrite the deleted element
        for (int i = position_to_delete; i < current_size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        current_size--;
    }

    std::cout << "Array after deletion: ";
    for (int i = 0; i < current_size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}