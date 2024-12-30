#include "Utils/BFS.hpp"

int main() {
    GraphBFS graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(3, 4);

    std::cout << "Graph structure:" << std::endl;
    graph.display();

    std::cout << "\nBFS starting from vertex 0:" << std::endl;
    graph.BFS(0);

    return 0;
}