#include<bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node*& head, int val) {
    node* new_node = new node(val);
    if (head == NULL) {
        head = new_node;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = NULL;
    int val;
    char choice;

    do {
        cout << "Enter a value to insert: ";
        cin >> val;
        insertAtTail(head, val);

        cout << "Do you want to insert another value? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Doubly Linked List: ";
    display(head);

    return 0;
}
//output
//Enter a value to insert: 5
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 5
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 9
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 3
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 7
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 0
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 3
//Do you want to insert another value? (y/n): 5
//Doubly Linked List: 5->5->9->3->7->0->3->NULL
