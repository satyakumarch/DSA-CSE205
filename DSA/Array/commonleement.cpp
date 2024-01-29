#include<bits/stdc++.h>
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
	int size1,size2;
	cin>>size1;
	
	vector<int> array1(size1);
	for(int i=0;i<size1;i++){
		cin>>array1[i];
	}
	cin>>size2;
	unordered_set<int> elementsSet;
	vector<int> commonelements;
	
	for(int i=0;i<size2;++i){
		int num;
		cin>>num;
		elementset.insert(num);
	}
	for(int element:array1){
		if(elementset.find(element)!=elementset.end()){
			commonelement.push_back(element);
		}
	}
	if(commonelement.empty()){
		cout<<"Common element:None"<<endl;
	}else{
		cout<<"Common elements";
	}
	for(int element:commonelement)
	{
		cout<< " "<<element;
	}
	cout<<endl;
}

