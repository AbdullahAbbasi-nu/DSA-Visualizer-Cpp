#include "PriorityQueueMaxHeap.h"

int main() {
    PriorityQueueMaxHeap pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(1);

    cout << "Priority Queue (Max-Heap): ";
    pq.display();

    cout << "Top element: " << pq.top() << endl;

    pq.pop();
    cout << "After pop, new top: " << pq.top() << endl;

    return 0;
}

