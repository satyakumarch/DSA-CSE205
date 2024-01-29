// #include <iostream>
//#include <vector>
//
//using namespace std;
//
//int getSingleElement(vector<int> &arr) {
//    // Size of the array:
//    int n = arr.size();
//
//    // XOR all the elements:
//    int xor1 = 0;
//    for (int i = 0; i < n; i++) {
//        xor1 = xor1 ^ arr[i];
//    }
//    return xor1;
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    vector<int> arr(n);
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int ans = getSingleElement(arr);
//    cout << "The single element is: " << ans << endl;
//
//    return 0;
//}
////Enter the number of elements: 5
////Enter 5 elements: 1 2 3 1 2
////The single element is: 3


#include<iostream>
#include<vector>
using namespace std;

int getsinglelement(vector<int> &arr){
int n=arr.size();
int xor1=0;
for(int i=0;i<n;i++){
	int xor1=xor1^arr[i];
	
}
return xor1;
};
int main(){
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	
	vector<int> arr(n);
	cout<<"Enter"<<n<<"element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=getsinglelement(arr);
	cout<<"The single element is:"<<ans;
}
