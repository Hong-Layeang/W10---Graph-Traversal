#include <iostream>
#include <vector>
#include <stack>
#include <set>

class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjList;

public:
    Graph(int vertices) {
        this->vertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void DFS(int startVertex) {
        std::stack<int> stack;
        std::set<int> visited;

        stack.push(startVertex);
        visited.insert(startVertex);

        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();

            std::cout << currentVertex << " ";

            for (auto it = adjList[currentVertex].rbegin(); it != adjList[currentVertex].rend(); ++it) {
                if (visited.find(*it) == visited.end()) {
                    stack.push(*it);
                    visited.insert(*it);
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