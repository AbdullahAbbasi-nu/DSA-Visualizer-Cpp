#include "MaxHeap.h"

void MaxHeap::heapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (data[index] > data[parent]) {
            swap(data[index], data[parent]);
            index = parent;
        } else break;
    }
}

void MaxHeap::heapifyDown(int index) {
    int size = data.size();
    while (index < size) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < size && data[left] > data[largest]) largest = left;
        if (right < size && data[right] > data[largest]) largest = right;

        if (largest != index) {
            swap(data[index], data[largest]);
            index = largest;
        } else break;
    }
}

void MaxHeap::insert(int value) {
    data.push_back(value);
    heapifyUp(data.size() - 1);
}

int MaxHeap::extractMax() {
    if (data.empty()) {
        cout << "Heap is empty.\n";
        return -1;
    }
    int maxVal = data[0];
    data[0] = data.back();
    data.pop_back();
    heapifyDown(0);
    return maxVal;
}

int MaxHeap::getMax() const {
    if (data.empty()) {
        cout << "Heap is empty.\n";
        return -1;
    }
    return data[0];
}

bool MaxHeap::isEmpty() const {
    return data.empty();
}

void MaxHeap::display() const {
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;
}

