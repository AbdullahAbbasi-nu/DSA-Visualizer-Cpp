#include "../include/PriorityQueueLinkedList.h"
#include <iostream>

int main() {
    PriorityQueueLinkedList pq;

    pq.insert(5);
    pq.insert(10);
    pq.insert(3);
    pq.display();

    std::cout << "Highest Priority: " << pq.getHighestPriority() << "\n";
    std::cout << "Extracted: " << pq.extractHighestPriority() << "\n";
    pq.display();

    return 0;
}

