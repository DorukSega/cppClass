#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

#include <iostream>
#include "AvlNode.h"

using namespace std;

class AvlTree {
   public:
    AvlTree();
    AvlTree(const AvlTreeItemType& rootItem);
    void insert(const AvlTreeItemType& x);
    void printTree();

   private:
    int height(const AvlNode* t);
    void rotateWithLeftChild(AvlNode*& k2);   // case 1
    void doubleWithLeftChild(AvlNode*& k3);   // case 2
    void doubleWithRightChild(AvlNode*& k1);  // case 3
    void rotateWithRightChild(AvlNode*& k1);  // case 4
    void insert(const AvlTreeItemType& x, AvlNode*& t);
    void printTree(AvlNode* t);
    AvlNode* root;
};

#endif  // AVLTREE_H_INCLUDED
