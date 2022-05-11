#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    // these are all the nodes linked
    TreeNode second{2, NULL, NULL}, five{5, NULL, NULL}, eleven{11, NULL, NULL},
        six{6, &five, &eleven}, seven{7, &second, &six}, nine{9, NULL, NULL};

    // binary tree instantiated
    // BinaryTree myBinaryTree(2, &seven, &nine);
    BinaryTree myBinaryTree(2);
    myBinaryTree.attachLeft(&seven);
    myBinaryTree.attachRight(&nine);
    // prints it
    myBinaryTree.printPreorder();
    cout << endl;  // linebreak

    // returns Max
    cout << "sum: " << myBinaryTree.addAllValues() << endl;
    return 0;
}
