#include "../include/PriorityQueueMinHeap.h"
#include <iostream>

using namespace std;

int main() {
    PriorityQueueMinHeap pq;

    cout << "Inserting: 20, 5, 15, 30\n";
    pq.push(20);
    pq.push(5);
    pq.push(15);
    pq.push(30);

    pq.display();

    cout << "Top: " << pq.top() << "\n";

    cout << "Removing top...\n";
    pq.pop();

    pq.display();

    return 0;
}

