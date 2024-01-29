#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter "<<n<<" element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//cout<<arr[i]<<" ";
	}

cout<<endl;
//selection sort
for(int i=0;i<n-1;i++){
	int min=INT_MAX;
	int mindx=-1;
	for(int j=i;j<n;j++){
		if(arr[j]<min){
			min=arr[j];
			mindx=j;
		}
	}
	swap(arr[i],arr[mindx]);
}
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

}

Enter the value of n:5
Enter 5 element:45 36 25 -45 12

-45 12 25 36 45
