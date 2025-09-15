#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;

    
    for (char ch : str) {
        s.push(ch);
    }

    
    string rev = "";
    while (!s.empty()) {
        rev += s.top();  
        s.pop();         
    }

    cout << "Reversed string: " << rev << endl;
    return 0;
}

