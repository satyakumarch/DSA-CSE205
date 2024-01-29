#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* head = nullptr;
ListNode* tail = nullptr; // head and tail of the LinkedList

void PrintList() // Function to print the LinkedList
{
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << "-->";
        curr = curr->next;
    }
    cout << "null" << endl;
}

void InsertAtLast(int value) // Function for creating a LinkedList
{
    ListNode* newnode = new ListNode(value);
    if (head == nullptr)
        head = tail = newnode;
    else {
        tail->next = newnode;
        tail = newnode;
    }
}

void DeleteLast() {
    if (head == nullptr)
        cout << "There are no nodes to delete in LinkedList" << endl;
    else {
        if (head->next == nullptr) {
            delete head;
            head = tail = nullptr;
        } else {
            ListNode* curr = head;
            ListNode* prev = nullptr;
            while (curr->next != nullptr) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = nullptr;
            delete curr;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        InsertAtLast(value);
    }
    
    cout << "LinkedList before Deleting Last Node : " << endl;
    PrintList();
    
    DeleteLast();
    
    cout << "LinkedList after Deleting Last Node : " << endl;
    PrintList();
    
    return 0;
}
