#include <iostream>
#include <vector>

// Add an edge to an undirected graph
void addEdge(std::vector<std::vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // Since the graph is undirected
}

// Print the adjacency list representation
void printGraph(const std::vector<std::vector<int>>& adj) {
    for (size_t i = 0; i < adj.size(); ++i) {
        std::cout << "Vertex " << i << " is connected to: ";
        for (int neighbor : adj[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numVertices = 5;

    // Create an adjacency list (vector of vectors)
    std::vector<std::vector<int>> adj(numVertices);

    // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the graph's representation
    printGraph(adj);

    return 0;
}