#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	int a[n];
	cout<<"Enter the number of array :";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//bubble sort
	for(int i=0;i<n-1;i++){
		
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
output
Enter the number:5
Enter the number of array :8 5 7 6 2

2 5 6 7 8
