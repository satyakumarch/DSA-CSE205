//Algorithm
//1)start 
//2)check a node to store data
//3)check if the list is empty
//4)if the list is empty,add the data to the node and assign the head pointer to it.
//5)if the list is not empty,add the data to a node and link to the current head.assign the head to the newly added node
//6)end


#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
// display   the list
void printlist(){
	struct node*p=head;
	cout<<" \n";
	//start from begining
	while(p!=NULL){
		cout<<" "<<p->data<<" ";
		p=p->next;
	}
	cout<<" ";
}
insertatbegin(int data){
	
//create a link
struct node *lk=(struct node*) malloc(sizeof(struct node));
lk->data=data;
//point it to old first node
lk->next=head;
//point fiest to new first node
head=lk;
}
int main(){
	int num_element;
	cout<<"Enter the number of element to insert:";
	cin>>num_element;
	
	for(int i=0;i<num_element;i++){
		int data;
		//cout<<i+1<<" ";
		cin>>data;
		insertatbegin(data);
	}
	cout<<"Linked list:";
	printlist();
	return 0;
}
output
Enter the number of element to insert:8
7 5 9 6 4 7 6 4
Linked list:
 4  6  7  4  6  9  5  7
