#include<iostream>
using namespace std;
struct node
{
struct node *prev;
int data;
struct node *next;
	
};
struct node *head;
void beg(int item)
{
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overflow:";
		return ;
	}

p->data=item;
p->next=NULL;
p->prev=NULL;
if(head==NULL)
{
	head=p;
	cout<<"node inserted";
	return ;
}
else
{
p->next=head;
head->prev=p;
head=p;
cout<<"no node inserted:";	
}
}

void display(struct node* h)
{
	cout<<"sorted list is:";
	while(h!=NULL)
	{
		cout<<h->data<<"->";
		h=h->next;
	}
}

int main(){
	int item,choice;
	do
	{
		cout<<"Enter item:";
		cin>>item;
		beg(item);
		cout<<"\nenter 0 to add more:";
		cin>>choice;
		if(choice!=0)
		{
			break;
		}
	}
		while(choice==0);
	
	display(head);
	return 0;
}

Enter item:8
node inserted
enter 0 to add more:0
Enter item:5
no node inserted:
enter 0 to add more:0
Enter item:8
no node inserted:
enter 0 to add more:0
Enter item:66
no node inserted:
enter 0 to add more:5
sorted list is:66->8->5->8->



