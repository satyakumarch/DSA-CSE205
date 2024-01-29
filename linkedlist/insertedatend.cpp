#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// appends a new node at the end
void append(Node** head_ref, int new_data)
{
    // Create a new node
    Node* new_node = new Node();
    new_node->data = new_data;

    // Store the head reference in a temporary variable
    Node* last = *head_ref;

    // Set the next pointer of the new node as NULL since it
    // will be the last node
    new_node->next = NULL;

    // If the Linked List is empty, make the new node as the
    // head and return
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next pointer of the last node to point to
    // the new node
    last->next = new_node;
}

// This function prints the contents of
// the linked list starting from the head
void printList(Node* node)
{
    while (node != NULL) {
        cout << "->" << node->data;
        node = node->next;
    }
}

int main()
{
    // Start with an empty list
    Node* head = NULL;
    int new_data;
    char choice;

    do {
        cout << "Enter a value to insert at the end: ";
        cin >> new_data;
        append(&head, new_data);

        cout << "Do you want to insert another value at the end? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Linked list after inserting values at the end: ";
    printList(head);

    return 0;
}

output
Enter a value to insert at the end: 5
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 3
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 2
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 6
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 7
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 8
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 1
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 8
Do you want to insert another value at the end? (y/n): y
Enter a value to insert at the end: 9
Do you want to insert another value at the end? (y/n): n
Linked list after inserting values at the end: ->5->3->2->6->7->8->1->8->9
