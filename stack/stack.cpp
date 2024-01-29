#include<iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int size;
    int top;

public:
    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Push an element onto the stack
    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Overflow" << endl;
        }
    }

    // Pop an element from the stack
    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "Stack Underflow" << endl;
        }
    }

    // Return the top element of the stack
    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            return -1; // You can choose a different value to indicate an empty stack
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack st(5);
 int stackSize;
    cout << "Enter the size of the stack: ";
    cin >> stackSize;

   // Stack st(stackSize);

    int element;
    char choice;

    
        cout << "Enter an element to push onto the stack: ";
        cin >> element;
        st.push(element);
    
    cout << "Top element: " << st.peek() << endl;
    st.pop();

    cout << "Top element after pop: " << st.peek() << endl;
    st.pop();

    cout << "Top element after another pop: " << st.peek() << endl;
    st.pop();

    return 0;
}

// int main(){
// 	//creation of stack
// 	stack<int> s;
// 	
// 	//push operation
// 	s.push(2);
// 	s.push(3);
// 	s.push(4);
// 	
// 	//pop
// 	s.pop();
// 	
// 	cout<<"Printing  top element:"<<s.top()<<endl;
// 	if(s.empty()){
// 		cout<<"stack is empty:"<<endl;
//	 }
//	 else{
//	 	cout<<"Stack is not empty:"<<endl;
//	 }
//	 cout<<"size of stack:"<<s.size()<<endl;
// }

//#include<iostream>
//using namespace std;
//
//class Stack {
//private:
//    int *arr;
//    int size;
//    int top;
//
//public:
//    // Constructor
//    Stack(int size) {
//        this->size = size;
//        arr = new int[size];
//        top = -1;
//    }
//
//    // Destructor
//    ~Stack() {
//        delete[] arr;
//    }
//
//    // Push an element onto the stack
//    void push(int element) {
//        if (top < size - 1) {
//            top++;
//            arr[top] = element;
//        }
//        else {
//            cout << "Overflow" << endl;
//        }
//    }
//
//    // Pop an element from the stack
//    void pop() {
//        if (top >= 0) {
//            top--;
//        }
//        else {
//            cout << "Stack Underflow" << endl;
//        }
//    }
//
//    // Return the top element of the stack
//    int peek() {
//        if (top >= 0) {
//            return arr[top];
//        }
//        else {
//            return -1; // You can choose a different value to indicate an empty stack
//        }
//    }
//
//     //Check if the stack is empty
//    bool isEmpty() {
//        return (top == -1);
//    }
//};
//
//int main() {
//    int stackSize;
//    cout << "Enter the size of the stack: ";
//    cin >> stackSize;
//
//    Stack st(stackSize);
//
//    int element;
//    char choice;
//
//    do {
//        cout << "Enter an element to push onto the stack: ";
//        cin >> element;
//        st.push(element);
//
//        cout << "Do you want to push another element? (y/n): ";
//        cin >> choice;
//    } while (choice == 'y' || choice == 'Y');
//
//    cout << "Top element: " << st.peek() << endl;
//    st.pop();
//
//    cout << "Top element after pop: " << st.peek() << endl;
//    st.pop();
//
//    cout << "Top element after another pop: " << st.peek() << endl;
//    st.pop();
//
//    return 0;
//}

