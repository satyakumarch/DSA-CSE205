//#include<iostream>
//
//using namespace std;
//
//struct node { // single node
//  int data;
//  node* next;
//  node* previous;
//  node(int d) { // constructor
//    data = d;
//    previous = NULL;
//    next = NULL;
//  }
//};
//
//node* delete_last(node* head) {
//  if (head == NULL) {
//    cout << "The list is empty." << endl;
//    return NULL;
//  }
//
//  if (head->next == NULL) { // Only one node in the list
//    delete head;
//    return NULL;
//  }
//
//  node* current = head;
//  while (current->next != NULL) { // iterating to the last node
//    current = current->next;
//  }
//
//  node* temp = current; // storing the last node
//  current->previous->next = NULL; // changing the next pointer of the neighboring node
//  delete temp; // deleting the last node
//  return head;
//}
//
//void print_dll(node* head) {
//  node* current = head;
//  while (current != NULL) {
//    cout << current->data << " ";
//    current = current->next;
//  }
//  cout << endl;
//}
//
//int main() {
//  node* head = NULL;
//  int new_data;
//  char choice;

//    cout << "Enter a value to insert: ";
//    cin >> new_data;

//     if (head == NULL) {
//      head = new node(new_data);
//    } else {
//      node* current = head;
//      while (current->next != NULL) {
//        current = current->next;
//      }
//      current->next = new node(new_data);
//      current->next->previous = current;
//    }
//    
//    cout << "Do you want to insert another value? (y/n): ";
//    cin >> choice;
//  } while (choice == 'y' || choice == 'Y');
//
// cout << "Original Doubly Linked List" << endl;
//  print_dll(head);
//
//  head = delete_last(head);
//
//  cout << "After deleting the Last node" << endl;
//  print_dll(head); // utility function
//
//  return 0;
//}
//output
//Enter a value to insert: 4
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 3
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 5
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 6
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 7
//Do you want to insert another value? (y/n): y
//Enter a value to insert: 8
//Do you want to insert another value? (y/n): n
//Original Doubly Linked List
//4 3 5 6 7 8
//After deleting the Last node
//4 3 5 6 7



#inlude<iostream>
using namespace std;

struct node{
	int data;
	node* next;
	node* previous;

node(int d){
	data=d;
	previous=NULL;
	Next=NULL;
}
};
node* delete_last(node* head){
     if( head==NULL){
		cout<<"Linked list is empty:";
		return NULL;
}
if(head->next=NULL){
	delete head;
	return NULL;
}
node* current= head;
while(current->next!=NULL){
current=current->next;	
}
node* temp=current;
current->previous->next=NULL;
delete temp;
return head;
}

void print_all(node* head){
	node* current=head;
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
}
int main(){
	node* head= NULL;
	int new_data;
	char choice;
	
	cout<<"Enter the value you want to insert:";
	cin>>new_data;
	
	if(node=head){
		
	}
}
