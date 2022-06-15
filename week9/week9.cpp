#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
    BinarySearchTree myBST;
    myBST.insert(4);
    myBST.insert(2);
    myBST.insert(3);
    myBST.insert(1);
    myBST.insert(6);
    myBST.insert(5);
    myBST.insert(7);

    cout << "Saved BST:" << endl;
    myBST.printInorder();
    myBST.printPreorder();
    myBST.saveInorder("test");

    BinarySearchTree newBST;
    cout << endl << "Loaded BST:" << endl;
    newBST.loadInorder("test");
    newBST.printInorder();
    newBST.printPreorder();

    return 0;
}
