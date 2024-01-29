

//insertion at end CLL
current =head;
newnode ->data=item;
newnode->next=newnode;
if(head==NULL){
	head=newnode;
}
while(current ->next!=head)
{
	current=current->next;
}
newnode->next=head;
current->next=newnode;


//insertion at end of CLL
current=head;
newnode->data=item;
newnode->next=newnode;
if(head==NULL)
{
	head=newhead;
}
while(current->next!=head)
{
current =current->next;	
}
newnode->next=head;
current->next=newnode;
head=newnode;


//deletion at end CLL
current=head;
prev=NULL;
if(head==NULL)
{
	cout<<"underefolw";
}
while(current->next!=head){
	prev=current
	current=current->next;
}
prev->next=current->next;
free(current);

//Deletion at front of CLL
current=head;
if(head=NULL)
{
	cout<<"underflow";

}
while(current->next!=head)
{
	current=current=>next;
}
head=head->next;
current->next=head;
