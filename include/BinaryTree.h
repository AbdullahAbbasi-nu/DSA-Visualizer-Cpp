#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val);
};

class BinaryTree {
private:
    TreeNode* root;

    void inorder(TreeNode* node);
    void preorder(TreeNode* node);
    void postorder(TreeNode* node);

public:
    BinaryTree();
    void insert(int val);
    void displayInorder();
    void displayPreorder();
    void displayPostorder();
};

#endif

