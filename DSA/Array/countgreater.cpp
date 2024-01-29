//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int countegreater(int x,int a[],int n){  //creating a function
//	 int count=0;
//	
//	for(int i=0;i<n;i++){
//		if (a[i]>x)
//		count++;
//	}
//	return count;
//}
//int main(){   //main function
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	
//	int a[n];
//    for(int i=0;i<n;i++){
//	cin>>a[i];
//	}
//	int x;
//	cout<<"Enter the value of x:"<<endl;
//	cin>>x;
//	cout<<"Number of element greater then x is:"<<countegreater(x,a,n);
//}
//output
//Enter the number:5
//1 2 3 5 6
//Enter the value of x:
//1
//Number of element greater then x is:4


#include<iostream>
using namespace std;
int countgreater(int x,int a[],int n){
	 int count=0;
	 
	 for(int i=0;i<n;i++){
	 	if(a[i]>x)
	 		count++;
		 }
		 return count;
	 }

int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	int a[n];
	cout<<"Enter  element";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
//	cout<<"Enter the value of x";
	cin>>x;
	
	cout<<"greater number is:"<<countgreater(x,a,n);
}
