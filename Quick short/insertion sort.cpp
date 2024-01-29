#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

	int n;
	cout<<"Enter the number of element:";
	cin>>n;
	int arr[n];
	cout<<"Enter"<<n<<" element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	

cout<<endl;
//insertion sort
for(int i=0;i<n;i++){
	int j=i;
	while(j>=1 && arr[j]<arr[j-1]){
		swap(arr[j],arr[j-1]);
		j--;
	}
}

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}


