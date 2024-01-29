//#include <iostream>
//
//using namespace std;
//
//bool isSorted(int arr[], int n) {
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < arr[i - 1])
//            return false;
//    }
//
//    return true;
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
//    if (isSorted(arr, n)) {
//        cout << "The array is sorted." << endl;
//    } else {
//        cout << "The array is not sorted." << endl;
//    }
//
//    return 0;
//}
//Enter the number of elements: 5
//Enter 5 elements: 5 3 2 4 1
//The array is not sorted.

//#include<iostream>
//using namespace std;
//bool issorted(int arr[],int n){
//	for(int i=0;i<n;i++){
//		if(arr[i]<arr[i-1])
//		return false;
//	}
//	return true;
//}
//int main(){
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter"<<n<<" Element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	 if (issorted(arr,n)){
//	 	cout<<"The element is sorted:";
//		
//	}else{
//		cout<<"The element is not sorted.";
//	}
//}
//


#include<iostream>
using namespace std;
 bool issorted(int arr[],int n){
 	for(int i=0;i<n;i++){
 		if(arr[i]<arr[i-1])
 			return false;
		 }
		 return true;
	 }
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter "<<n<<"element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if (issorted(arr,n)){
		cout<<"The element are sorted:";
	}else{
		cout<<"The element are not sorted:";
	}
}










