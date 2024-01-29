#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

void PrintList(ListNode* head) // Function to print the LinkedList
{
    ListNode* curr = head;
    for ( curr != NULL; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
}

ListNode* InsertatFirst(int value, ListNode* head) {

    // Step 1: creating a new Node with the given val
    ListNode* newnode = new ListNode(value);

    // Step 2: Making next of newly created Node point to the current head of LinkedList
    newnode->next = head;

    // Making the newly created Node as the new head of the LinkedList
    head = newnode;
    return head;
}

int main() {
    ListNode* head = NULL; // head of the LinkedList
    int n;
    
    // Input the number of elements to insert
    cout << "Enter the number of elements to insert: ";
    cin >> n;
    
    // Input the elements and insert them at the beginning of the list
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        head = InsertatFirst(value, head);
    }

    cout << "LinkedList after inserting elements at the beginning : " << endl;
    PrintList(head);
    return 0;
}


//output
//Enter the number of elements to insert: 6
//Enter element 1: 1
//Enter element 2: 2
//Enter element 3: 3
//Enter element 4: 4
//Enter element 5: 5
//Enter element 6: 6
//LinkedList after inserting elements at the beginning :
//6-->5-->4-->3-->2-->1-->null
