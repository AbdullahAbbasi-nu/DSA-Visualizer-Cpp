#include "../include/BST.h"
#include <iostream>

int main() {
    BST tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    tree.inorder();

    std::cout << "Search 60: " << (tree.search(60) ? "Found\n" : "Not Found\n");
    std::cout << "Removing 70...\n";
    tree.remove(70);

    tree.inorder();

    return 0;
}

