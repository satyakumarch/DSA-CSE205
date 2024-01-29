#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; // Lower precedence for other characters or '('
}

string infixToPostfix(const string& infix) {
    stack<char> operators;
    string postfix;

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if (isalnum(ch)) {
            postfix += ch; // Operand, add to postfix
        } else if (ch == '(') {
            operators.push(ch);
        } else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop(); // Remove the '('
            }
        } else if (isOperator(ch)) {
            while (!operators.empty() && precedence(ch) <= precedence(operators.top())) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main() {
    int n;
   // cout << "Enter the number of infix expressions: ";
    cin >> n;
    cin.ignore(); // Clear newline character from previous input

    for (int i = 1; i <= n; i++) {
        string infix;
        //cout  << i << ": ";
        getline(cin, infix);

        string postfix = infixToPostfix(infix);
        cout << "Postfix expression " << i << ": " << postfix << endl;
    }

    return 0;
}

