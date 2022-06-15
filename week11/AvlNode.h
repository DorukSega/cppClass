#ifndef AVLNODE_H_INCLUDED
#define AVLNODE_H_INCLUDED

typedef int AvlTreeItemType;
#include <string>
using namespace std;

// Node declaration for AVL trees
class AvlNode {
   private:
    AvlTreeItemType element;
    AvlNode* left;
    AvlNode* right;
    int height;

    AvlNode() {}

    AvlNode(const AvlTreeItemType& theElement,
            AvlNode* lt = NULL,
            AvlNode* rt = NULL,
            int h = 0)
        : element(theElement), left(lt), right(rt), height(h) {}

    friend class AvlTree;
};

#endif  // AVLNODE_H_INCLUDED
