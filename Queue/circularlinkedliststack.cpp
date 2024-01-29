#include <iostream>
#define MAX 5
using namespace std;

int qarr[MAX];
int rear = -1;
int front = -1;

void enqueue()
{
int item;
if((front==0 && rear==(MAX-1)) || (rear!=-1 && front==rear+1)){
cout<<"\nQueue overflow\n";
return;
}
else
{
cout<<"\nEnter item to enqueue: ";
cin>>item;
rear = (rear+1)%MAX;
qarr[rear] = item;
if(front == -1){
front = rear;
}
}
}

void dequeue()
{
if(front == -1)
{
cout<<"\nQueue underflow\n";
return;
}
else
{
cout<<"\nElement deleted after dequeue is: "<<qarr[front];
cout<<"\n";
if(front == rear){
front = rear = -1;
}
else{
front = (front+1)%MAX;
}
}
}

void display()
{
if(front == -1){
cout<<"\nQueue is empty\n";
}
else
{
cout<<"\nQueue is: ";
if(front <= rear){
for(int i=front; i<=rear; i++)
{
cout<<qarr[i]<<" ";
}
}
else{
for(int i=front; i<=MAX-1; i++){
cout<<qarr[i]<<" ";
}
for(int i=0; i<=rear; i++){
cout<<qarr[i]<<" ";
}
}
cout<<"\n";
}
}

int main()
{
int choice;

while(1)
{
cout<<"\nChoice: 1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n";
cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
enqueue();
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
Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 1

Enter item to enqueue: 34

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 1

Enter item to enqueue: 45

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 1

Enter item to enqueue: 54

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 2

Element deleted after dequeue is: 34

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 3

Queue is: 45 54

Choice: 1.Enqueue       2.Dequeue       3.Display       4.Exit

Enter your choice: 4

--------------------------------
Process exited after 36.08 seconds with return value 0
Press any key to continue . . .
