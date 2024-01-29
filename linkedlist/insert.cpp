#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node* next;
};
node *head;
void insert(int x){
   node* temp=head;
   node* n=new node;
   n->data=x;
   if(head==NULL){
      n->next=head;
      head=n;
   }
   else{
      while(temp->next!=NULL){
         temp=temp->next;
      }
      temp->next=n;
      n->next=NULL;
   }
}
int display(){
   if (head == NULL) {
      cout << "List is empty" << endl;

   }
   else{
      node* temp = head;
      while(temp->next!=NULL){
         cout<<temp->data<<endl;
         temp=temp->next;
      }
   
      
   }
}
int main(){
   insert(1);
   insert(1);
   insert(1);
   insert(1);
   display();
} 
