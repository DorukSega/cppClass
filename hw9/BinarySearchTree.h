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

class BinarySearchTree {
   private:
    TreeNode* root;
    void destroyTree(TreeNode* leaf);
    void printPreorder(TreeNode* node);
    TreeNode* insert(TreeNode* node, TreeItemType item);
    void savePreorder(TreeNode* node);

   public:
    BinarySearchTree();
    BinarySearchTree(TreeItemType rootItem);
    ~BinarySearchTree();
    bool isEmpty();
    void printPreorder();
    void insert(TreeItemType item);
    void savePreorder(string filename);
    void loadPreorder(string filename);
};

#endif