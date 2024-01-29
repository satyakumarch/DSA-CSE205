//#include<iostream>
//using namespace std;
//int stk[40];
//int top=-1;
//void push(int n){
//	skt[++top]=n;
//	
//}
//void pop(){
//	if(top==-1){
//		cout<<"stacjk is empty:";
//		return 0;
//	}
//	--top;
//}
//int evaluatepostfix(string exp)
//{
//	int  i=0;
//	while(exp[i]!=')'){
//		if(isdigit(exp[i])){
//			push(exp[i]-'0');
//			i++;
//}
//	}
//	else{
//		int val1=stk[top];
//		pop();
//		int val2=stk[top];
//		pop();
//		switch  (exp[i]){
//			case '+':
//				push (val2+val1);
//				i++;
//				break;
//			case '-':
//				push (val2-val1);
//				i++;
//				break;
//			case '*':
//				push (val2*val1);
//				i++;
//				break;
//			case '/':
//				push (val2/val1);
//				i++;
//				break;
//				
//			case '^':
//				push(pow (val2,val1));
//				i++;
//				break;
//			
//			
//				
//		}
//		
//	}
//}
//return stk[top];
//
//}
//int main(){
//	string exp;
//	cout<<"Enter postfix expression and append it with ')':"<<endl;
//	getline(cin,exp);
//	cout<<"postfix evaluation is:"<<evaluationpostfix(exp);
//	return 0;
//}


#include <iostream>
#include <cmath>
using namespace std;

int stk[40];
int top = -1;

void push(int n){
stk[++top] = n;
}

void pop(){
if(top == -1){
cout<<"stack is empty";
return;
}
--top;
}

int evaluatePostfix(string exp)
{
int i=0;
while(exp[i] != ')'){
if (isdigit(exp[i])){
push(exp[i] - '0');
i++;
}
else {
int val1 = stk[top];
pop();
int val2 = stk[top];
pop();
switch (exp[i]) {
case '+':
push(val2 + val1);
i++;
break;
case '-':
push(val2 - val1);
i++;
break;
case '*':
push(val2 * val1);
i++;
break;
case '/':
push(val2 / val1);
i++;
break;
case '^':
push(pow(val2,val1));
i++;
break;
}
}
}
return stk[top];
}

int main()
{
string exp;
cout<<"Enter postfix expression and append it with ')': "<<endl;
getline(cin,exp);
cout << "postfix evaluation is: " << evaluatePostfix(exp);
return 0;
}

//23-4+567*+* ... 141
//34*25*+ ... 22

Enter postfix expression and append it with ')':
23-4+567*+*)
postfix evaluation is: 141

