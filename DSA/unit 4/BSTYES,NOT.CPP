//using linkedlist
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
int isBSTUtil(Node* node,int min,int max);
int isBST(Node* node){
	return(isBSTUtil(node,INT_MIN,INT_MAX));
}
int isBSTUtil(Node* node,int min,int max){
	if(node==NULL)
	return 1;
	
	if(node->data<min || node->data>max)
	return 0;
	
	return isBSTUtil(node->left,min,node->data-1)
	&&//allow anoy distinct values
	isBSTUtil(node->right,node->data+1,max);//allow only distinct values
}
Node* buildTree(){
	int data;
	cin>>data;
	if(data==-1)
	return NULL;
	
	Node* root=new Node(data);
	
	root->left=buildTree();
	root->right=buildTree();
	
	return root;
}
int main(){
	Node* root=buildTree();
	
	if(isBST(root))
	cout<<"The given binary tree is a BST:"<<endl;
	else
	cout<<"The given binary tree is not a BST:"<<endl;
	return 0;
}
//4 2 1 -1 -1 3 -1 -1 5 -1 -1
//The given binary tree is a BST:

//3 2 1 -1 -1 4 -1 -1 5 -1 -1
//The given binary tree is not a BST:
