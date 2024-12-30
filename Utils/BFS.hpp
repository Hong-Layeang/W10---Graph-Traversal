#include <iostream>
#include <vector>
#include <queue>
#include <set>

class GraphBFS {
private:
    int vertices;
    std::vector<std::vector<int>> adjList;

public:
    GraphBFS(int vertices) {
        this->vertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void BFS(int startVertex) {
        std::queue<int> queue;
        std::set<int> visited;

        queue.push(startVertex);
        visited.insert(startVertex);

        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();

            std::cout << currentVertex << " ";

            for (int neighbor : adjList[currentVertex]) {
                if (visited.find(neighbor) == visited.end()) {
                    queue.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }
    }

    void display() {
        for (int i = 0; i < vertices; i++) {
            std::cout << i << ": ";
            for (int neighbor : adjList[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};