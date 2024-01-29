#include<bits/stdc++.h>
#include<iostream>
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
int main(){
	
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


