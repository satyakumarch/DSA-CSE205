#include<iostream>
using namespace std;
int findlargestelement(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i])
		max=arr[i];
	}
	return max;
}
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter "<<n<< " Element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"The largest element is:"<<findlargestelement(arr,n);
}
output
Enter the number:5
Enter 5 Element:22 36 42 15 77
The largest element is:77
