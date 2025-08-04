#include "../include/StackArray.h"
#include "../include/StackLinkedList.h"
#include <iostream>

int main() {
    StackArray arrStack(3);
    arrStack.push(10);
    arrStack.push(20);
    std::cout << "Top (Array): " << arrStack.peek() << "\n";
    arrStack.pop();

    StackLinkedList llStack;
    llStack.push(30);
    llStack.push(40);
    std::cout << "Top (Linked List): " << llStack.peek() << "\n";
    llStack.pop();

    return 0;
}

