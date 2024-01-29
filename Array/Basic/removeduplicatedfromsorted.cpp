#include <iostream>
#include <algorithm>

using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // Sort the array before removing duplicates

    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
}
//Enter the number of elements: 7
//Enter 7 elements: 1 2 3 1 2 4 3
//The array after removing duplicate elements is: 1 2 3 4

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int i;
//int removeduplicate(int arr[],int n){
//	for(int j=1;j<n;j++){
//		if(arr[i]!=arr[j]){
//			i++;
//			arr[i]=arr[j];
//		}
//	}
//	return i+1;
//}
//int main(){
//	cout<<"Enter the number:";
//	int n;
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<< n<<"element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	sort(arr,arr+n);
//	
//	int k=removeduplicate(arr,n);
//	for(int i=0;i<k;i++){
//		cout<<arr[i]<<" ";
//	}
//}





















//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int removeduplicate(int arr[],int n){
//	int i;
//	for(int j=1;j>n;j++){
//		if(arr[i]!=arr[j]){
//			i++;
//			arr[i]=arr[j];	
//		}
//	
//	}
//	return arr[i]+1;
//}
//int main(){
//	
//
//int n;
//cout<<"Enter the number:";
//cin>>n;
//
//int arr[n];
//cout<<"Enter "<<n<<" Element";
//for(int i=0;i<n;i++){
//cin>>arr[i];	
//}
//sort(arr,arr+n);
//
//int k=removeduplicate(arr,n);
//for(int i=0;i<k;i++){
//	cout<<arr[k]<<" ";
//}
//}










