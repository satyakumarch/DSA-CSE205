#include <iostream>
using namespace std;

/* Linked list node */
class Node {
public:
    int data;
    Node* next;
};

/* Function to create a new node with given data */
Node* newNode(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

/* Function to insert a node at the beginning of the Singly Linked List */
void push(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/* Function to input a number as a linked list from the user */
Node* inputNumber() {
    Node* num = NULL;
    int n, digit;
    
    cout << "Enter the number of digits: ";
    cin >> n;
    
    cout << "Enter the digits (from least significant to most significant): ";
    for (int i = 0; i < n; i++) {
        cin >> digit;
        push(&num, digit);
    }
    
    return num;
}

/* Adds contents of two linked lists and returns the head node of the resultant list */
Node* addTwoLists(Node* first, Node* second) {
    // ... (your existing addTwoLists code)
}

Node* reverse(Node* head) {
    // ... (your existing reverse code)
}

/* A utility function to print a linked list */
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

/* Driver code */
int main(void) {
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;

    cout << "Enter the first number:" << endl;
    first = inputNumber();
    
    cout << "Enter the second number:" << endl;
    second = inputNumber();

    cout << "First number is ";
    printList(first);

    cout << "Second number is ";
    printList(second);

    first = reverse(first);
    second = reverse(second);

    res = addTwoLists(first, second);

    res = reverse(res);
    cout << "Resultant sum is ";
    printList(res);
    return 0;
}

