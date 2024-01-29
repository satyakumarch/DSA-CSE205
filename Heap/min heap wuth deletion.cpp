//min heap with deletion
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void meanheapify(int arr[],int n,int i){
	int smallest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]<arr[smallest]){
		smallest=left;
	}
	if(right<n && arr[right]<arr[smallest]){
		smallest=right; 
	}
	if(smallest!=i){
		swap(arr[i],arr[smallest]);
		minheapify(arr,n,smallest);
	}
}
void buildminheap(int arr[],int n){
	for(int i=n/2-1;i>=0;i--){
		minheapify(arr,n,i);
	}
}
int deletemin(int arr[],int &n){
	if(n<=0){
		cout<<"Heap is empty:";
		return -1;
	}
	int root=arr[0];
	arr[0]=arr[n-1];
	n--;
	minheapify(arrr,n,0);
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
	cout<<"\n original array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	buildminheap(arr,n);
	cout<<"\nmin heap";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
