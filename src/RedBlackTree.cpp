#include "RedBlackTree.h"
#include <iostream>

RedBlackTree::RedBlackTree() {
    TNULL = new RBNode{0, BLACK, nullptr, nullptr, nullptr};
    root = TNULL;
}

void RedBlackTree::leftRotate(RBNode* x) {
    RBNode* y = x->right;
    x->right = y->left;
    if (y->left != TNULL) {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
        root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void RedBlackTree::rightRotate(RBNode* x) {
    RBNode* y = x->left;
    x->left = y->right;
    if (y->right != TNULL) {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
        root = y;
    } else if (x == x->parent->right) {
        x->parent->right = y;
    } else {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

void RedBlackTree::fixInsert(RBNode* k) {
    RBNode* u;
    while (k->parent && k->parent->color == RED) {
        if (k->parent == k->parent->parent->left) {
            u = k->parent->parent->right;
            if (u && u->color == RED) {
                k->parent->color = BLACK;
                u->color = BLACK;
                k->parent->parent->color = RED;
                k = k->parent->parent;
            } else {
                if (k == k->parent->right) {
                    k = k->parent;
                    leftRotate(k);
                }
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                rightRotate(k->parent->parent);
            }
        } else {
            u = k->parent->parent->left;
            if (u && u->color == RED) {
                k->parent->color = BLACK;
                u->color = BLACK;
                k->parent->parent->color = RED;
                k = k->parent->parent;
            } else {
                if (k == k->parent->left) {
                    k = k->parent;
                    rightRotate(k);
                }
                k->parent->color = BLACK;
                k->parent->parent->color = RED;
                leftRotate(k->parent->parent);
            }
        }
        if (k == root) break;
    }
    root->color = BLACK;
}

void RedBlackTree::insert(int key) {
    RBNode* node = new RBNode{key, RED, TNULL, TNULL, nullptr};
    RBNode* y = nullptr;
    RBNode* x = root;

    while (x != TNULL) {
        y = x;
        if (node->data < x->data) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    node->parent = y;
    if (y == nullptr) {
        root = node;
    } else if (node->data < y->data) {
        y->left = node;
    } else {
        y->right = node;
    }

    if (node->parent == nullptr) {
        node->color = BLACK;
        return;
    }

    if (node->parent->parent == nullptr) return;

    fixInsert(node);
}

void RedBlackTree::inorderHelper(RBNode* node) {
    if (node != TNULL) {
        inorderHelper(node->left);
        std::cout << node->data << " ";
        inorderHelper(node->right);
    }
}

void RedBlackTree::inorderTraversal() {
    inorderHelper(root);
    std::cout << std::endl;
}

