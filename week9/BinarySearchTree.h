#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>
#include <vector>
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
    void printInorder(TreeNode* node);
    TreeNode* insert(TreeNode* node, TreeItemType item);
    void savePreorder(TreeNode* node);
    void saveInorder(TreeNode* node);
    void loadInorder(vector<TreeItemType> valArr, int start, int end);

   public:
    BinarySearchTree();
    BinarySearchTree(TreeItemType rootItem);
    ~BinarySearchTree();
    bool isEmpty();
    void printPreorder();
    void printInorder();
    void insert(TreeItemType item);
    void savePreorder(string filename);
    void saveInorder(string filename);
    void loadPreorder(string filename);
    void loadInorder(string filename);
};

#endif