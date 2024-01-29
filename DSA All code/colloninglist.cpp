#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	int data;
	struct node *next;
	
};
struct node*head;
void inst_beg(int item)
{
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overlap";
		return ;
	}
	p->data=item;
	p->next=head;
	head=p;
	cout<<"node inserted";
}

struct node *copy_list()
{
	struct node *start;
	if(head==NULL)
	{
		start =NULL;
		return start;
	}
	struct node *p=new struct node;
	p->data=head->data;
	start =p;
	struct node *ptr,*prev;
	ptr=head;
	prev=p;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		struct node *newnode=new struct node;
		newnode->data=ptr->data;
		prev=prev->next;
	}
	prev->next=NULL;
	return start;

}

void display (struct node *h)
{
	while(h!=NULL){
		cout<<h->data<<"->";
		h=h->next;
	}
}
int main(){
	int item,choice;  
	do{
		cout<<"Enter item:"<<endl;
		cin>>item;
		inst_beg(item);
		cout<<"Enter 0 to add more:";
		cin>>choice;
		if(choice!=0)
		{
			break;
		}
		}while(choice==0);
		cout<<"list 1";
	display(head);
	struct node *start=copy_list();
	cout<<"list 2:";
	display(start);
	return 0;
		
	}
	
//		Enter item:
//5
//node insertedEnter 0 to add more:0
//Enter item:
//4
//node insertedEnter 0 to add more:0
//Enter item:
//4
//node insertedEnter 0 to add more:0
//Enter item:
//5
//node insertedEnter 0 to add more:0
//Enter item:
//5
//node insertedEnter 0 to add more:0
//Enter item:
//2
//node insertedEnter 0 to add more:0
//Enter item:
//5
//node insertedEnter 0 to add more:0
//Enter item:
//6
//node insertedEnter 0 to add more:0
//Enter item:
//2
//node insertedEnter 0 to add more:08
//list 12->6->5->2->5->5->4->4->5->list 2:2->12346480->12321104->

