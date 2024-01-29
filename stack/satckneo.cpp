//#include <iostream>
//#include <stack>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    stack<int> stk;
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int element;
//        cin >> element;
//        stk.push(element);
//
//        // Print the current stack elements
//        stack<int> temp = stk;
//        while (!temp.empty()) {
//            cout << temp.top() << " ";
//            temp.pop();
//        }
//        cout << endl;
//
//        // Calculate and print the average
//        int sum = 0;
//        int count = 0;
//        temp = stk;
//        while (!temp.empty()) {
//            sum += temp.top();
//            count++;
//            temp.pop();
//        }
//        if (count > 0) {
//            double average = static_cast<double>(sum) / count;
//            cout << fixed << setprecision(2) << "Average of the stack values: " << average << endl;
//        }
//
//        // Pop an element and print the popped value
//        if (!stk.empty()) {
//            int poppedValue = stk.top();
//            stk.pop();
//            cout << "Popped value: " << poppedValue << endl;
//        }
//
//        // Calculate and print the updated average
//        sum = 0;
//        count = 0;
//        temp = stk;
//        while (!temp.empty()) {
//            sum += temp.top();
//            count++;
//            temp.pop();
//        }
//        if (count > 0) {
//            double average = static_cast<double>(sum) / count;
//            cout << fixed << setprecision(2) << "Average of the stack values: " << average << endl;
//        }
//    }
//
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//const int MAX_SIZE = 100;
//int stack[MAX_SIZE];
//int top = -1;
//
//void push(int element) {
//    if (top == MAX_SIZE - 1) {
//        cout << "Stack Overflow. Cannot push more elements." << endl;
//        return;
//    }
//    top++;
//    stack[top] = element;
//    cout << "Element " << element << " pushed onto the stack." << endl;
//}
//
//void pop() {
//    if (top == -1) {
//        cout << "Stack Underflow. Cannot perform pop operation." << endl;
//        return;
//    }
//    cout << "Element " << stack[top] << " popped from the stack." << endl;
//    top--;
//}
//
//void display() {
//    if (top == -1) {
//        cout << "Stack is empty." << endl;
//        return;
//    }
//    cout << "Elements in the stack:";
//    for (int i = 0; i <= top; i++) {
//        cout << " " << stack[i];
//    }
//    cout << endl;
//}
//
//int main() {
//    int choice;
//    while (true) {
//        cout << "Enter your choice (1: Push, 2: Pop, 3: Display, 4: Exit): ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                int element;
//                cin >> element;
//                push(element);
//                break;
//            case 2:
//                pop();
//                break;
//            case 3:
//                display();
//                break;
//            case 4:
//                cout << "Exiting the program." << endl;
//                return 0;
//            default:
//                cout << "Invalid choice." << endl;
//                break;
//        }
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <stack>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    stack<int> stk;
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int element;
//        cin >> element;
//        stk.push(element);
//
//        // Print the current stack elements
//        stack<int> temp = stk;
//        while (!temp.empty()) {
//            cout << temp.top() << " ";
//            temp.pop();
//        }
//        cout << endl;
//
//        // Calculate and print the average
//        int sum = 0;
//        int count = 0;
//        temp = stk;
//        while (!temp.empty()) {
//            sum += temp.top();
//            count++;
//            temp.pop();
//        }
//        if (count > 0) {
//            double average = static_cast<double>(sum) / count;
//            cout << fixed << setprecision(2) << "Average of the stack values: " << average << endl;
//        }
//
//        // Pop an element and print the popped value
//        if (!stk.empty()) {
//            int poppedValue = stk.top();
//            stk.pop();
//            cout << "Popped value: " << poppedValue << endl;
//        }
//
//        // Calculate and print the updated average
//        sum = 0;
//        count = 0;
//        temp = stk;
//        while (!temp.empty()) {
//            sum += temp.top();
//            count++;
//            temp.pop();
//        }
//        if (count > 0) {
//            double average = static_cast<double>(sum) / count;
//            cout << fixed << setprecision(2) << "Average of the stack values: " << average << endl;
//        }
//    }
//
//    return 0;
//}



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
        top = NULL; // Initialize top to NULL (equivalent to nullptr)
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

