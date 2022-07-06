#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree() {
    root = NULL;
}

// Constructor
BinaryTree::BinaryTree(TreeItemType rootItem,
                       TreeNode* leftNode,
                       TreeNode* rightNode) {
    root = new TreeNode{rootItem, leftNode, rightNode};
}

bool BinaryTree::isEmpty() {
    if (root == NULL)
        return true;
    return false;
}

// from lecture notes
BinaryTree::~BinaryTree() {
    destroyTree(root);
}

// from lecture notes
void BinaryTree::destroyTree(TreeNode* leaf) {
    if (leaf != NULL) {
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
        leaf = NULL;
    }
}

void BinaryTree::printPreorder() {
    cout << "Preorder: ";
    printPreorder(root);
}

void BinaryTree::printPreorder(TreeNode* node) {
    if (node == NULL)
        return;

    cout << node->item << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

TreeItemType BinaryTree::getMax() {  // for recursion
    return getMax(root);
}

TreeItemType BinaryTree::getMax(TreeNode* node) {
    if (node == NULL)
        return 0;

    TreeItemType cur = node->item;
    TreeItemType left = getMax(node->left), right = getMax(node->right);

    if (right > cur)
        cur = right;
    if (left > cur)
        cur = left;
    return cur;
}
