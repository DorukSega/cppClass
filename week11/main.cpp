#include <iostream>
#include "AvlTree.h"
using namespace std;

int main() {
    AvlTree Example1;
    Example1.insert(3);
    Example1.insert(2);
    Example1.insert(1);
    Example1.insert(4);
    Example1.insert(5);
    Example1.insert(6);
    Example1.insert(7);
    Example1.printTree();

    Example1.insert(16);
    Example1.insert(15);
    Example1.insert(14);
    Example1.insert(13);
    Example1.insert(12);
    Example1.insert(11);
    Example1.insert(10);
    Example1.insert(8);
    Example1.insert(9);
    Example1.printTree();

     return 0;
}
