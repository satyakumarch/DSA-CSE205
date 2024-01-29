//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	struct node *next;
//};
//struct node *head;
//void beg(int val){
//	struct node *p=new struct node;
//	if(p==NULL)
//	{
//		cout<<"overflow";
//		return;
//	}
//	p->data=val;
//	p->next=head;
//	head=p;
//	cout<<"Node Inserted";
//}
//
//void display(struct node *h)
//{
//	while(h!=NULL)
//	{
//		cout<<h->data<<"->";
//		h=h->next;
//	}
//}
//int main()
//{
//	int val, ch;
//	do
//	{
//		cout<<"\nEnter item: ";
//		cin>>val;
//		beg(val);
//		cout<<"\n Enter 0 to add more: ";
//		cin>>ch;
//		if(ch!=0)
//		{
//			break;
//		}
//		}
//		while(ch==0);
//		display(head);
//		return 0;
//	}
//Enter item: 5
//Node Inserted
// Enter 0 to add more: 0
//
//Enter item: 5
//Node Inserted
// Enter 0 to add more: 0
//
//Enter item: 7
//Node Inserted
// Enter 0 to add more: 0
//
//Enter item: 8
//Node Inserted
// Enter 0 to add more: 8
//8->7->5->5->



//#include<iostream>
//using namespace std;
//struct node{
//	int data;
//	struct node* next;
//};
//struct node *head;
//	void beg(int val){
//	
//	struct node *p= new  struct node;
//	if(p==NULL){
//		cout<<"Overflow:";
//		return ;
//	}
//	p->data=val;
//	p->next=head;
//	head=p;
//	cout<<"\nNode inserted:";
//	
//};
//void display(struct node *h)
//{
//	while(h!=NULL)
//	{
//		cout<<h->data<<"->";
//		h=h->next;
//	}
//}
//int main()
//{
//	int val,ch;
//	do{
//		cout<<"Enter item:";
//	cin>>val;
//	beg(val);
//	cout<<"\nEnter 0 to choice more:";
//	cin>>ch;
//	if(ch!=0)
//	{
//	break;
//	}
//}
//	while(ch==0);
//display(head);
//return 0;
//}

#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head;
void beg(int val){
	struct node *p =new struct node;
	if(p==NULL){
		cout<<"overflow";
		return;
	}
	p->data=val;
	p->next=head;
	head=p;
	cout<<"\n Node inserted\n";
}
void display(struct node *h){
	while(h!=NULL){
		cout<<h->data<<"->";
		h=h->next;
	}
}
int main(){
	int val,ch;
do{
	cout<<"Enter item:";
	cin>>val;
	beg(val);
	cout<<"Enter 0 to insert item:";
	cin>>ch;
	if(ch!=0)
	{
	break;	
	}
	
}
while(ch==0);
display(head);
return 0;
}

Enter item:5

 Node inserted
Enter 0 to insert item:0
Enter item:25

 Node inserted
Enter 0 to insert item:0
Enter item:32

 Node inserted
Enter 0 to insert item:0
Enter item:56

 Node inserted
Enter 0 to insert item:0
Enter item:58

 Node inserted
Enter 0 to insert item:0
Enter item:32

 Node inserted
Enter 0 to insert item:5
32->58->56->32->25->5->

