#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
	int data;
	Node* next;
};

// Given a reference (pointer to pointer) to
// the head of a list and an int inserts a
// new node on the front of the list.
void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Given a reference (pointer to pointer) to
// the head of a list and a position, deletes
// the node at the given position
void deleteNode(Node** head_ref, int position)
{
	// If linked list is empty
	if (*head_ref == NULL)
		return;

	// Store head node
	Node* temp = *head_ref;

	// If head needs to be removed
	if (position == 0) {
		// Change head
		*head_ref = temp->next;
		// Free old head
		delete temp;
		return;
	}

	// Find previous node of the node to be deleted
	for (int i = 0; temp != NULL && i < position - 1; i++)
		temp = temp->next;

	// If position is more than number of nodes
	if (temp == NULL || temp->next == NULL)
		return;

	// Node temp->next is the node to be deleted
	// Store pointer to the next of node to be deleted
	Node* next = temp->next->next;

	// Unlink the node from linked list
	delete temp->next; // Free memory

	// Unlink the deleted node from list
	temp->next = next;
}

// This function prints contents of linked
// list starting from the given node
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
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
		cout << "Enter a value to insert: ";
		cin >> new_data;
		push(&head, new_data);

		cout << "Do you want to insert another value? (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	cout << "Created Linked List: ";
	printList(head);

	int position;
	cout << "\nEnter the position to delete (0-based index): ";
	cin >> position;

	deleteNode(&head, position);
	cout << "\nLinked List after Deletion at position " << position << ": ";
	printList(head);

	return 0;
}
//output
//Enter a value to insert: 5
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 4
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 6
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 7
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 8
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 9
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 1
//Do you want to insert another value? (y/n): n
//Created Linked List: 1 9 8 7 6 4 5
//Enter the position to delete (0-based index): 2
//
//Linked List after Deletion at position 2: 1 9 7 6 4 5
