#include <iostream>
#include "../include/LinkedList.h"
#include "../include/Stack.h"
#include "../include/Queue.h"
using namespace std;

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();

    list.deleteByValue(20);
    list.display();

cout << "--- Testing Array-based Stack ---\n";
    StackArray<int> sArr;
    sArr.push(10);
    sArr.push(20);
    sArr.push(30);
    cout << "Top element: " << sArr.peek() << endl;
    sArr.pop();
    cout << "Top after pop: " << sArr.peek() << endl;

    cout << "\n--- Testing Linked List-based Stack ---\n";
    StackLinked<int> sLL;
    sLL.push(100);
    sLL.push(200);
    sLL.push(300);
    cout << "Top element: " << sLL.peek() << endl;
    sLL.pop();
    cout << "Top after pop: " << sLL.peek() << endl;
    
cout << "--- Testing Circular Array-based Queue ---\n";
    QueueArray<int> qArr;
    qArr.enqueue(10);
    qArr.enqueue(20);
    qArr.enqueue(30);
    cout << "Front element: " << qArr.peek() << endl;
    qArr.dequeue();
    cout << "Front after dequeue: " << qArr.peek() << endl;

    cout << "\n--- Testing Linked List-based Queue ---\n";
    QueueLinked<int> qLL;
    qLL.enqueue(100);
    qLL.enqueue(200);
    qLL.enqueue(300);
    cout << "Front element: " << qLL.peek() << endl;
    qLL.dequeue();
    cout << "Front after dequeue: " << qLL.peek() << endl;

    return 0;
}

