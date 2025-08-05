#include "../include/RedBlackTree.h"
#include <iostream>

int main() {
    RedBlackTree rbt;

    rbt.insert(10);
    rbt.insert(20);
    rbt.insert(30);
    rbt.insert(15);
    rbt.insert(25);

    std::cout << "Inorder Traversal of Red-Black Tree:" << std::endl;
    rbt.inorderTraversal();

    return 0;
}

