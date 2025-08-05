#ifndef MAX_HEAP_H
#define MAX_HEAP_H

#include <vector>

class MaxHeap {
private:
    std::vector<int> heap;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    MaxHeap();

    void insert(int value);
    int extractMax();
    int getMax() const;
    bool isEmpty() const;
    void printHeap() const;
};

#endif

