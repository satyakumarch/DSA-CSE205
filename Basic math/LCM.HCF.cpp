
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a,b;
	cout<<"Enter the number a:";
	cin>>a;
	cout<<"Enter the number b:";
	cin>>b;
	
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
}

