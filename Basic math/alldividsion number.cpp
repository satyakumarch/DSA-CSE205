
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

void printDivisorsOptimal(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	printDivisorsOptimal(n);
        return 0;
}

outout
Enter the number:546
The Divisors of 546 are:
1 546 2 273 3 182 6 91 7 78 13 42 14 39 21 26
