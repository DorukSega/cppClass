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
    TreeItemType addAllValues(TreeNode* node);

   public:
    BinaryTree();
    BinaryTree(TreeItemType rootItem);
    BinaryTree(TreeItemType rootItem, TreeNode* leftNode, TreeNode* rightNode);
    ~BinaryTree();
    bool isEmpty();
    void printPreorder();
    TreeItemType addAllValues();
    void attachLeft(TreeNode* newNode);
    void attachRight(TreeNode* newNode);
    void attachItemLeft(TreeItemType& newItem);
    void attachItemRight(TreeItemType& newItem);
};

#endif