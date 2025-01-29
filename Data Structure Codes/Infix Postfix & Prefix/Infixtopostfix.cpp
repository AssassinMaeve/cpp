#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prec(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return -1;
}

string infixtopostfix(string s) {
    stack<char> st;
    string res;

    for (size_t i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If the character is an operand, add it to the result
        if (isalnum(ch)) {
            res += ch;
        }
        // If the character is an operator
        else {
            while (!st.empty() && prec(st.top()) >= prec(ch)) {
                res += st.top();
                st.pop();
            }
            
        }
        st.push(ch);
    }

    // Pop all the remaining operators from the stack
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    string s;
    cout << "Enter an infix expression: " << endl;
    cin >> s;

    cout << "Postfix expression: " << infixtopostfix(s) << endl;
    return 0;
}
