#include<iostream>
#include<iomanip>
using namespace std;

//partition function for quick sort
int partition(float arr[],int low,int high){
	float pivot=arr[high];
	int i=low-1;
	
	for(int j=low;j<high;j++){
		if(arr[j]>=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
//quick sort algorithm
void quicksort(float arr[],int low,int high){
	if(low<high){
		int pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
int main(){
	int N;
	//cout<<"Enter the number:";
	cin>>N;

	float GPAs[N];
	
	
	for(int i=0;i<N;i++){
		cin>>GPAs[i];
	}
	quicksort(GPAs,0,N-1);
	cout<<fixed<<setprecision(1);//set precision
	
	for(int i=0;i<N;i++){
		cout<<GPAs[i]<<" ";
	}
	cout<<endl;
	return 0;
}
//output
//6
//1.2 4.9 3.5 2.7 5.0 3.1
//5.0 4.9 3.5 3.1 2.7 1.2
