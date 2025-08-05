#include "BST.h"
#include <iostream>

BST::BST() {
    root = nullptr;
}

BST::~BST() {
    destroyTree(root);
}

void BST::destroyTree(BSTNode* node) {
    if (node) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

BSTNode* BST::insert(BSTNode* node, int value) {
    if (!node) {
        node = new BSTNode{value, nullptr, nullptr};
    } else if (value < node->data) {
        node->left = insert(node->left, value);
    } else {
        node->right = insert(node->right, value);
    }
    return node;
}

void BST::insert(int value) {
    root = insert(root, value);
}

BSTNode* BST::search(BSTNode* node, int value) {
    if (!node || node->data == value) return node;
    if (value < node->data) return search(node->left, value);
    else return search(node->right, value);
}

bool BST::search(int value) {
    return search(root, value) != nullptr;
}

BSTNode* BST::findMin(BSTNode* node) {
    while (node && node->left) node = node->left;
    return node;
}

BSTNode* BST::remove(BSTNode* node, int value) {
    if (!node) return nullptr;

    if (value < node->data) {
        node->left = remove(node->left, value);
    } else if (value > node->data) {
        node->right = remove(node->right, value);
    } else {
        // Node with one or no child
        if (!node->left) {
            BSTNode* temp = node->right;
            delete node;
            return temp;
        } else if (!node->right) {
            BSTNode* temp = node->left;
            delete node;
            return temp;
        }

        // Node with two children
        BSTNode* temp = findMin(node->right);
        node->data = temp->data;
        node->right = remove(node->right, temp->data);
    }

    return node;
}

void BST::remove(int value) {
    root = remove(root, value);
}

void BST::inorder(BSTNode* node) {
    if (node) {
        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }
}

void BST::inorder() {
    std::cout << "Inorder Traversal: ";
    inorder(root);
    std::cout << "\n";
}

