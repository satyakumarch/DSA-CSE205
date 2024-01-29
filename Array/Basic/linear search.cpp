//#include <iostream>
//
//using namespace std;
//
//int search(int arr[], int n, int num) {
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == num)
//            return i;
//    }
//    return -1;
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int num;
//    cout << "Enter the number to search for:  ";
//    cin >> num;
//
//    int val = search(arr, n, num);
//    if (val != -1) {
//        cout << "The number " << num << " was found at index " << val << endl;
//    } else {
//        cout << "The number " << num << " was not found in the array." << endl;
//    }
//
//    return 0;
//}
//output
//Enter the number of elements: 8
//Enter 8 elements: 1 2 3 4 5 6 7  8
//Enter the number to search for: 3
//The number 3 was found at index 2


#include<iostream>
using namespace std;
int search(int arr[],int n,int num){
	for(int i=0;i<n;i++){
		if(arr[i]==num)
		return i;
		
		
	}
	return -1;
	
	}
	int main(){
		int n;
		cout<<"Enter the number :";
		cin>>n;
		
	int arr[n];
	cout<<"Enter "<< n<< " Element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		}
		
		int num;
		cout<<"Enter the number you want to search:";
		cin>>num;
		
		
		int val=search(arr,n,num);
		if(val!=-1){
			cout<<"The number"<<num<<"found at index:"<<val<<endl;
		}else{
			cout<<"The number"<<num<<" not found :"<<endl;
		}
	}
