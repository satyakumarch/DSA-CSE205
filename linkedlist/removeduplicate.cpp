#include <iostream>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
};

/* The function removes duplicates from a sorted list */
void removeDuplicates(Node* head) {
    /* Pointer to traverse the linked list */
    Node* current = head;

    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next;

    /* do nothing if the list is empty */
    if (current == NULL)
        return;

    /* Traverse the list till the last node */
    while (current->next != NULL) {
        /* Compare the current node with the next node */
        if (current->data == current->next->data) {
            /* The sequence of steps is important */
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        } else /* This is tricky: only advance if no deletion */
        {
            current = current->next;
        }
    }
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning of the linked list */
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
        cout << " " << node->data;
        node = node->next;
    }
}

int main() {
    /* Start with an empty list */
    Node* head = NULL;
    int data;
    char choice;

    cout << "Enter values for the sorted linked list (Enter -1 to stop):" << endl;
    while (true) {
        cin >> data;
        if (data == -1)
            break;
        push(&head, data);
    }

    cout << "Linked list before duplicate removal " << endl;
    printList(head);

    /* Remove duplicates from linked list */
    removeDuplicates(head);

    cout << "\nLinked list after duplicate removal " << endl;
    printList(head);

    return 0;
}

