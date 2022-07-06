#ifndef EDGE_H_INCLUDED
#define EDGE_H_INCLUDED

// **************************************************
// Header file Edge.h
// An Edge class for graph implementations.
// ************** ************************************

class Edge {
   public:
    int v, w;
    Edge(int firstVertex, int secondVertex) {
        v = firstVertex;
        w = secondVertex;
    }  // end constructor
};

#endif  // EDGE_H_INCLUDED

// End of header file
