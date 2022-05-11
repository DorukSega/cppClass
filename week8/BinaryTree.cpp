#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree() {
    root = NULL;
}

BinaryTree::BinaryTree(TreeItemType rootItem) {
    root = new TreeNode{rootItem, NULL, NULL};
}

// Constructor
BinaryTree::BinaryTree(TreeItemType rootItem,
                       TreeNode* leftNode,
                       TreeNode* rightNode) {
    root = new TreeNode{rootItem, leftNode, rightNode};
}

void BinaryTree::attachLeft(TreeNode* newNode) {
    if (isEmpty())
        cout << "Exception: Empty tree!" << endl;
    else if (root->left != NULL)
        cout << "Exception: Cannot overwrite left subtree!" << endl;
    else {  // Assertion: nonempty tree; no left child
        root->left = newNode;
    }
}  // end attachLeft

void BinaryTree::attachRight(TreeNode* newNode) {
    if (isEmpty())
        cout << "Exception: Empty tree!" << endl;
    else if (root->right != NULL)
        cout << "Exception: Cannot overwrite left subtree!" << endl;
    else {  // Assertion: nonempty tree; no left child
        root->right = newNode;
    }
}  // end attachRight

void BinaryTree::attachItemLeft(TreeItemType& newItem) {
    if (isEmpty())
        cout << "Exception: Empty tree!" << endl;
    else if (root->left != NULL)
        cout << "Exception: Cannot overwrite left subtree!" << endl;
    else {  // Assertion: nonempty tree; no left child
        root->left = new TreeNode{newItem, NULL, NULL};
    }
}  // end attachLeft

void BinaryTree::attachItemRight(TreeItemType& newItem) {
    if (isEmpty())
        cout << "Exception: Empty tree!" << endl;
    else if (root->right != NULL)
        cout << "Exception: Cannot overwrite left subtree!" << endl;
    else {  // Assertion: nonempty tree; no left child
        root->right = new TreeNode{newItem, NULL, NULL};
    }
}  // end attachRight

bool BinaryTree::isEmpty() {
    return (root == NULL);
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

TreeItemType BinaryTree::addAllValues() {
    return addAllValues(root);
}

TreeItemType BinaryTree::addAllValues(TreeNode* node) {
    if (node == NULL)
        return 0;

    TreeItemType cur = node->item;
    TreeItemType left = addAllValues(node->left),
                 right = addAllValues(node->right);

    cur += left + right;
    return cur;
}