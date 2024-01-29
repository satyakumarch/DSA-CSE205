#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum queue size

class Queue {
private:
    int front, rear, size;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = rear = size = 0;
    }

    void enqueue(int value) {
        if (size >= MAX_SIZE) {
            cout << "Queue is full. Cannot enqueue more students." << endl;
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % MAX_SIZE;
        size++;
    }

    int countOccurrences(int target) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    int N;
    cout<<"Entre the number:"<<endl;
    cin >> N;

    Queue attendanceQueue;

    for (int i = 0; i < N; i++) {
        int studentID;
        cout<<"Enter the student id"<<endl;
        cin >> studentID;
        attendanceQueue.enqueue(studentID);
    }

    int targetID;
    cin >> targetID;

    int occurrences = attendanceQueue.countOccurrences(targetID);

    cout << "Occurrences of " << targetID << " in the queue: " << occurrences << endl;

    return 0;
}
//5
//10 10 10 10 10
//5
//Occurrences of 5 in the queue: 0
