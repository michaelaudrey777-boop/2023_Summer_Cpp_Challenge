//Title: Reverse a String
//Description: 	Write a program that asks the user to enter a string and then prints the reverse of that string.	
#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    string result;
    for (int i = static_cast<int>(text.length()) - 1; i >= 0; i--) {
        result += text[i];
    }

    cout << result;
    return 0;
}