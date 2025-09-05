#include <iostream>
#include <queue> // Include the queue header

int main() {
    // Create an integer queue
    std::queue<int> q;

    // Add elements to the queue (at the back)
    q.push(100);
    q.push(200);
    q.push(300);

    std::cout << "Front element is: " << q.front() << std::endl; // The front is 100

    // Remove the front element
    q.pop();

    std::cout << "New front element is: " << q.front() << std::endl; // The new front is 200
    std::cout << "Size of the queue is: " << q.size() << std::endl;

    return 0;
}