#include "../include/VisualDoublyLinkedList.h"

int main() {
    VisualDoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    std::cout << "List after insertions:\n";
    list.display();

    list.deleteValue(20);
    std::cout << "List after deleting 20:\n";
    list.display();

    return 0;
}

