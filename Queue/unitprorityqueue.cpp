#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    struct Element {
        int data;
        int priority;
    };

    Element arr[MAX_SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void enqueue(int data, int priority) {
        if (isFull()) {
            cout << "Priority Queue is full. Cannot enqueue more elements." << endl;
            return;
        }

        Element newElement;
        newElement.data = data;
        newElement.priority = priority;

        int i = size;
        while (i > 0 && arr[(i - 1) / 2].priority > newElement.priority) {
            arr[i] = arr[(i - 1) / 2];
            i = (i - 1) / 2;
        }

        arr[i] = newElement;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty. Cannot dequeue." << endl;
            return;
        }

        int i = 0;
        Element lastElement = arr[size - 1];
        size--;

        while (true) {
            int leftChild = 2 * i + 1;
            int rightChild = 2 * i + 2;
            int minChild;

            if (leftChild < size) {
                minChild = leftChild;

                if (rightChild < size && arr[rightChild].priority < arr[leftChild].priority) {
                    minChild = rightChild;
                }

                if (arr[minChild].priority < lastElement.priority) {
                    arr[i] = arr[minChild];
                    i = minChild;
                } else {
                    break;
                }
            } else {
                break;
            }
        }

        arr[i] = lastElement;
    }

    void printPriorityQueue() {
        for (int i = 0; i < size; i++) {
            cout << arr[i].data << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue priorityQueue;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int data, priority;
        cin >> data >> priority;
        priorityQueue.enqueue(data, priority);
    }

    cout << "Priority Queue: ";
    priorityQueue.printPriorityQueue();

    if (!priorityQueue.isEmpty()) {
        priorityQueue.dequeue();
        cout << "Priority Queue after dequeue: ";
        priorityQueue.printPriorityQueue();
    }

    return 0;
}
//output
//5
//4 2
//3 1
//6 4
//2 3
//1 5
//Priority Queue: 3 4 6 2 1
//Priority Queue after dequeue: 4 2 6 1
