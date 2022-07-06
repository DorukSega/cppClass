#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

// ********************************************************
// Header file Graph.h
// An adjacency list representation of an undirected graph.
// ********************************************************

#include <list>
#include "Edge.h"

using namespace std;

class Graph {
   public:
    int numVertices;  // number of vertices in the graph
    int numEdges;     // number of edges in the graph

    // Adjacency list representation of the graph
    list<int>* adjList;

    Graph(int vertices);
    // Constructor.
    // Precondition: The graph is empty.
    // Postcondition: The graph is initialized to hold n
    // vertices.

    int getNumVertices() const;
    // Determines the number of vertices in the graph.
    // Precondition: None.
    // Postcondition: Returns the number of vertices in the
    // graph.

    int getNumEdges() const;
    // Determines the number of edges in the graph.
    // Precondition: None.
    // Postcondition: Returns the number of edges in the graph.

    void add(Edge e);
    // Creates an edge in the graph.
    // Precondition: The vertices exist in the graph.
    // Postcondition: Adds to both v and w's list.
};
#endif  // GRAPH_H_INCLUDED

// End of header file
