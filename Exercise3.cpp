//Title: Even or Odd
//Description: Write a program that asks the user to enter a number and then determines whether the number is even or odd. 
//Print an appropriate message to the console.
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main() {
    LL a;
    cin >> a;
    if(a % 2 == 1) cout << "Odd";
    else cout << "Even";

    return 0;
}