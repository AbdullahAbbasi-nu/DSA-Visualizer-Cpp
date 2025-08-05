#ifndef PRIORITY_QUEUE_MAX_HEAP_H
#define PRIORITY_QUEUE_MAX_HEAP_H

#include "MaxHeap.h"

class PriorityQueueMaxHeap {
private:
    MaxHeap heap;

public:
    void push(int value) {
        heap.insert(value);
    }

    void pop() {
        heap.extractMax();  // fixed method name
    }

    int top() const {
        return heap.getMax();
    }

    bool isEmpty() const {
        return heap.isEmpty();
    }

    void display() const {
        heap.display();  // MaxHeap now has display
    }
};

#endif

