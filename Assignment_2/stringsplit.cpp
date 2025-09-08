#include <bits/stdc++.h>
using namespace std;

void canSplit(string s) {
   
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    for (auto it : freq) {
        if (it.second >= 3) {
            cout << "YES";
            return;
        }
    }


    cout << "NO";
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    canSplit(s);
    return 0;
}