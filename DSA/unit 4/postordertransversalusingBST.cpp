#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val):data(val),left(nullptr),right(nullptr){}
	
};
Node* insert(Node* root.int data){
	if(root==nullptr){
		return new Node(data);
	}else{
		Node* cur=new Node(data);
		
		if(root->lefft==nullptr){
			root->left=cur;
		}else if(root->right==nullptr){
			root->right=cur;
			
		}else{
			root->left=insert(root->left,data);
		}
		return root;
	}
}
void postorder(Node* root){
	if(root!=nullptr){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
int main(){
	Node* root=nullptr;
	int n;
	int data;
	cin>>n;
	while(n-->0){
		cin>>data;
		root=insert(root,data);
	}
	postorder(root);
	return 0;
}
