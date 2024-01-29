//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int findsmallestelement(int arr[],int n){
//	int min=arr[0];
//	for(int i=0;i<n;i++){
//		if(min>arr[i])
//		min=arr[i];
//	}
//	return min;
//}
//int main(){
//	int n;
//	cout<<"Enter the  number:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		
//	}
//	cout<<"The smallest element is:"<<findsmallestelement(arr,n);
//
//}
//output
//Enter the  number:5
//Enter 5 element:12 36 45 28 36
//The smallest element is:12

#include<iostream>
using namespace std;
 int findsmallestnumber(int arr[],int n){
 	int min=arr[0];
 	for(int i=0;i<n;i++){
 		if(min>arr[i])
 		min=arr[i];
	 }
	 return min;
 }
 int main(){
 	int n;
 	cout<<"Enter the number:";
 	cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<"element:";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<"The smallest number is:"<<findsmallestnumber(arr,n);
 }

