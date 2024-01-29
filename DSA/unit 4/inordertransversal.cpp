#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* createNode(int data){
	struct Node* newNode=new struct Node;
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct Node* insertNode(struct Node* root,int data){
	if(root==NULL){
		return createNode(data);
	}
	if(data<root->data){
		root->left=insertNode(root->left,data);
	}else{
		root->right=insertNode(root->right,data);
	}
	return root;
}
void inordertransversal(struct Node* root){
	struct Node* current=root;
	while(current!=NULL){
		if(current->left==NULL){
			cout<<current->data<<" ";
			current=current->right;
		}else{
			struct Node* pre=current->left;
			while(pre->right!=NULL && pre->right!=current){
				pre=pre->right;
			}
			if(pre->right==NULL){
				pre->right=current;
				current=current->left;
			}
			else{
				pre->right=NULL;
				cout<<current->data<<" ";
				current=current->right;
			}
		}
	}
}
int main(){
	struct Node* root=NULL;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		root=insertNode(root,data);
	}
	inordertransversal(root);
	return 0;
}
//4
//17 23 65 24
//17 23 24 65
//------------

//6
//78 22 30 12 34 27
//12 22 27 30 34 78
