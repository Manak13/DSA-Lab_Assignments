#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        // check if not a vowel
        if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
              ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')) {
            result += ch;  
        }
    }

    cout << "String without vowels: " << result << endl;
    return 0;
}
