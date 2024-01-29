#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isValidPostfixExpression(const string& expression) {
    stack<int> operands;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        if (isdigit(ch)) {
            operands.push(0); // Placeholder for an operand
        } else if (isspace(ch)) {
            continue; // Skip spaces
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (operands.size() < 2) {
                return false; // Not enough operands for the operator
            }
            operands.pop(); // Pop the second operand
            operands.pop(); // Pop the first operand
            operands.push(0); // Push a placeholder for the result
        } else {
            return false; // Invalid character
        }
    }

    return operands.size() == 1; // There should be exactly one operand left
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    getline(cin, postfixExpression);

    if (isValidPostfixExpression(postfixExpression)) {
        cout << "Valid postfix expression" << endl;
    } else {
        cout << "Invalid postfix expression" << endl;
    }

    return 0;
}

