#include <iostream>
#include "../include/BinaryTree.h"

using namespace std;

TreeNode::TreeNode(int val) {
    data = val;
    left = right = nullptr;
}

BinaryTree::BinaryTree() {
    root = nullptr;
}

void BinaryTree::insert(int val) {
    TreeNode* newNode = new TreeNode(val);
    if (!root) {
        root = newNode;
        return;
    }

    TreeNode* temp = root;
    while (true) {
        if (val < temp->data) {
            if (!temp->left) {
                temp->left = newNode;
                break;
            }
            temp = temp->left;
        } else {
            if (!temp->right) {
                temp->right = newNode;
                break;
            }
            temp = temp->right;
        }
    }
}

void BinaryTree::inorder(TreeNode* node) {
    if (node) {
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
}

void BinaryTree::preorder(TreeNode* node) {
    if (node) {
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

void BinaryTree::postorder(TreeNode* node) {
    if (node) {
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
}

void BinaryTree::displayInorder() {
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
}

void BinaryTree::displayPreorder() {
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
}

void BinaryTree::displayPostorder() {
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
}

