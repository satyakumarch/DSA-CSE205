//1)start 
//2)create a new node and assign the data
//3)find the last node
//4)point the last node to new node
//5)END

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head=	NULL;
struct node *current=NULL;

//display the list
void printlist(){
	struct node *p =head;
	cout<<"\n";
	
	//starting from the begining
	while(p!=NULL){
		cout<<" "<<p->data<<" ";
		p=p->next;
	}
	cout<<" ";
}
void insertatbegin(int data){
	
	//create a link
	struct node *lk=(struct node*) malloc(sizeof(struct node));
	lk->data-data;
	
	//point it to old new first node
	lk->next=head;
	
	//point first to new first node
	head=lk;
}

void insertatend(int data){
	//create a link
	struct node *lk=(struct node*) malloc(sizeof(struct node));
	lk->data=data;
	struct node *linkedlist=head;
	
	//point it to old first node
	while(linkedlist->next!=NULL)
	linkedlist=linkedlist->next;
	
	//point first to new first node
	linkedlist->next=lk;
}


int main() {
   int n;
   cout << "Enter the number of elements to insert: ";
   cin >> n;

   for (int i = 0; i < n; ++i) {
      int data;
      cout << "Enter element " << i + 1 << ": ";
      cin >> data;
      insertatend(data);
   }

   cout << "Linked List: ";

   // Print the list
   printlist();

   return 0;
}







