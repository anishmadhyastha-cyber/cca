/*
Define an enum for calculator operations.
Input two numbers and an operation choice:
1 for addition, 2 for subtraction, 3 for multiplication.
Print the result.
*/

#include <iostream>
using namespace std;

enum Op { ADD = 1, SUB, MUL };

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    Op o = (Op)n;

    switch (o) {
        case ADD: cout << a + b; break;
        case SUB: cout << a - b; break;
        case MUL: cout << a * b; break;
        default: cout << "Invalid";
    }

    return 0;
}