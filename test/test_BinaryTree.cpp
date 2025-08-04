#include "../include/BinaryTree.h"

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    tree.displayInorder();
    tree.displayPreorder();
    tree.displayPostorder();

    return 0;
}

