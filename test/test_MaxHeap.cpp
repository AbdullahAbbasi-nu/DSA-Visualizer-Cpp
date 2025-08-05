#include "../include/MaxHeap.h"

int main() {
    MaxHeap heap;

    heap.insert(10);
    heap.insert(30);
    heap.insert(20);
    heap.insert(50);
    heap.insert(40);

    heap.printHeap();

    heap.extractMax();
    heap.printHeap();

    return 0;
}

