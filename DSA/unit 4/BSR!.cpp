#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//definitation  of a node in  a binary search tree
struct Node{
	int data;
	Node* left;
	Node* right;
};
//utility function to create a new node
Node* newNode(int data){
	Node* node=new Node();
	node->data=data;
	node->left=nullptr;
	node->right=nulptr;
	return node;
}
//function to insert a node into a BST
Node* insert(Node* root,int data){
	if(root==nullptr)
	return newNode(data);
	
	if(data<root->data)
	root->left=insert(root->left,data);
	else if(data>root->data)
	root->right=insert(root->right,data);
	return root;
}
//function to check if two BST are identical
bool arefleetsidentical(Node* fleet1,Node* fleet2){
	if(fleet1==nullptr && fleet2==nullptr)
	return true;
	else if(fleet1==nullptr || fleet2==nullptr)
	return false;
	else{
		if(fleet1->data==fleet2->data&& arefleetidentical(fleet1->left,fleet2->left)&&
		arefleetidentical(fleet1->right,fleet2-data->right))
		return true;
		else
		return false;
		
	}
}
int main()
{
	Node* cityAfleet=nullptr;
	Node* cityBfleet=nullptr;
	int vehicleid;
	
	while(1){
	
		cin>>vehicleid;
		if(vehicleid==-1)
		break;
		cityAfleet=insert(cityAfleet,vehicleid);
	}
	while(1){
	
		cin>>vehicleid;
		if(vehicleid==-1)
		break;
		cityBfleet=insert(cityBfleet,vehicleid);
	}
	if(arefleetidentical(cityAfleet,cityBfleet))
	cout<<"Both vehicle fleets are identical"<<endl;
	else
	cout<<"vehicle fleets are not identical"<<endl;
	return 0;
}
