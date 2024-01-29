#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 struct node
 {
 	int data;
 	struct node *next;
 	
 };
 void insert_in_the_begining(struct node **head_ref,int element)
 {
 struct node *newnode=(struct node*) malloc(sizeof(struct node));
 newnode->data=element;
 newnode->next=*head_ref;
 *head_ref=newnode;	
 }
 void print_list(struct node *head)
 {
 	struct node *temp=head;
 	while(temp!=NULL){
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
 }
 int main(){
 	struct node *head =NULL;
 	int n,element;
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		cin>>element;
 		insert_in_the_begining(&head,element);
	 }
	 print_list(head);
	 return 0;
 }
 5
1 2 3 4 5
5 4 3 2 1
