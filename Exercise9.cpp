//Title:	Multiplication Table	
//Description: Write a program that prints the multiplication table for numbers from 1 to 10.	
#include <bits/stdc++.h>
using namespace std;

void loops(int n) {
    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << '\n';
    }
}

void multiplicationTable() {
    for(int j = 0; j < 10; j++) {
        loops(j + 1);
        cout << '\n';
    }
}

int main() {
    multiplicationTable();
    return 0;
}