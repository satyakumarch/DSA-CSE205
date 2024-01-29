#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
int prefecessor;
void findpredecessor(Node* root,int val){
	if(root!=nullptr){
		if(root->data==val){
			Node* t=root->left;
			while(t->right!=nullptr){
				t=t->right;
				
			}
			predecessor=t->data;
		}
		else if(root->data>val){
			findpredecessor(root->left,val);
		}else if(root->data<val){
			predecessor=root->data;
			findpredecessor(roo->right,val);
		}
		
	}
}
Node* newNode(int data){
	Node* node=new Node;
	node->data=data;
	node->left=nullptr;
	node->right=nullptr;
	return node;
}
Node* insert(Node* root,int data){
	if(root==nullptr){
		return newNode(data);
	}else{
		if(data<=root->data){
			root->left=insert(root->left,data);
		}else{
			root->right=insert(root->right,data);
		}
		return root;
	}
}
int main(){
	Node* root=nullptr;
	int n,data;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>data;
		root=insert(root,data);
	}
	int targertdata;
	cin>>targetdata;
	
	predecessor=-1;
	findpredecessor(root,targetdata);
	
	if(predecressor!=-1){
		cout<<"inorder predecessor:"<<predecessor<<endl;
	}else{
		cout<<"Doesn't exist";
	}
	delete root;
	return 0;
}

