#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    int priority;
    int deadline;
    string name;

    // Custom comparator to compare tasks based on priority and deadline
    bool operator<(const Task& other) const {
        if (priority == other.priority) {
            return deadline < other.deadline;
        }
        return priority > other.priority;
    }
};

class CustomPriorityQueue {
private:
    vector<Task> tasks;

public:
    void push(const Task& task) {
        tasks.push_back(task);
        push_heap(tasks.begin(), tasks.end());
    }

    Task pop() {
        pop_heap(tasks.begin(), tasks.end());
        Task highestPriorityTask = tasks.back();
        tasks.pop_back();
        return highestPriorityTask;
    }

    Task top() const {
        return tasks.front();
    }

    bool empty() const {
        return tasks.empty();
    }
};

int main() {
    int N;
    cin >> N;
    
    vector<Task> executedTasks;
    CustomPriorityQueue priorityQueue;

    for (int i = 0; i < N; i++) {
        Task task;
        cin >> task.priority >> task.deadline;
        cin.ignore(); // Consume the newline
        getline(cin, task.name);
        
        priorityQueue.push(task);
    }

    cout << "Executed Tasks:" << endl;
    while (!priorityQueue.empty()) {
        Task task = priorityQueue.pop();
        cout << task.name << endl;
        executedTasks.push_back(task);
    }

    return 0;
}

