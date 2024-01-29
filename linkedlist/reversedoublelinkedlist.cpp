#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Reversing our double linked list
void reverse(node*& head)
{
    node* temp = NULL;
    node* curr = head;

    /* swap next and prev for all nodes of
    doubly linked list */
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    // Edge case if our linked list is empty Or list with only one node
    if (temp != NULL)
        head = temp->prev;
}

// Insert element at the end of our doubly linked list
void insertElement(node*& head, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head = n;
        head->next = NULL;
        return;
    }
    else {
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

// Printing our double linked list
void display(node*& head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    /* Start with the empty list */
    node* head = NULL;
    int n;

    // Input the number of elements to insert
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    // Input the elements and insert them into the doubly linked list
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        insertElement(head, value);
    }

    cout << "Original Linked list" << endl;
    display(head);

    /* Reverse doubly linked list */
    reverse(head);

    cout << "Reversed Linked list" << endl;
    display(head);

    return 0;
}
output
Enter the number of elements to insert: 5
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3
Enter element 4: 4
Enter element 5: 5
Original Linked list
1 2 3 4 5
Reversed Linked list
5 4 3 2 1
