#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(NULL), rear(NULL) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    bool isEqual(Queue& other) {
        Node* current1 = front;
        Node* current2 = other.front;

        while (current1 != NULL && current2 != NULL) {
            if (current1->data != current2->data) {
                return false;
            }
            current1 = current1->next;
            current2 = current2->next;
        }

        return current1 == NULL && current2 == NULL;
    }
};

int main() {
    int N1, N2;
    cin >> N1;

    Queue queue1;
    for (int i = 0; i < N1; i++) {
        int order;
        cin >> order;
        queue1.enqueue(order);
    }

    cin >> N2;
    Queue queue2;
    for (int i = 0; i < N2; i++) {
        int order;
        cin >> order;
        queue2.enqueue(order);
    }

    if (queue1.isEqual(queue2)) {
        cout << "The queues have the same elements in the same order." << endl;
    } else {
        cout << "The queues do not have the same elements in the same order." << endl;
    }

    return 0;
}
//output
//3
//1 2 3
//3
//1 2 3
//The queues have the same elements in the same order.
5
1 2 3 4 5
3
1 2 3
The queues do not have the same elements in the same order.
