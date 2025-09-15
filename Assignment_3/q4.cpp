#include <iostream>
#include <stack>
using namespace std;


int prec(char c) {
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    if(c=='^') return 3;
    return -1;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string post = "";

    for(int i=0; i<infix.length(); i++) {
        char ch = infix[i];

        
        if(isalnum(ch)) {
            post += ch;
        }
        
        else if(ch == '(') {
            s.push(ch);
        }
    
        else if(ch == ')') {
            while(!s.empty() && s.top()!='(') {
                post += s.top();
                s.pop();
            }
            s.pop(); // remove '('
        }
        
        else {
            while(!s.empty() && prec(s.top()) >= prec(ch)) {
                post += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    
    while(!s.empty()) {
        post += s.top();
        s.pop();
    }

    return post;
}

int main() {
    string infix;
    cout << "Enter Infix: ";
    cin >> infix;

    cout << "Postfix: " << infixToPostfix(infix);
    return 0;
}
