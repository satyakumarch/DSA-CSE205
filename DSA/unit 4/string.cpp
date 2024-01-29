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
	cout<<"Enter the number of user:";
	cin>>n;
	string names[n];
	for(int i=0;i<n;i++){
		cin>>names[i];
	}
	cout<<"The sequential name in order of alphabet:"<<endl;
	quicksort(names,0,n-1);
	for(int i=0;i<n;i++){
		
		cout<<names[i]<<endl;
	}
	return 0;
}
//Enter the number of user:5
//Alica
//Denver
//Aadhil
//Charlie
//Zen
//Aadhil
//Alica
//Charlie
//Denver
//Zen

