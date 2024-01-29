#include<iostream>
#define MAX 5
using namespace std;

int qarr[MAX];
int rear=-1;
int front =-1;

void enqueue()
{
	int item;
	if(item==(MAX -1)){
		cout<<"\nQueue overflow\n:";
		return ;
	}
	else
	{
		if(front==-1)
		{
			front =0;
		}
		cout<<"\nEnter element to enqueue:";
		cin>>item;
		rear=rear+1;
		qarr[rear]=item;
		
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
		cout<<"\nQueue underflow\n:";
		return ;
	}
	else
	{
		cout<<"\nEnter delete after dequeue is:"<<qarr[front];
		cout<<"\n";
		front=front+1;
		
	}
}
void display()
{
	int i;
	if(front==-1)
	cout<<"\nqueue is empty\n:";
	else
	{
		cout<<"\nQueue is:";
		for(i=front)
	}
}

