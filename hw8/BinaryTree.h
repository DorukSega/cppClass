#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>
using namespace std;

typedef int TreeItemType;

struct TreeNode {       // from lecture notes
    TreeItemType item;  // data portion
    TreeNode* left;     // pointer to left child
    TreeNode* right;    // pointer to right child
};

class BinaryTree {
   private:
    TreeNode* root;
    void destroyTree(TreeNode* leaf);
    void printPreorder(TreeNode* node);
    TreeItemType getMax(TreeNode* node);

   public:
    BinaryTree();
    BinaryTree(TreeItemType rootItem, TreeNode* leftNode, TreeNode* rightNode);
    ~BinaryTree();
    bool isEmpty();
    void printPreorder();
    TreeItemType getMax();
};

#endif