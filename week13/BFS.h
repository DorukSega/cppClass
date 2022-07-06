#ifndef BFS_H_INCLUDED
#define BFS_H_INCLUDED

// ****************************************************
// Header file BFS.h
// A breadth-first search of the Graph class.
// ****************************************************

#include "Graph.h"
#include <queue>

using namespace std;

class BFS
{
public:
    const Graph &graph;
    bool* visited;

    BFS(const Graph &g);
    // Constructor
    // Precondition: The graph exists.
    // Postcondition: Initializes arguments and starts the
    // breadth-first search.

    void search(int startVertex);
    // Searches the adjacency list of each vertex breadth first.
    // Precondition:  The vertex in the graph (as start vertex).
    // Postcondition: Performs a breadth first search of
    // the adjacency list of vertex w in Edge e.
};

#endif // BFS_H_INCLUDED


// End of header file
