#include "AvlTree.h"
using namespace std;

AvlTree::AvlTree() {
    root = NULL;
}

AvlTree::AvlTree(const AvlTreeItemType& rootItem) {
    root = new AvlNode(rootItem, NULL, NULL, 0);
}

/**
 * Return the height of node t or -1 if NULL.
 */
int AvlTree::height(const AvlNode* t) {
    return t == NULL ? -1 : t->height;
}

/** Case 1: An insertion in the left subtree of the left child of X
 * Rotate binary tree node with left child.
 * For AVL trees, this is a single rotation for case 1.
 * Update heights, then set new root.
 */
void AvlTree::rotateWithLeftChild(AvlNode*& k2) {
    AvlNode* k1 = k2->left;
    k2->left = k1->right;
    k1->right = k2;
    k2->height = max(height(k2->left), height(k2->right)) + 1;
    k1->height = max(height(k1->left), k2->height) + 1;
    k2 = k1;
}

/** Case 2: An insertion in the right subtree of the left child of X
 * Double rotate binary tree node: first left child.
 * with its right child; then node k3 with new left child.
 * For AVL trees, this is a double rotation for case 2.
 * Update heights, then set new root.
 */
void AvlTree::doubleWithLeftChild(AvlNode*& k3) {
    rotateWithRightChild(k3->left);
    rotateWithLeftChild(k3);
}

/** Case 3: An insertion in the left subtree of the right child of X
 * Double rotate binary tree node: first right child.
 * with its left child; then node k1 with new right child.
 * For AVL trees, this is a double rotation for case 3.
 * Update heights, then set new root.
 */

void AvlTree::doubleWithRightChild(AvlNode*& k1) {
    rotateWithLeftChild(k1->right);
    rotateWithRightChild(k1);
}
/** Case 4: An insertion in the right subtree of the right child of X.
 * Rotate binary tree node with right child.
 * For AVL trees, this is a single rotation for case 4.
 * Update heights, then set new root.
 */
void AvlTree::rotateWithRightChild(AvlNode*& k1) {
    AvlNode* k2 = k1->right;
    k1->right = k2->left;
    k2->left = k1;
    k1->height = max(height(k1->left), height(k1->right)) + 1;
    k2->height = max(k1->height, height(k2->right)) + 1;
    k1 = k2;
}
/** AVL Trees - Insertion
 * Internal method to insert into a subtree.
 * x is the item to insert; t is the node that roots the tree.
 */

void AvlTree::insert(const AvlTreeItemType& x, AvlNode*& t) {
    if (t == NULL)
        t = new AvlNode(x);
    else if (x < t->element) {
        insert(x, t->left);
        if (height(t->left) - height(t->right) == 2)
            if (x < t->left->element)
                rotateWithLeftChild(t);  // case 1
            else
                doubleWithLeftChild(t);  // case 2
    } else if (t->element < x) {
        insert(x, t->right);
        if (height(t->right) - height(t->left) == 2)
            if (t->right->element < x)
                rotateWithRightChild(t);  // case 4
            else
                doubleWithRightChild(t);  // case 3
    } else
        ;  // Duplicate; do nothing
    t->height = max(height(t->left), height(t->right)) + 1;
}

void AvlTree::insert(const AvlTreeItemType& x) {
    insert(x, root);
}

/**
 * To print a subtree in sorted order.
 * t points to the node that roots the tree.
 */

void AvlTree::printTree(AvlNode* t) {
    if (t == NULL)
        return;
    printTree(t->left);
    cout << t->element << " ";
    printTree(t->right);
}

void AvlTree::printTree() {
    cout << "Inorder: ";
    printTree(root);
    cout << endl;
}
