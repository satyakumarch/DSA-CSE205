#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToRPN(const string& infix) {
    stack<char> operators;
    string rpn;
    
    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if (isdigit(ch) || ch == '.') {
            rpn += ch;
        } else if (ch == '(') {
            operators.push(ch);
        } else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                rpn += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop();
            }
        } else if (isOperator(ch)) {
            while (!operators.empty() && precedence(ch) <= precedence(operators.top())) {
                rpn += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }

    while (!operators.empty()) {
        rpn += operators.top();
        operators.pop();
    }

    return rpn;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string rpn = infixToRPN(infix);
    cout << "The RPN is: " << rpn << endl;

    return 0;
}
Enter an infix expression: (1+2-3*4)/(5+6-7*8)/(9+3)
The RPN is: 12+34*-56+78*-/93+/
