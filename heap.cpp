#include <iostream>
#include <queue> // Include the queue header for priority_queue
#include <vector>

int main() {
    // By default, it's a max-heap (largest element at the top)
    std::priority_queue<int> max_pq;

    // Push elements
    max_pq.push(10);
    max_pq.push(30);
    max_pq.push(20);
    max_pq.push(5);

    // The top element is the largest
    std::cout << "Top element (largest): " << max_pq.top() << std::endl; // Output: 30

    // Remove the top element
    max_pq.pop();

    // The new top element is the next largest
    std::cout << "New top element (next largest): " << max_pq.top() << std::endl; // Output: 20

    return 0;
}