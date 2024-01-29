#include <iostream>

using namespace std;

// Define a structure for a stack node
struct Node {
    int data;
    Node* next;
};

// Define a class for the stack
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL; // Use NULL instead of nullptr
    }

    // Function to push an element onto the stack
    void push(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

    // Function to pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Function to display all elements in the stack
    void display() {
        Node* current = top;
        while (current != NULL) { // Use NULL instead of nullptr
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to get the top element of the stack
    int getTop() {
        if (isEmpty()) {
            return -1; // Stack is empty
        }
        return top->data;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == NULL; // Use NULL instead of nullptr
    }
};

int main() {
    Stack stack;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        stack.push(element);

        stack.display();
        int topElement = stack.getTop();
        if (topElement != -1) {
            cout << "Top element is " << topElement << endl;
        }

        stack.pop();
        stack.display();
        topElement = stack.getTop();
        if (topElement != -1) {
            cout << "Top element is " << topElement << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    return 0;
}

