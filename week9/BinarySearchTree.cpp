#include "BinarySearchTree.h"
#include <fstream>
#include <iostream>
#include <vector>
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

void BinarySearchTree::printInorder() {
    cout << "Inorder: ";
    printInorder(root);
    cout << endl;
}

void BinarySearchTree::printInorder(TreeNode* node) {
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->item << " ";
    printInorder(node->right);
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

void BinarySearchTree::saveInorder(string filename) {
    MYFILE.open(filename + ".txt");
    saveInorder(root);
    MYFILE.close();
}

void BinarySearchTree::saveInorder(TreeNode* node) {
    if (node == NULL)
        return;
    saveInorder(node->left);
    MYFILE << node->item << " ";
    saveInorder(node->right);
}

void BinarySearchTree::loadPreorder(string filename) {
    ifstream READFILE;
    READFILE.open(filename + ".txt");
    TreeItemType value;
    while (READFILE >> value)
        insert(value);
    READFILE.close();
}
int middle(int size) {
    return (int)(size / 2);
}
void BinarySearchTree::loadInorder(vector<TreeItemType> valArr,
                                   int start,
                                   int end) {
    int mid = (int)(start + (end - start) / 2);
    int size = end - start + 1;
    insert(valArr.at(mid));
    if (size > 1) {
        loadInorder(valArr, start, mid - 1);
        loadInorder(valArr, mid + 1, end);
    }
}

void BinarySearchTree::loadInorder(string filename) {
    ifstream READFILE;
    READFILE.open(filename + ".txt");
    TreeItemType value;

    vector<TreeItemType> valArr;

    while (READFILE >> value)
        valArr.push_back(value);

    loadInorder(valArr, 0, valArr.size() - 1);

    READFILE.close();
}
