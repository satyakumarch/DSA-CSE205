#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_NODES=50;

struct Node{
	int data;
	int leftindex;
	int rightindex;
};
struct Node tree[MAX_NODES];
int currentindex=0;

int createNode(int data){
	tree[currentindex].data=data;
	tree[currentindex].leftindex=-1;
	tree[currentindex].rightindex=-1;
	return currentindex++;
}
int insertNode(int rootindex,int data){
	if(rootindex==-1){
		return createNode(data);
	}
	if(data<tree[rootindex].data){
		tree[rootindex].leftindex=insertNode(tree[rootindex].leftindex,data);
		
	}else{
		tree[rootindex].rightindex=insertNode(tree[rootindex].rightindex,data);
		
	}
	return rootindex;
}
int sumofelementpreorder(int rootindex){
	if(rootindex==-1){
		return 0;
	}
	int sum=0;
	int stack[MAX_NODES];
	int top=-1;
	
	stack[++top]=rootindex;
	
	while(top!=-1){
		int currindex=stack[top--];
		sum+=tree[currindex].data;
		
		if(tree[currindex].rightindex!=-1){
			stack[++top]=tree[currindex].rightindex;
		}
		if(tree[currindex].leftindex!=-1){
			stack[++top]=tree[currindex].leftindex;
		}
	}
	return sum;
}
int main(){
	int rootindex=-1;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		rootindex=insertNode(rootindex,data);
	}
	int sum=sumofelementpreorder(rootindex);
	cout<<sum<<endl;
}
output
7
5 3 8 2 4 7 9
38
