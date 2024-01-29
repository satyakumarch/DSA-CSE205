#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    int elements[MAX_SIZE];
    int priorities[MAX_SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void enqueue(int element, int priority) {
        if (size < MAX_SIZE) {
            elements[size] = element;
            priorities[size] = priority;
            size++;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void dequeue() {
        if (!isEmpty()) {
            int highestPriorityIndex = 0;
            int highestPriority = priorities[0];

            for (int i = 1; i < size; i++) {
                if (priorities[i] < highestPriority) {
                    highestPriority = priorities[i];
                    highestPriorityIndex = i;
                }
            }

            for (int i = highestPriorityIndex; i < size - 1; i++) {
                elements[i] = elements[i + 1];
                priorities[i] = priorities[i + 1];
            }

            size--;
        }
    }

    void printPriorityQueue() {
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;
    PriorityQueue priorityQueue;

    for (int i = 0; i < N; i++) {
        int element, priority;
        cin >> element >> priority;
        priorityQueue.enqueue(element, priority);
    }

    cout << "Priority Queue: ";
    priorityQueue.printPriorityQueue();

    if (!priorityQueue.isEmpty()) {
        priorityQueue.dequeue();
    }

    cout << "Priority Queue: ";
    priorityQueue.printPriorityQueue();

    return 0;
}
output
3
9 1
2 2
7 3
Priority Queue: 9 2 7
Priority Queue: 2 7

