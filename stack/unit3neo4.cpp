#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

double evaluatePostfix(const string& expression) {
    stack<double> operands;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        if (isdigit(ch)) {
            operands.push(ch - '0'); // Convert char digit to int
        } else if (isOperator(ch)) {
            double operand2 = operands.top();
            operands.pop();
            double operand1 = operands.top();
            operands.pop();

            if (ch == '+') operands.push(operand1 + operand2);
            else if (ch == '-') operands.push(operand1 - operand2);
            else if (ch == '*') operands.push(operand1 * operand2);
            else if (ch == '/') operands.push(operand1 / operand2);
        }
    }

    return operands.top();
}

int main() {
    string postfix;
    cin >> postfix;

    double result = evaluatePostfix(postfix);
    cout << result << endl;

    return 0;
}
//
//
//52+
//7
//65*
//30
