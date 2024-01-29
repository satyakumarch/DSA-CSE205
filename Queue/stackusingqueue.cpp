#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
int data;
struct node *next;
}*front = NULL, *rear = NULL;

void enqueue(int);
void dequeue();
void display();

int main()
{
int choice, value;
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
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
cout<<"\nWrong choice\n";
}
}
return 0;
}

void enqueue(int value)
{
struct node *newNode = new struct node;
if(newNode == NULL){
cout<<"\nOverflow";
return;
}
newNode->data = value;
newNode->next = NULL;
if(front == NULL){
front = rear = newNode;
}
else
{
rear->next = newNode;
rear = newNode;
}
}

void dequeue()
{
if(front == NULL){
cout<<"\nUnderflow on dequeue\n";
}
else
{
struct node *temp = front;
front = front->next;
cout<<"\nElement deleted after dequeue is: "<<temp->data<<"\n";
free(temp);
}
}

void display()
{
if(front == NULL){
cout<<"\nQueue is empty\n";
}
else
{
struct node *temp = front;
cout<<"\nQueue is: ";
while(temp != NULL)
{
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<"\n";
}
}

//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 2
//
//Underflow on dequeue
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 1
//
//Enter the value to enqueue: 33
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 1
//
//Enter the value to enqueue: 56
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 1
//
//Enter the value to enqueue: 88
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 3
//
//Queue is: 33 56 88
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 2
//
//Element deleted after dequeue is: 33
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice: 3
//
//Queue is: 56 88
//
//Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit
//Enter your choice:

