//second largest and second smallest

//#include<iostream>
//#include<climits>
//using namespace std;
//
//int secondsmallest(int arr[],int n){
//	if(n<2)
//	return -1;
//	
//	int second_small=INT_MAX;
//	int small=INT_MAX;
//	
//	for(int i=0;i<n;i++){
//		if(arr[i]<small){
//			second_small=small;
//			small=arr[i];
//		}
//	 else if (arr[i]<second_small && arr[i]!=small){
//	 	second_small=arr[i];
//	 }
//	 
//	}
//return second_small;	
//}
//
//int secondlargest(int arr[],int n){
//	if(n<2)
//	return -1;
//	
//	int second_large= INT_MIN;
//	int large=INT_MIN;
//	
//	for(int i=0;i<n;i++){
//		if(arr[i]>large){
//			second_large=large;
//			large=arr[i];
//		}
//		else if (arr[i]>second_large && arr[i]!=large){
//			second_large=arr[i];
//			
//		}
//	}
//	return second_large;	
//}
//int main(){
//	int n;
//	cout<<"Enter the element:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	int sS=secondsmallest(arr,n);
//	int sL=secondlargest(arr,n);
//	
//	cout<<"Secondsmallest element:"<<sS<<endl;
//	cout<<"Secondlargest element:"<<sL<<endl;
//}


//sorted element

//#include<iostream>
//using namespace std;
//
// bool issorted(int arr[],int n){
// 	for(int i=1;i<n;i++){
// 		if(arr[i]<arr[i-1])
// 		return false;
//	 }
//	 return true;
// }
//int main(){
//	int n;
//	cout<<"Enter the numberr of the element:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<< " element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	if (issorted(arr,n)){
//		cout<<"the array is sortd:";
//	}else{
//		cout<<"the array is unsorted:";
//	}
//	return 0;
//}



//remove duplicate element
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int removeduplicate(int arr[],int n){
//	
//	int i=0;
//    for(int j=1;j<n;j++){
//	if(arr[i]!=arr[j]){
//		i++;
//		arr[i]=arr[j];
//	}
//
//}
//	return i+1;	
//}
//
//int main(){
//	int n;
//	cout<<"Enter the element:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	  sort(arr,arr+n);
//	int k=removeduplicate(arr,n);
//	cout<<"The array element after remove the duplicate element:";
//	for(int i=0;i<k;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//


//linear search
//#include<iostream>
//using namespace std;
//
//int search(int arr[],int n,int num){
//	for(int i=0;i<n;i++){
//		if(arr[i] == num)
//		return i;
//	}
//	return -1;
//}
//int main(){
//	int n;
//	cout<<"Enter the number of element:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		
//	}
//	
//	int num;
//	cout<<"Enter the number you want to search:";
//	cin>>num;
//	
//	int val = search(arr,n,num);
//	if(val != -1){
//		cout<<"The number "<<num<<" found at index"<<val<<endl;
//		
//	}else{
//		cout<<"The number "<<num<<" not found at any index:"<<endl;
//	}
//	return 0;
//}


//findlargstelement
//#include<iostream>
//using namespace std;
//
//int findlargest(int arr[],int n){
//	int max=arr[0];
//	for(int i=1;i<n;i++){
//		if(max<arr[i]){
//		max=arr[i];
//	}
//	}
//	return max;
//}
//int main(){
//	int n;
//	cout<<"Enter the number of the element:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int max=findlargest(arr,n);
//	cout<<"The largest elemet is "<<max<<endl;

	
	
//}


#include<iostream>
using namespace std;

int findsmallest(int arr[],int n){
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i]){
		min=arr[i];
	}
	}
	return min;
}
int main(){
	int n;
	cout<<"Enter the number of the element:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter "<<n<<" element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=findsmallest(arr,n);
	cout<<"The largest elemet is "<<min<<endl;
}











