#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

// *********************************************************
// Header file Heap.h for the ADT heap.
// *********************************************************
// Must define MAX_HEAP before compilation
// const int MAX_HEAP = maximum-size-of-heap;

const int MAX_HEAP = 10;

#include "KeyedItem.h"  // definition of KeyedItem

typedef KeyedItem HeapItemType;

class Heap {
   public:
    Heap();  // default constructor
    // copy constructor and destructor are
    // supplied by the compiler

    // Heap operations:
    bool heapIsEmpty() const;
    // Determines whether a heap is empty.
    // Precondition: None.
    // Postcondition: Returns true if the heap is empty;
    // otherwise returns false.

    void heapInsert(const HeapItemType& newItem);
    // Inserts an item into a heap.
    // Precondition: newItem is the item to be inserted.
    // Postcondition: If the heap was not full, newItem is
    // in its proper position; otherwise HeapException is
    // thrown.

    void heapDelete(HeapItemType& rootItem);
    // Retrieves and deletes the item in the root of a heap.
    // This item has the largest search key in the heap.
    // Precondition: None.
    // Postcondition: If the heap was not empty, rootItem
    // is the retrieved item, the item is deleted from the
    // heap. However, if the heap is empty, removal is
    // impossible and the function throws HeapException.

    /*
    // Implement the heapCreate(), heapSort() and heapDisplay() functions
    // and the constructor that has parameters in the Heap.cpp file.
    */

    // Creates a heap from an array.
    // A is an array and arraySize is the length of the array A.
    Heap(HeapItemType A[], int arraySize);

    // Reorganizes the array into a heap
    void heapCreate();

    // heap sort
    void heapSort();

    // Prints the array
    void heapDisplay();
    HeapItemType kthMax(int k);

   protected:
    void heapRebuild(int root, int n);
    void swap(int from, int to);
    HeapItemType at(int index);
    // Converts the semiheap rooted at index root
    // into a heap.

   private:
    HeapItemType items[MAX_HEAP];  // array of heap items
    int size;                      // number of heap items
};                                 // end class

#endif  // HEAP_H_INCLUDED
