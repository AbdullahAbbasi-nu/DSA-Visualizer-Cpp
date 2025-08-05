#include "../include/DequeLinkedList.h"
#include <iostream>

int main() {
    DequeLinkedList dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.display();  // Expected: 5 10 20

    dq.deleteFront();
    dq.display();  // Expected: 10 20

    dq.deleteRear();
    dq.display();  // Expected: 10

    dq.deleteRear();
    dq.deleteRear();  // Should print "Deque is empty!"

    return 0;
}

