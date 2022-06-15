// ****************************************************
// Implementation file BFS.cpp
// A breadth-first search of the Graph class.
// ****************************************************

#include "BFS.h"
#include <iostream>
#include <queue>
BFS::BFS(const Graph& g) : graph(g) {
    visited = new bool[g.getNumVertices()];

    for (int i = 0; i < g.getNumVertices(); i++)
        visited[i] = false;

}  // end constructor

void BFS::search(int startVertex) {
    // student code
    std::queue<int> q;
    visited[startVertex] = true;
    q.push(startVertex);
    int currentVertex;
    list<int>::iterator itr;

    while (!q.empty()) {
        currentVertex = q.front();
        std::cout << currentVertex << " ";
        q.pop();
        for (itr = graph.adjList[currentVertex].begin();
             itr != graph.adjList[currentVertex].end(); itr++) {
            int adjVertex = *itr;

            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                q.push(adjVertex);
            }
        }
    }

}  // end search

// End of implementation file
