#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

enum Color { RED, BLACK };

struct RBNode {
    int data;
    Color color;
    RBNode* left;
    RBNode* right;
    RBNode* parent;
};

class RedBlackTree {
private:
    RBNode* root;
    RBNode* TNULL;

    void leftRotate(RBNode* x);
    void rightRotate(RBNode* x);
    void fixInsert(RBNode* k);
    void inorderHelper(RBNode* node);

public:
    RedBlackTree();
    void insert(int key);
    void inorderTraversal();
};

#endif // REDBLACKTREE_H

