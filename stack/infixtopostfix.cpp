#include <iostream>
#include <cctype>
using namespace std;

char post_fix[40];
int j = 0;
char stk[40];
int top = -1;

int main()
{
char ch;
void pop();
void push(char);
char infix[40];
int i=0;

cout<<"\nEnter infix expression and terminate it with ')':\n";
cin.getline(infix,40);
push('(');
while(top>=0){
ch = infix[i];

switch(ch){
case '(':
push(ch);
i++;
break;

case ')':
while(stk[top] != '('){
pop();
}
pop();
i++;
break;

case '+':
case '-':
while(stk[top]=='-' || stk[top]=='+' || stk[top]=='*' || stk[top]=='/' || stk[top]=='^'){
pop();
}
push(ch);
i++;
break;

case '*':
case '/':
while(stk[top]=='*' || stk[top]=='/' || stk[top]=='^'){
pop();
}
push(ch);
i++;
break;

case '^':
while(stk[top]=='^'){
pop();
}
push(ch);
i++;
break;

default:
if(isalpha(ch)|| isdigit(ch)){
post_fix[j] = ch;
j++;
i++;
}
}
}
cout << "\nPostfix expression is: " << post_fix;
return 0;
}

void push(char ch){
top++;
stk[top] = ch;
}

void pop(){
if(top == -1){
cout<<"\nStack is empty";
return;
}
else{
if(stk[top] != '('){
post_fix[j] = stk[top];
j++;
}
top--;
}
}
//output
//Enter infix expression and terminate it with ')':
//1+2/3+4*(6-5)^7)
//
//Postfix expression is: 123/+465-7^*+
