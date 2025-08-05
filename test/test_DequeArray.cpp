#include "../include/DequeArray.h"
#include <iostream>

int main() {
    DequeArray dq(5);

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(3);
    dq.insertRear(30);

    dq.display();

    dq.deleteFront();
    dq.deleteRear();

    dq.display();

    std::cout << "Front: " << dq.getFront() << "\n";
    std::cout << "Rear: " << dq.getRear() << "\n";

    return 0;
}

