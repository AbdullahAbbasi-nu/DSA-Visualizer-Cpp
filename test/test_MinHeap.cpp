#include "../include/MinHeap.h"
#include <iostream>
using namespace std;

int main() {
    MinHeap heap;

    cout << "Inserting elements: 5, 3, 8, 1, 2" << endl;
    heap.insert(5);
    heap.insert(3);
    heap.insert(8);
    heap.insert(1);
    heap.insert(2);

    cout << "Heap elements: ";
    heap.display();

    cout << "Minimum element: " << heap.getMin() << endl;

    cout << "Extracting min: " << heap.extractMin() << endl;
    cout << "Heap after extraction: ";
    heap.display();

    return 0;
}

