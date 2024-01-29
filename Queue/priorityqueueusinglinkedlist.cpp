#include <iostream>
using namespace std;

struct Node {
int data;
int priority;
Node* next;
};

class PriorityQueue {
private:
Node* front;
public:
PriorityQueue() {
front = NULL;
}

void enqueue(int data, int priority) {
Node* newNode = new Node;
newNode->data = data;
newNode->priority = priority;
newNode->next = NULL;
if (front == NULL || priority > front->priority) {
newNode->next = front;
front = newNode;
} else {
Node* current = front;
while (current->next != NULL &&
current->next->priority >= priority) {
current = current->next;
}
newNode->next = current->next;
current->next = newNode;
}
}

bool isEmpty() {
return front == NULL;
}

int dequeue() {
if (isEmpty()) {
cout<<"\nQueue Underflow"<<endl;
return -1;
}
Node* temp = front;
int data = front->data;
front = front->next;
delete temp;
return data;
}

void display()
{
if(front == NULL){
cout<<"\nQueue is empty\n";
}
else
{
struct Node *temp = front;
cout<<"\nQueue is: ";
while(temp != NULL)
{
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<"\n";
}
}
};

int main() {
PriorityQueue pq;
int choice, value, pr, item;
while(1)
{
cout<<"\nChoice: 1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\nEnter the value to enqueue: ";
cin>>value;
cout<<"\nEnter the priority: ";
cin>>pr;
pq.enqueue(value,pr);
break;
case 2:
item = pq.dequeue();
cout<<"\nDeleted item is: "<<item<<"\n";
break;
case 3:
pq.display();
break;
case 4:
exit(0);
default:
cout<<"\nWrong choice\n";
}
}
return 0;
}
output
Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 1

Enter the value to enqueue: 10

Enter the priority: 1

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 1

Enter the value to enqueue: 20

Enter the priority: 2

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 1

Enter the value to enqueue: 30

Enter the priority: 3

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 3

Queue is: 30 20 10

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 2

Deleted item is: 30

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 3

Queue is: 20 10

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
Enter your choice: 4

--------------------------------
Process exited after 56.76 seconds with return value 0
