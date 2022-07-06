#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
    BinarySearchTree myBST;
    myBST.insert(60);
    myBST.insert(20);
    myBST.insert(10);
    myBST.insert(40);
    myBST.insert(30);
    myBST.insert(50);
    myBST.insert(70);

    cout << "Saved BST:" << endl;
    myBST.printPreorder();
    myBST.savePreorder("test");  // saves into test.txt

    BinarySearchTree loadBST;      // BST that I will load from file
    loadBST.loadPreorder("test");  // loads from test.txt
    cout << endl << "Loaded BST:" << endl;
    loadBST.printPreorder();
    return 0;  // compiled with g++ with no errors
}
