#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
struct node *head;
void beg(int item)
{
	struct node *p=new struct node;
	if(p==NULL)
	{
		cout<<"overflow"<<endl;
		return;
	}
	p->data=item;
	p->next=NULL;
	p->prev=NULL;
	if(head==NULL)
	{
		head=p;
		cout<<"node inserted:";
		return;
	}
	p->next=head;
	head->prev=p;
	head=p;
	cout<<"node inserted:";
}
void delloc(int loc){
	struct node *ptr,*prevnode;
	if(head==NULL){
		cout<<"underflow"<<endl;
		return;
	}
	ptr=head;
	prevnode=NULL;
	if(loc==0)
	{
		cout<<"delected item is"<<head->data<<endl;
		head=head->next;
		if(head!=NULL){
			head->prev=NULL;
			
		}
	}
	else

{

for(int i=1;i<=loc;i++){
	prevnode=ptr;
	ptr=ptr->next;
	if(ptr==NULL){
		cout<<"node not found"<<endl;
		return ;
	}
}
cout<<"delected item is"<<ptr->data;
if(ptr->next!=NULL){
	ptr->next->prev=prevnode;
	prevnode->next=ptr->next;
}
else
{
	prevnode->next=ptr->next;
}
}
free(ptr);
}
void display(struct node *p){
	cout<<"\nlist is: ";
	while(p!=NULL){
		cout<<p->data<<"->";
		p=p->next;
	}
}
int main(){
	int item,choice,ch,loc;
	do{
		cout<<"\nenter choice:1 inserted at beg \t 2.del at loc ";
		cin>>choice;
		switch(choice)
	{
	
	case 1:
		cout<<"\nEnter item"<<endl;
		cin>>item;
		beg(item);
		break;
		
		case 2:
		cout<<"\nEnter loc: ";
		cin>>loc;
		delloc(loc);
		break;
		default:
			cout<<"invalid choice "<<endl;
			break;
}
display(head);
cout<<"\nEnter 0 to continue"<<endl;
cin>>ch;
if(ch!=0){
	break;
}}
while(ch==0);
	return 0;
}	
//output
//
//enter choice:1 inserted at beg   2.del at loc 1
//
//Enter item
//23
//node inserted:
//list is: 23->
//Enter 0 to continue
//0
//
//enter choice:1 inserted at beg   2.del at loc 1
//
//Enter item
//5467846
//node inserted:
//list is: 5467846->23->
//Enter 0 to continue
//0
//
//enter choice:1 inserted at beg   2.del at loc 1
//
//Enter item
//55546
//node inserted:
//list is: 55546->5467846->23->
//Enter 0 to continue
//0
//
//enter choice:1 inserted at beg   2.del at loc 2
//
//Enter loc: 1
//delected item is5467846
//list is: 55546->23->
//Enter 0 to continue
//0
//
//enter choice:1 inserted at beg   2.del at loc 2
//
//Enter loc: 1
//delected item is23
//list is: 55546->
//Enter 0 to continue
//0
//
//enter choice:1 inserted at beg   2.del at loc 0
//invalid choice
//
//list is: 55546->
//Enter 0 to continue
//0 
//
//enter choice:1 inserted at beg   2.del at loc 0
//invalid choice
//
//list is: 55546->
//Enter 0 to continue

