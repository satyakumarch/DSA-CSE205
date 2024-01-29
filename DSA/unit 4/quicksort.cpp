#include<iostream>
#include<string>
using namespace std;

int partition(string arr[],int low,int high){
	string pivot=arr[high];
	int i=low-1;
	
	for(int j=low; j<high;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quicksort(string arr[],int low,int high){
	if(low<high){
		
		int pivot=partition(arr,low,high);
		
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
void recursionquicksort(string arr[],int n){
	quicksort(arr,0,n-1);
}
int main(){
	int N;
	cin>>N;
	string years[N];
	for(int i=0;i<N;i++){
		cin>>years[i];
	}
    quicksort(years,0,N-1);
	for(int i=0;i<N;i++){
		cout<<years[i]<<" ";
	}
	return 0;
}
output
5
2014 2009 2000 1997 1865
1865 1997 2000 2009 2014
