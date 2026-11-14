//Title: Fibonacci Sequence
//Description: Write a program that prints the Fibonacci sequence up to a given number. 
//The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. 
//The sequence starts with 0 and 1.
#include <bits/stdc++.h>
using namespace std;

void fibonacci(long long count) {
    long long first = 0;
    long long second = 1;
    for (long long i = 0; i < count; ++i) {
        if (i > 0) cout << ' ';
        cout << first;
        long long next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    long long n;
    if (!(cin >> n) || n < 0) return 0;
    fibonacci(n);
    return 0;
}