//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	struct node* next;
//	
//};
//struct node* head;
//void sorted_list(int item)
//{
//	struct node *ptr,*prev;
//	struct node* p=new struct node;
//	if(p==NULL)
//	return;
//
//p->data=item;
//p->next=NULL;
//if(head==NULL)
//{
//	head=p;
//	cout<<"node inserted:";
//	return;
//}
//ptr=head; 
//prev=NULL;
//while((ptr!=NULL)&&(item>ptr->data))
//{
//	prev=ptr;
//	ptr=ptr->next;
//	}	
//if(prev==NULL)
//{
//	p->next=head;
//	head=p;
//}
//else
//{
//	p->next=ptr;
//	prev->next=p;
//	{
//		cout<<"node inserted";
//	}
//}
//}
//void display(struct node* h)
//{
//	cout<<"sorted list is:";
//	while(h!=NULL)
//	{
//		cout<<h->data<<"->";
//		h=h->next;
//	}
//}
//int main(){
//	int item,choice;
//	do
//	{
//		cout<<"Enter item:";
//		cin>>item;
//		sorted_list(item);
//		cout<<"enter 0 to add more:";
//		cin>>choice;
//		if(choice!=0)
//		{
//			break;
//		}
//	}
//		while(choice==0);
//	
//	display(head);
//	return 0;
//}

//
//
//
//Enter item:6
//node inserted:enter 0 to add more:0
//Enter item:3
//enter 0 to add more:0
//Enter item:5
//node insertedenter 0 to add more:0
//Enter item:6
//node insertedenter 0 to add more:0
//Enter item:2
//enter 0 to add more:0
//Enter item:3
//node insertedenter 0 to add more:3
//sorted list is:2->3->3->5->6->6->

#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head;
void sorted_list(int item)
{
struct node *ptr,*prev;
struct node *p=new struct node;	
if(p==NULL)
return;

p->data=item;
p->next=NULL;
if(head=NULL)
{
	head=p;
	cout<<"Node is inserted:";
	return;
	
}
ptr=head;
prev=NULL;
while((ptr!=NULL)&&(item>ptr->data))
{
	prev=ptr;
	ptr=ptr->next;
}
if(prev==NULL)
{
	p->next=head;
	head=p;
}
else
{
	p->next=ptr;
	prev->next=p;
	{
		cout<<"Node is inserted:";
	}
}
} 



