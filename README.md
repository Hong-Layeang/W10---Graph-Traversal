# Graph Traversal Algorithms

This exercise contains implementations of **Depth First Search (DFS)** and **Breadth First Search (BFS)** algorithms for graph traversal. I will demonstrates how to construct a graph and traverse it using these two common methods.

## Overview of the Graph

The input graph used for traversal has the following structure:
- **Vertices**: `{0, 1, 2, 3, 4}`
- **Edges**: `{(0,1), (0,4), (1,2), (1,3), (3,4)}`

This is an undirected graph represented using an adjacency list. The graph has connections between vertices as illustrated below:
```
0: 1 4
1: 0 2 3
2: 1
3: 1 4
4: 0 3
```

## DFS Traversal

### Process
Depth First Search (DFS) starts at the given vertex and explores as far as possible along each branch before backtracking. It uses a stack to manage the traversal order.

### Result
When starting from vertex `0`, the DFS traversal visits the vertices in the following order:
```
0 4 3 1 2
```
This result shows that DFS dives deep into the graph, prioritizing the neighbors of the current vertex before moving on to others.

### Key Observations
- DFS explores the depth of a branch fully before backtracking.
- The traversal order depends on the order of neighbors in the adjacency list. Reversing this order can affect the result.

## BFS Traversal

### Process
Breadth First Search (BFS) starts at the given vertex and explores all its neighbors at the current depth before moving on to nodes at the next depth level. It uses a queue to manage the traversal order.

### Result
When starting from vertex `0`, the BFS traversal visits the vertices in the following order:
```
0 1 4 2 3
```
This result shows that BFS systematically explores nodes level by level, ensuring all nodes at the same depth are processed before moving deeper.

### Key Observations
- BFS is ideal for finding the shortest path in an unweighted graph.
- The traversal order provides a clear view of the graph's breadth structure.

## Insights Gained

1. **Traversal Differences**: The DFS and BFS algorithms produce different traversal orders due to their fundamental differences in exploration strategies (depth-first vs. breadth-first).
2. **Order Dependence**: The order of neighbors in the adjacency list affects the traversal sequence for both algorithms.
3. **Use Cases**:
   - DFS is suitable for tasks requiring exploration to the deepest level, like solving mazes.
   - BFS is useful for shortest-path calculations and level-wise processing.