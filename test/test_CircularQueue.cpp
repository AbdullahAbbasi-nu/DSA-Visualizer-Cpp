#include "../include/CircularQueue.h"
#include <iostream>
using namespace std;

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // should fill the queue
    q.enqueue(60);  // should show "Queue is full"

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);  // circular behavior

    q.display();

    return 0;
}

