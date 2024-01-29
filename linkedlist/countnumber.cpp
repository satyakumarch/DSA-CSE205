#include <iostream>
using namespace std;

/* Link list node */
class Node {
public:
	int data;
	Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Counts no. of nodes in linked list */
int getCount(Node* head)
{
	int count = 0; // Initialize count
	Node* current = head; // Initialize current
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

int main()
{
	/* Start with an empty list */
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

	// Function call
	cout << "Count of nodes is " << getCount(head) << endl;
	
	return 0;
}

output
Enter a value to insert: 5
Do you want to insert another value? (y/n): y
Enter a value to insert: 3
Do you want to insert another value? (y/n): y
Enter a value to insert: 4
Do you want to insert another value? (y/n): y
Enter a value to insert: 2
Do you want to insert another value? (y/n): y
Enter a value to insert: 6
Do you want to insert another value? (y/n): y
Enter a value to insert: 7
Do you want to insert another value? (y/n): y
Enter a value to insert: 8
Do you want to insert another value? (y/n): n
Count of nodes is 7
