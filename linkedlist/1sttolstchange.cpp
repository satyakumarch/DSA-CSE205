#include <iostream>
using namespace std;

/* A linked list node */
class Node {
public:
    int data;
    Node* next;
};

/* We are using a double pointer
head_ref here because we change
head of the linked list inside
this function.*/
void moveToFront(Node** head_ref) {
    /* If linked list is empty, or
    it contains only one node,
    then nothing needs to be done,
    simply return */
    if (*head_ref == NULL || (*head_ref)->next == NULL)
        return;

    /* Initialize second last
    and last pointers */
    Node* secLast = NULL;
    Node* last = *head_ref;

    /* After this loop secLast contains
    the address of the second last node and
    last contains the address of the last node in Linked List */
    while (last->next != NULL) {
        secLast = last;
        last = last->next;
    }

    /* Set the next of the second last as NULL */
    secLast->next = NULL;

    /* Set next of last as the head node */
    last->next = *head_ref;

    /* Change the head pointer
    to point to the last node now */
    *head_ref = last;
}

/* Function to add a node
at the beginning of Linked List */
void push(Node** head_ref, int new_data) {
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* start = NULL;
    int data;
    char choice;

    cout << "Enter values for the linked list (Enter -1 to stop):" << endl;
    while (true) {
        cin >> data;
        if (data == -1)
            break;
        push(&start, data);
    }

    cout << "Linked list before moving last to front" << endl;
    printList(start);

    // Function call
    moveToFront(&start);

    cout << "\nLinked list after moving the last element to front" << endl;
    printList(start);

    return 0;
}
output
Enter values for the linked list (Enter -1 to stop):
1 2 3 4 5 6 7 -1
Linked list before moving last to front
7 6 5 4 3 2 1
Linked list after moving the last element to front
1 7 6 5 4 3 2
