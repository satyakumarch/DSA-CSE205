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
	}
	else{
		root->right=insertNode(root->right,data);
	}
	return root;
}
bool isidentical(struct Node* root1,struct Node* root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1==NULL || root2==NULL){
		return false;
	}
	if(root1->data!=root2->data){
		return false;
	}
	bool leftsubtree=isidentical(root1->left,root2->left);
	bool rightsubtree=isidentical(root1->right,root2->right);
	
	return leftsubtree && rightsubtree;
}
int main(){
	struct Node* root1=NULL;
	struct Node* root2=NULL;
	int n1,n2,data;
	
	cin>>n1;
	for(int i=0;i<n1;i++){
		cin>>data;
		root1=insertNode(root1,data);
		
	}
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>data;
		root2=insertNode(root2,data);
	}
	if (isidentical(root1,root2)){
		cout<<"The two binary trees are identical. "<<endl;
	}else{
		cout<<"The two binary trees are not identical."<<endl;
	}
	return 0;
}

//5
//10 5 15 2 4
//5
//10 5 15 2 8
//The two binary trees are not identical.
//
//5
//10 5 15 2 8
//5
//10 5 15 2 8
//The two binary trees are identical.
