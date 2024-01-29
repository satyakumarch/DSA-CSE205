#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
//function to check if an array reoresent  an inorder  treansversal of a BST
bool isvalidinorder(int arr[],int n){
	//if the array is empty it is a valid BST
	if(n==0){
		return true;
	}
	//innitialize the minimum possible value for  the root
	int min_val=INT_MIN;
	
	//transverse the array and check if it is in asccending
	for(int i=0;i<n;i++){
		if(arr[i]<min_val){
			return false;
		}
		min_val=arr[i];
	}
	return true;
}
int main(){
	int n;
	cout<<"Enter the number of integer:";
	cin>>n;
	int arr[n];
	//
	cout<<"Enter "<<n<<" integer:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//check if the array represent an inorder transversal  of a bst;
	if(isvalidinorder(arr,n)){
		cout<<"yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}
//output
//Enter the number of integer:5
//Enter 5 integer:19 23 25 30 45
//yes

//Enter the number of integer:5
//Enter 5 integer:19 23 30 25 45
//No


