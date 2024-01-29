#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;++i){
		cin>>arr[i];
		
	}
	vector<int>updatedarr;
	for(int i=0;i<n;++i){
		if(arr[i]!=0){
			updatedarr.push_back(arr[i]);
		}
	}
	cout<<"Removing out of stock product:\n";
	cout<<"updated array of product ids";
	for(int i=0;i<updatedarr.size();++i){
		cout<<updatedarr[i]<<" ";
	}
	return 0;
}

6
1 2 3 4 0 5
Removing out of stock product:
updated array of product ids1 2 3 4 5
