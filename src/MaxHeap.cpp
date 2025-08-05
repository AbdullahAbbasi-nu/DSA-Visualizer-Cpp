#include "../include/MaxHeap.h"
#include <iostream>

MaxHeap::MaxHeap() {}

void MaxHeap::insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}

int MaxHeap::extractMax() {
    if (heap.empty()) {
        std::cout << "Heap is empty!\n";
        return -1;
    }

    int maxVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return maxVal;
}

int MaxHeap::getMax() const {
    if (heap.empty()) {
        std::cout << "Heap is empty!\n";
        return -1;
    }
    return heap[0];
}

bool MaxHeap::isEmpty() const {
    return heap.empty();
}

void MaxHeap::heapifyUp(int index) {
    while (index > 0 && heap[index] > heap[(index - 1) / 2]) {
        int parent = (index - 1) / 2;
        std::swap(heap[index], heap[parent]);
        index = parent;
    }
}

void MaxHeap::heapifyDown(int index) {
    int size = heap.size();
    int largest = index;

    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < size && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != index) {
        std::swap(heap[index], heap[largest]);
        heapifyDown(largest);
    }
}

void MaxHeap::printHeap() const {
    for (int val : heap) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

