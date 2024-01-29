#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int towerofhanoimoves(int n){
	if(n==0){
		return 0;
		
	}
	return 2* towerofhanoimoves(n-1)+1;
}
int main(){
	int n;
	cout<<"Enter the number of disk:";
	cin>>n;
	
	int moves=towerofhanoimoves(n);
	cout<<"The minimum no of moves required to solve "<<n<<" disk:"<<moves;
	return 0;
}
//Enter the number of disk:2
//The minimum no of moves required to solve 2 disk:3
//Enter the number of disk:4
//The minimum no of moves required to solve 4 disk:15



//#include<iostream>
//using namespace std;
//const int MAX_N=20;
//int maximumloot(int hval[],int n){
//	if(n<0){
//		return 0;
//	}
//	if(n==0){
//		return hval[0];
//	}
//	int pick=hval[n]+maximumloot(hval,n-2);
//	int notpick=maximumloot(hval,n-1);
//	return max(pick,notpick);
//	
//}
//int main(){
//	int n;
//	cout<<"Enter the number of integer:";
//	cin>>n;
//	cout<<"Enter "<< n<<" interger:  ";
//	int hval[MAX_N];
//	for(int i=0;i<n;i++){
//		cin>>hval[i];
//	}
//	cout<<maximumloot(hval,n-1);
//	return 0;
//}
//Enter the number of integer:6
//Enter 6 interger:  5 1 2 6 3 4
//15
//Enter the number of integer:5
//Enter 5 interger:  2 7 9 3 1
//12



//#include<iostream>
//using namespace std;
//
//void swap(int* a,int* b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int partition(int arr[],int low,int high){
//	int pivot=arr[high];
//	int i=(low-1);
//	
//	for(int j=low;j<=high-1;j++)
//	{
//		if(arr[j]<pivot)
//		{
//		i++;
//		swap(&arr[i],&arr[j]);	
//		}
//		
//	}
//	swap(&arr[i+1],&arr[high]);
//	return (i+1);
//}
//void quicksort(int arr[],int low,int high){
//	if(low<high)
//	{
//		int pi=partition( arr,low,high);
//		quicksort(arr,low,pi-1);
//		quicksort(arr,pi+1,high);
//	}
//	
//}
//void printarray(int arr[],int size){
//	for(int i=0;i<size;i++)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//}
//int main(){
//	int n;
//	cout<<"Enter the number of integer:";
//	cin>>n;
//	int arr[n];
//	cout<<"Enter "<<n<<" integer:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	quicksort(arr,0,n-1);
//	printarray(arr,n);
//	return 0;
//}
//output
//Enter the number of integer:4
//Enter 4 integer:15 25 35 10
//10 15 25 35

//Enter the number of integer:3
//Enter 3 integer:120 60 80
//60 80 120











