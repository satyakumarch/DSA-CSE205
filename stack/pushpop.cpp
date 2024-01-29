#include <iostream>
#include <cstdlib>
using namespace std;

void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node *head;

int main()
{
int choice=0;
while(choice != 4)
{
cout<<"\n\nChoose one option from below...\n";
cout<<"1.Push\t2.Pop\t3.Display Stack\t4.Exit";
cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
cout<<"Exiting....";
break;
}
default:
{
cout<<"Please Enter valid choice ";
}
};
}
return 0;
}
void push ()
{
int val;
//struct node *ptr = (struct node*)malloc(sizeof(struct node));
struct node *ptr = new struct node;
if(ptr == NULL)
{
cout<<"not able to push the element";
}
else
{
cout<<"Enter the value: ";
cin>>val;
if(head==NULL)
{
ptr->val = val;
ptr -> next = NULL;
head=ptr;
}
else
{
ptr->val = val;
ptr->next = head;
head=ptr;

}
cout<<"Item pushed";

}
}

void pop()
{
int item;
struct node *ptr;
if (head == NULL)
{
cout<<"Underflow";
}
else
{
item = head->val;
ptr = head;
head = head->next;
free(ptr);
cout<<item<<" popped";
}
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr == NULL)
{
cout<<"Stack is empty";
}
else
{
cout<<"\nPrinting Stack elements: \n";
while(ptr!=NULL)
{
cout<<ptr->val<<endl;
ptr = ptr->next;
}
}
}
output


//Choose one option from below...
//1.Push  2.Pop   3.Display Stack 4.Exit
//Enter your choice: 1
//Enter the value: 66
//Item pushed
//
//Choose one option from below...
//1.Push  2.Pop   3.Display Stack 4.Exit
//Enter your choice: 1
//Enter the value: 45
//Item pushed
//
//Choose one option from below...
//1.Push  2.Pop   3.Display Stack 4.Exit
//Enter your choice: 1
//Enter the value: 55
//Item pushed
//
//Choose one option from below...
//1.Push  2.Pop   3.Display Stack 4.Exit
//Enter your choice: 3
//
//Printing Stack elements:
//55
//45
//66


Choose one option from below...
1.Push  2.Pop   3.Display Stack 4.Exit
Enter your choice: 2
55 popped

Choose one option from below...
1.Push  2.Pop   3.Display Stack 4.Exit
Enter your choice: 3

Printing Stack elements:
45
66


Choose one option from below...
1.Push  2.Pop   3.Display Stack 4.Exit
Enter your choice: ^A
