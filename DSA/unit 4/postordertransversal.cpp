#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root;
void append(int d)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	struct node*temp=root;
	newnode->data=d;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		while(true)
		{
			if(d<temp->data)
			{
				if(temp->left!=NULL)
				{
					temp=temp->left;
				}
				else{
					temp->left=newnode;
					break;
				}
			}
			else{
				if(temp->right!=NULL)
				{
					temp=temp->right;
				}else{
					temp->right=newnode;
					break;
				}
			}
		}
	}
	
}
void postorder(struct node*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
int main(){
	int d;
	do
	{
		cin>>d;
		if(d>0)
		append(d);
	}
	while(d!=-1);
	cout<<"POst order transversal:"<<endl;
	postorder(root);
	return 0;
}
output
100
20
200
10
30
150
300
-1
POst order transversal:
10 30 20 150 300 200 100
