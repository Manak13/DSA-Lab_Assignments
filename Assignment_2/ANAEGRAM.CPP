#include <bits/stdc++.h>
using namespace std;

void Anagrams(string str1, string str2) {
   
    if (str1.length() != str2.length()) {
        cout << "The strings are NOT Anagrams.";
        return;
    }

    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    
    if (str1 == str2)
        cout << "The strings are Anagrams.";
    else
        cout << "The strings are NOT Anagrams.";
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    Anagrams(str1, str2); 

    return 0;
}