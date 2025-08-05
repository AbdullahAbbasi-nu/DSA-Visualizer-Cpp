#include "../include/DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;

    list.insertAtHead(10);
    list.insertAtTail(20);
    list.insertAtHead(5);
    list.displayForward();    // 5 10 20
    list.displayBackward();   // 20 10 5

    list.deleteFromHead();
    list.displayForward();    // 10 20

    list.deleteFromTail();
    list.displayForward();    // 10

    return 0;
}

