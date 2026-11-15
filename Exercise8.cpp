//Title: Palindrome
//Description: Write a program that asks the user to enter a string and then determines whether the string is a palindrome or not. 
//A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.	
#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    string normalized;
    for (char ch : text) {
        if (isalnum(static_cast<unsigned char>(ch))) {
            normalized += tolower(static_cast<unsigned char>(ch));
        }
    }

    bool isPalindrome = true;
    for (int i = 0; i < normalized.length() / 2; ++i) {
        if (normalized[i] != normalized[normalized.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }

    return 0;
}