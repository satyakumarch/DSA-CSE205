
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int& ref=x;
	//ref is a reference to x
	ref=20;
	//value of x is now cahnged 
	cout<<"x:"<< x <<endl;
	  x=30;
	  //value of x is now cahnged 
	 cout<<"ref:"<<ref<<endl;
	 return 0;
	 	 
}




