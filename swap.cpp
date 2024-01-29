#include<iostream>
using namespace std;
//function havinng parameter as reference
void swap(int& first ,int& second){
	int temp=first;
	first=second;
	second=temp;
}
int main(){
	int a=2,b=3;
	//function called
	swap(a,b);
	//changes can be seen
	//printing both variable
	cout<<a<<" "<<b;
	return 0;
}
