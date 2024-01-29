//#include<bits/stdc++.h>
//
//using namespace std;
//
//bool isPrime(int N) {
//  for (int i = 2; i < sqrt(N); i++) {
//    if (N % i == 0) {
//      return false;
//    }
//  }
//  return true;
//}
//int main() {
//
//  int n;
//  cout<<"Enter the number:";
//  cin>>n;
//
//  bool ans = isPrime(n);
//  if (n != 1 && ans == true) {
//    cout << "Prime Number";
//  } else {
//    cout << "Non Prime Number";
//  }
//  return 0;
//}
//
//output
//Enter the number:5
//Prime Number

#include<iostream>
using namespace std;
//
//class myclass{
//	public:
//		int value;
//		void printvalue(){
//			cout<<this->value<<endl;
//		}
//};
//int main(){
//	myclass obj;
//	obj.value=10;
//	obj.printvalue();
//	return 0;
//}

//int* getpointer(){
//	int num=10;
//	return &num;
//	
//}
//int main(){
//	int* ptr=getpointer();
//	cout<<*ptr;
//	return 0;
//}
//10

#include <iostream>

int* performArithmetic(int num1, int num2) {
    int result = num1 + num2;
    return &result;
}

int main() {
    int num1, num2;
    
    //std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int* arithmeticResult = performArithmetic(num1, num2);
    
    // Print the result
    std::cout << "Result: " << *arithmeticResult << std::endl;
    
    // Attempt to access the dangling pointer (causing undefined behavior)
    std::cout << "Error: Dangling pointer detected!" << std::endl;
    
    return 0;
}



