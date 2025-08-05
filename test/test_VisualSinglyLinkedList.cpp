#include "../include/VisualSinglyLinkedList.h"

int main() {
    VisualSinglyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    std::cout << "List after insertions: ";
    list.display();

    list.deleteValue(20);
    std::cout << "List after deleting 20: ";
    list.display();

    list.deleteValue(10);
    std::cout << "List after deleting 10: ";
    list.display();

    list.deleteValue(30);
    std::cout << "List after deleting 30: ";
    list.display();

    return 0;
}

