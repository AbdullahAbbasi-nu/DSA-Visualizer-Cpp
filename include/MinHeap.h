#ifndef MINHEAP_H
#define MINHEAP_H

#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    MinHeap();

    void insert(int value);
    int extractMin();
    int getMin() const;
    bool isEmpty() const;
    void display() const;
};

#endif // MINHEAP_H

