//Max heap

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void maxheapify(int arr[], int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left<n && arr[left]>arr[largest]){
	largest=left;
}
if(right<n && arr[right]>arr[largest]){
	largest=right;
}
if(largest!=i){
	swap(arr[i],arr[largest]);
	maxheapify(arr,n,largest);
}
}
void buildmaxheap(int arr[],int n){
	for(int i=n/2-1;i>=0;i--){
		maxheapify(arr,n,i);
	}
}
int deletemax(int arr[],int &n){
	if(n<=0){
		cout<<"Heap is empty:";
		return -1;
	}
	int root=arr[0];
	arr[0]=arr[n-1];
	n--;
	maxheapify(arr,n,0);
	return root;
}
int main(){
	int n;
	cout<<"Enter no of element:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter arr["<<i<<"]:";
		cin>>arr[i];
	}
	cout<<"\noriginal array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	buildmaxheap(arr,n);
}
//output
//Enter no of element:5
//Enter arr[0]:8
//Enter arr[1]:1
//Enter arr[2]:5
//Enter arr[3]:6
//Enter arr[4]:2
//
//original array:8 1 5 6 2
