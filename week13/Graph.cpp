// ********************************************************
// Implementation file Graph.cpp
// An adjacency list representation of an undirected graph.
// ********************************************************

#include "Graph.h"

Graph::Graph(int vertices) {
    adjList = new list<int>[vertices];
    numVertices = vertices;
    numEdges = 0;
}  // end constructor

int Graph::getNumVertices() const {
    return numVertices;
}  // end getNumVertices

int Graph::getNumEdges() const {
    return numEdges;
}  // end getNumEdges

void Graph::add(Edge e) {
    int firstNode = e.v;
    int secondNode = e.w;

    adjList[firstNode].push_back(secondNode);
    adjList[secondNode].push_back(firstNode);
    numEdges++;
}  // end add

// End of implementation file
