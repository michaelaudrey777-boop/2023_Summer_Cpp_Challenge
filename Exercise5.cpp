//Title: Factorial
//Description: Write a program that calculates the factorial of a given number.
//The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.	
#include <bits/stdc++.h>
using namespace std;

void factorial(int n) {
    int fact = n;
    int total = 1;
    for(int i = 0; i < n; i++) {
        total *= fact;
        cout << fact;
        if(fact != 1) cout << " * ";
        fact -= 1;
    }
    cout << '\n';
    cout << total;
}

int main() {
    int n;
    cin >> n;
    factorial(n);
    return 0;
}