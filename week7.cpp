#include <iostream>
#include <stack>
#include <string>

using namespace std;

#define ZERO '0'

bool isOperator(char lookup) {
    char Operators[]{'+', '-', '/', '*'};
    for (int i = 0; i < 4; i++)
        if (Operators[i] == lookup)
            return true;
    return false;
}

int precedence(char x) {
    if (x == '*' || x == '/')
        return 2;
    return 1;
}

string infixToPostfix(string infix) {
    stack<char> STACK;
    string expression = "";

    for (int i = 0; i < infix.size(); i++) {
        char curChar = infix[i];
        if (curChar == ' ') {
            continue;
        } else if (isOperator(curChar)) {
            while (!STACK.empty() && STACK.top() != '(' &&
                   precedence(curChar) <= precedence(STACK.top())) {
                expression += STACK.top();
                STACK.pop();
            }
            STACK.push(curChar);
        } else if (curChar == '(') {
            STACK.push(curChar);
        } else if (curChar == ')') {
            while (STACK.top() != '(') {
                expression += STACK.top();
                STACK.pop();
            }
            STACK.pop();
        } else {
            expression += curChar;
        }
    }
    while (!STACK.empty()) {
        expression += STACK.top();
        STACK.pop();
    }
    return expression;
}

int evalPostFix(string postfix) {
    stack<char> STACK;
    for (int i = 0; i < postfix.size(); i++) {
        char curChar = postfix[i];
        if (isOperator(curChar)) {
            int first = (int)STACK.top() - ZERO;
            STACK.pop();
            int second = (int)STACK.top() - ZERO;
            STACK.pop();
            char result = 0;
            switch (curChar) {
                case '+':
                    result = (first + second) + ZERO;
                    STACK.push(result);
                    break;
                case '-':
                    result = (first - second) + ZERO;
                    STACK.push(result);
                    break;
                case '/':
                    result = (first / second) + ZERO;
                    STACK.push(result);
                    break;
                case '*':
                    result = (first * second) + ZERO;
                    STACK.push(result);
                    break;
                default:
                    break;
            }
        } else
            STACK.push(curChar);
    }
    return (int)STACK.top() - ZERO;
}

int main() {
    string infix = "2 * (3 + 4)";
    cout << infixToPostfix(infix) << endl;
    cout << evalPostFix(infixToPostfix(infix)) << endl;
    return 0;
}
