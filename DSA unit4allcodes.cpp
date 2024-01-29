//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int towerofhanoimoves(int n){
//	if(n==0){
//		return 0;
//		
//	}
//	return 2* towerofhanoimoves(n-1)+1;
//}
//int main(){
//	int n;
//	cout<<"Enter the number of disk:";
//	cin>>n;
//	
//	int moves=towerofhanoimoves(n);
//	cout<<"The minimum no of moves required to solve "<<n<<" disk:"<<moves;
//	return 0;
//}
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





//#include<iostream>
//#include<iomanip>
//using namespace std;
//
////partition function for quick sort
//int partition(float arr[],int low,int high){
//	float pivot=arr[high];
//	int i=low-1;
//	
//	for(int j=low;j<high;j++){
//		if(arr[j]>=pivot){
//			i++;
//			swap(arr[i],arr[j]);
//		}
//	}
//	swap(arr[i+1],arr[high]);
//	return i+1;
//}
////quick sort algorithm
//void quicksort(float arr[],int low,int high){
//	if(low<high){
//		int pivot=partition(arr,low,high);
//		quicksort(arr,low,pivot-1);
//		quicksort(arr,pivot+1,high);
//	}
//}
//int main(){
//	int N;
//	//cout<<"Enter the number:";
//	cin>>N;
//
//	float GPAs[N];
//	
//	
//	for(int i=0;i<N;i++){
//		cin>>GPAs[i];
//	}
//	quicksort(GPAs,0,N-1);
//	cout<<fixed<<setprecision(1);//set precision
//	
//	for(int i=0;i<N;i++){
//		cout<<GPAs[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}
//output
//No output
//3
//3.6 4.4 2.9
//4.4 3.6 2.9



//#include<iostream>
//#include<string>
//using namespace std;
//
//int partition(string arr[],int low,int high){
//	string pivot=arr[high];
//	int i=low-1;
//	
//	for(int j=low; j<high;j++){
//		if(arr[j]<pivot){
//			i++;
//			swap(arr[i],arr[j]);
//		}
//	}
//	swap(arr[i+1],arr[high]);
//	return i+1;
//}
//void quicksort(string arr[],int low,int high){
//	if(low<high){
//		
//		int pivot=partition(arr,low,high);
//		
//		quicksort(arr,low,pivot-1);
//		quicksort(arr,pivot+1,high);
//	}
//}
//void recursionquicksort(string arr[],int n){
//	quicksort(arr,0,n-1);
//}
//int main(){
//	int N;
//	cin>>N;
//	string years[N];
//	for(int i=0;i<N;i++){
//		cin>>years[i];
//	}
//    quicksort(years,0,N-1);
//	for(int i=0;i<N;i++){
//		cout<<years[i]<<" ";
//	}
//	return 0;
//}
//output
//5
//2014 2009 2000 1997 1865 
//1865 1997 2000 2009 2014


#include<iostream>
#include<string>
using namespace std;

int partition(string names[],int low,int high);
void quicksort(string names[],int low,int high){
	if(low<high){
		int pi=partition(names,low,high);
		quicksort(names,low,pi-1);
		quicksort(names,pi+1,high);
	}
}
int partition(string names[],int low,int high){
	string pivot=names[high];
	int i=low-1;
	
	for(int j=low;j<high;j++){
		if(names[j].compare(pivot)<0){
			i++;
			swap(names[i],names[j]);
		}
	}
	swap(names[i+1],names[high]);
	return i+1;
}
int main(){
	int n;
	cin>>n;
	string names[n];
	for(int i=0;i<n;i++){
		cin>>names[i];
	}
	quicksort(names,0,n-1);
	for(int i=0;i<n;i++){
		cout<<names[i]<<endl;
	}
	return 0;
}
