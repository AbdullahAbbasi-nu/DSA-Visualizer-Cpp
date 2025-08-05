#ifndef PRIORITY_QUEUE_MIN_HEAP_H
#define PRIORITY_QUEUE_MIN_HEAP_H

#include "MinHeap.h"

class PriorityQueueMinHeap {
private:
    MinHeap heap;

public:
    void push(int value) {
        heap.insert(value);
    }

    void pop() {
        heap.extractMin();  // ? FIXED
    }

    int top() const {
        return heap.getMin();
    }

    bool isEmpty() const {
        return heap.isEmpty();
    }

    void display() const {
        heap.display();
    }
};

#endif

