//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//string twoSum(int n, vector<int> &arr, int target) {
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] + arr[j] == target) 
//			return "YES";
//        }
//    }
//    return "NO";
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
//    int target;
//    cout << "Enter the target sum: ";
//    cin >> target;
//
//    string ans = twoSum(n, arr, target);
//    cout << "This is the answer: " << ans << endl;
//
//    return  0;
//}
//output
//Enter the number of elements: 5
//Enter 5 elements: 1 2 3 4 5
//Enter the target sum: 6
//This is the answer: YES

//#include<iostream>
//#include<vector>
//using namespace std;
//string twosum(int n, vector<int> &arr,int target){
//	for(int i=0;i<n;i++){
//	
//	for(int j=i+1;i<n;j++){
//		if(arr[i]+arr[j]==target)
//			return "yes";	
//	}
//}
//}
//int main(){
//
//	int n;
//	cout<<"Enter the number :";
//	cin>>n;
//	
//	vector<int> arr(n);
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int target;
//	cout<<"Enter youre target:";
//	cin>>target;
//	
//	string ans=twosum(n,arr,target);
//	cout<<"The sum of the target element is:"<<ans<<endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//string twosum(int n, vector<int> &arr,int target){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]+arr[j]==target)
//			return "yes";
//		}
//	}
//}
//int main(){
//	int n;
//	cout<<"Enter the value:";
//	cin>>n;
//	
//	vector<int> arr(n);
//	cout<<"Enter "<<n<<" Element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int target;
//	cout<<"Enter your target";
//	cin>>target;
//	
//	string ans=twosum(n,arr,target);
//	cout<<"The target of the two sum of the two element:"<<ans;
//	return 0;
//}



#include<iostream>
#include<vector>
using namespace std;

string twosum(int n,vector<int> &arr,int target){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				return "YES";
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	vector<int> arr(n);
	cout<<"Enter "<<n<<"element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cout<<"Ente your target:";
	cin>>target;
	
	string ans=twosum(n,arr,target);
	cout<<"The sum of the two element is :"<<ans;
	
}

