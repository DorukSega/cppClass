#include "BinarySearchTree.h"
#include <fstream>
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree() {
    root = NULL;
}

BinarySearchTree::BinarySearchTree(TreeItemType rootItem) {
    root = new TreeNode{rootItem, NULL, NULL};
}

bool BinarySearchTree::isEmpty() {
    return (root == NULL);
}

// from lecture notes
BinarySearchTree::~BinarySearchTree() {
    destroyTree(root);
}

// from lecture notes
void BinarySearchTree::destroyTree(TreeNode* leaf) {
    if (leaf != NULL) {
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
        leaf = NULL;
    }
}

void BinarySearchTree::printPreorder() {
    cout << "Preorder: ";
    printPreorder(root);
    cout << endl;
}

void BinarySearchTree::printPreorder(TreeNode* node) {
    if (node == NULL)
        return;

    cout << node->item << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void BinarySearchTree::insert(TreeItemType item) {
    if (!isEmpty())
        insert(root, item);
    else
        root = new TreeNode{item, NULL, NULL};
}

TreeNode* BinarySearchTree::insert(TreeNode* node, TreeItemType item) {
    if (node == NULL)
        node = new TreeNode{item, NULL, NULL};
    else if (item > node->item)
        node->right = insert(node->right, item);
    else
        node->left = insert(node->left, item);
    return node;
}

ofstream MYFILE;
void BinarySearchTree::savePreorder(string filename) {
    MYFILE.open(filename + ".txt");
    savePreorder(root);
    MYFILE.close();
}

void BinarySearchTree::savePreorder(TreeNode* node) {
    if (node == NULL)
        return;
    MYFILE << node->item << " ";
    savePreorder(node->left);
    savePreorder(node->right);
}

void BinarySearchTree::loadPreorder(string filename) {
    ifstream READFILE;
    READFILE.open(filename + ".txt");
    TreeItemType value;
    while (READFILE >> value)
        insert(value);
    READFILE.close();
}