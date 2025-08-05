#include "../include/MinHeap.h"
#include <iostream>
using namespace std;

MinHeap::MinHeap() {}

void MinHeap::heapifyUp(int index) {
    while (index > 0 && heap[(index - 1) / 2] > heap[index]) {
        swap(heap[(index - 1) / 2], heap[index]);
        index = (index - 1) / 2;
    }
}

void MinHeap::heapifyDown(int index) {
    int size = heap.size();
    while (2 * index + 1 < size) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && heap[left] < heap[smallest]) {
            smallest = left;
        }

        if (right < size && heap[right] < heap[smallest]) {
            smallest = right;
        }

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            index = smallest;
        } else {
            break;
        }
    }
}

void MinHeap::insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}

int MinHeap::extractMin() {
    if (heap.empty()) {
        throw runtime_error("Heap is empty");
    }

    int minVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return minVal;
}

int MinHeap::getMin() const {
    if (heap.empty()) {
        throw runtime_error("Heap is empty");
    }
    return heap[0];
}

bool MinHeap::isEmpty() const {
    return heap.empty();
}

void MinHeap::display() const {
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}

