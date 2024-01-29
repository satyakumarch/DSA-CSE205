#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class NodeOperation {
public:

    // Function to add a new node
    void pushNode(Node** head_ref, int data_val) {

        // Allocate node
        Node* new_node = new Node();

        // Put in the data
        new_node->data = data_val;

        // Link the old list to the new node
        new_node->next = *head_ref;

        // Move the head to point to the new node
        *head_ref = new_node;
    }

    // Function to find the middle value of the linked list
    int findMiddleValue(Node* head) {
        vector<int> values;
        while (head != NULL) {
            values.push_back(head->data);
            head = head->next;
        }
        if (values.empty()) {
            return -1; // Empty list
        }
        return values[values.size() / 2];
    }
};

int main() {
    Node* head = NULL;
    NodeOperation* temp = new NodeOperation();
    int n, data;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        temp->pushNode(&head, data);
    }
    
    int middleValue = temp->findMiddleValue(head);
    
    if (middleValue != -1) {
        cout << "Middle Value of the Linked List is: " << middleValue << endl;
    } else {
        cout << "The Linked List is empty." << endl;
    }
    
    return 0;
}

output
Enter the number of elements: 5
Enter 5 elements: 1 2 3 4 5
Middle Value of the Linked List is: 3
