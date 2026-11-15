//Title: Prime Number
//Description: Write a program that asks the user to enter a number and then determines whether the number is prime or not.
//A prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself.
#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n) {
    if (n <= 1) {
        cout << "not prime";
        return 0;
    }

    if (n == 2) {
        cout << "prime";
        return 0;
    }

    if (n % 2 == 0) {
        cout << "not prime";
        return 0;
    }

    for (int i = 3; i <= n / i; i += 2) {
        if (n % i == 0) {
            cout << "not prime";
            return 0;
        }
    }

    cout << "prime";
    return 0;
}

int main() {
    int n;
    cin >> n;
    checkPrime(n);
}