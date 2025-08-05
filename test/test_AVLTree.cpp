// test/test_AVLTree.cpp

#include "../include/AVLTree.h"
#include <iostream>

int main() {
    AVLTree tree;

    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(10);
    tree.insert(25);
    tree.insert(50);
    tree.insert(5);

    std::cout << "Inorder traversal after inserts: ";
    tree.inorder();

    tree.remove(20);
    std::cout << "Inorder traversal after removing 20: ";
    tree.inorder();

    return 0;
}

