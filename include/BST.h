#ifndef BST_H
#define BST_H

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};

class BST {
private:
    BSTNode* root;

    BSTNode* insert(BSTNode* node, int value);
    BSTNode* search(BSTNode* node, int value);
    BSTNode* remove(BSTNode* node, int value);
    BSTNode* findMin(BSTNode* node);
    void inorder(BSTNode* node);
    void destroyTree(BSTNode* node);

public:
    BST();
    ~BST();

    void insert(int value);
    bool search(int value);
    void remove(int value);
    void inorder();
};

#endif

