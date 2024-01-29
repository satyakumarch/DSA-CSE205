//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	vector<int> arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		
//	}
//	vector<int>updatearr;
//	for(int i=0;i<n;i++){
//		if(arr[i]!=0){
//			updatearr.push_back(arr[i]);
//		}
//	}
//	cout<<"removing out-of-stick product"<<endl;
//	cout<<"update array of product id"<<endl;
//	for(int i=0;i<updatearr.size();i++){
//		cout<<updatearr[i]<<" ";
//	}
//	return 0;
//}
//output
//6
//1 2 3 4 0 5
//removing out-of-stick product
//update array of product id
//1 2 3 4 5
//
//8
//1 0 2 0 3 0 4 0
//removing out-of-stick product
//update array of product id
//1 2 3 4
//---------------------------
//
//


//#include<iostream>
//using namespace std;
//int main(){
//	
//	int arr[100];
//	char arr[100];
//	int i,n;
//	for(int i=0;i<n;i++)
//	
//	cin>>arr[i];	
//	
//
//	
//	for(int i=0;i<10;i++)
//	cout<<arr[i]<<" ";
//	
//	for(i=(n-1);i>=0;i--)
//	cout<<arr[i]<<" ";
//	cout<<endl;
//}


//
//#include<iostream>
//#include<unordered_set>
//#include<vector>
//using namespace std;
//
//int main(){
//	int size1,size2;
//	cin>>size1;
//	
//	vector<int> array1(size1);
//	for(int i=0;i<size1;i++){
//		cin>>array1[i];
//	}
//	cin>>size2;
//	unordered_set<int> elementsSet;
//	vector<int> commonElement;
//	
//	for(int i=0;i<size2;++i){
//		int num;
//		cin>>num;
//		elementsSet.insert(num);
//		
//	}
//	for(int element: array1){
//		if(elementsSet.find(element)!=elementsSet.end()){
//			commonElement.push_back(element);
//		}
//	}
//	if(commonElement.empty()){
//		cout<<"commonelement:none"<<endl;
//		
//	}else{
//		cout<<"common element"<<endl;
//		for(int element:commonElements){
//			
//		}
//		cout<<" "<<element;
//	}
//	cout<<endl;
//}



#include<iostream>
#include<vector>
using namespace std;

voi  d rightrotate(vector<int>&arr,int k){
	int n=arr.size();
	k%=n;
	
	vector<int> temp(n);
	for(int i=0;i<n;i++){
		int newpos=(i+k)%n;
		temp[newpos]=arr[i];
	}
	arr=temp;
}
int main(){
	int n,k;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	cout<<"original array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	rightrotate(arr,k);
	cout<<endl;
	cout<<"updated array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
output 6
1 2 3 4 5 6
2
original array:1 2 3 4 5 6
updated array:5 6 1 2 3 4
