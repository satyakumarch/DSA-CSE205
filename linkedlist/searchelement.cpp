#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int key;
    Node* next;
};

/* Given a reference (pointer to pointer) to the head
   of a list and an int, push a new node on the front
   of the list. */
void push(Node** head_ref, int new_key) {
    /* allocate node */
    Node* new_node = new Node();

    /* put in the key */
    new_node->key = new_key;

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

int main() {
    /* Start with the empty list */
    Node* head = NULL;
    int x;

    /* Use push() to construct the list */
    cout << "Enter values for the linked list (Enter -1 to stop):" << endl;
    while (true) {
        cin >> x;
        if (x == -1)
            break;
        push(&head, x);
    }

    cout << "Enter the value to search for: ";
    cin >> x;

    Node* temp = head;
    bool found = false;

    // Traverse the linked list to search for the value
    while (temp != NULL) {
        if (temp->key == x) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (found) {
        cout << "YES, the value " << x << " was found in the linked list." << endl;
    } else {
        cout << "NO, the value " << x << " was not found in the linked list." << endl;
    }

    return 0;
}
//output
//Enter values for the linked list (Enter -1 to stop):
//5 2 3 4 5 6 7 8 3 4 -1
//Enter the value to search for: 5
//YES, the value 5 was found in the linked list.


//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//};
//
//void insertAtFront(Node** head_ref, int new_data) {
//    Node* new_node = new Node();
//    new_node->data = new_data;
//    new_node->next = (*head_ref);
//    (*head_ref) = new_node;
//}
//
//void printList(Node* node) {
//    while (node != NULL) {
//        cout << " " << node->data;
//        node = node->next;
//    }
//    cout << "\n";
//}
//
//int main() {
//    Node* head = NULL;
//    char choice;
//
//    do {
//        int new_data;
//        cout << "Enter an element to insert at the front: ";
//        cin >> new_data;
//        insertAtFront(&head, new_data);
//
//        cout << "Do you want to insert another element? (y/n): ";
//        cin >> choice;
//    } while (choice == 'y' || choice == 'Y');
//
//    cout << "Linked list after inserting elements at the front: ";
//    printList(head);
//
//    return 0;
//}


