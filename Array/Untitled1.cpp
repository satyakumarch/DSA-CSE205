#include<iostream>
using namespace std;
class myclass{
	public:
		int x;
		myclass(){
			cout<<"default constructor called:"<<endl;
			
		}
		myclass(int value){
			x=value;
			cout<<"paratmetrized constructor called:"<<endl;
			
		}
};

int main()
{
	myclass obj1;
	myclass obj2(5);
	cout<<obj1.x<<" "<<obj2.x<<endl;
	return 0;
}
