//
//#include<bits/stdc++.h>
//
//using namespace std;
//int removeDuplicates(int arr[], int n)
//{
//  int i = 0;
//  for (int j = 1; j < n; j++) {
//    if (arr[i] != arr[j]) {
//      i++;
//      arr[i] = arr[j];
//    }
//  }
//  return i + 1;
//}
//int main() {
//  int arr[] = {1,1,2,2,2,3,3};
//  int n = sizeof(arr)/sizeof(arr[0]);
//  int k = removeDuplicates(arr, n);
//  cout << "The array after removing duplicate elements is " << endl;
//  for (int i = 0; i < k; i++) {
//    cout << arr[i] << " ";
//  }
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//
//int removeDuplicates(int arr[], int n) {
//    int i = 0;
//    for (int j = 1; j < n; j++) {
//        if (arr[i] != arr[j]) {
//            i++;
//            arr[i] = arr[j];
//        }
//    }
//    return i + 1;
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int *arr = new int[n];
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int k = removeDuplicates(arr, n);
//
//    cout << "The array after removing duplicate elements is:" << endl;
//    for (int i = 0; i < k; i++) {
//        cout << arr[i] << " ";
//    }
//
//    delete[] arr;
//
//    return 0;
//}
//Enter the number of elements: 6
//Enter 6 elements: 1 1 2 2 4 4
//The array after removing duplicate elements is:
//1 2 4


#include<iostream>
using namespace std;

int removeduplicateelement(int arr[],int n){
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
		}
		
	}
	return i+1;
}
int main(){
	int n;
	cout<<"Enter the number of element:";
	cin>>n;
	
	int *arr =new int[n];
	cout<<"Enter"<<n<<"element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k=removeduplicateelement(arr,n);
	
	cout<<"remove duplicate element:";
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	delete[] arr;
	
	return 0;
}


