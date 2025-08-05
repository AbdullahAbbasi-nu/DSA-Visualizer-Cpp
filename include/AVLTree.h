// include/AVLTree.h

#ifndef AVLTREE_H
#define AVLTREE_H

class AVLTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        int height;
        Node(int val) : data(val), left(nullptr), right(nullptr), height(1) {}
    };

    Node* root;

    Node* insert(Node* node, int data);
    Node* remove(Node* node, int data);
    Node* rotateLeft(Node* y);
    Node* rotateRight(Node* x);
    int getHeight(Node* node);
    int getBalance(Node* node);
    Node* minValueNode(Node* node);
    void inorder(Node* node);

public:
    AVLTree();
    void insert(int data);
    void remove(int data);
    void inorder();
};

#endif

