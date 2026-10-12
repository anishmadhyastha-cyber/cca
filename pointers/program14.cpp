/*
Write a program to print the value and address
of a variable using a pointer.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    cout << "Value: " << *p << endl;
    cout << "Address: " << p;

    return 0;
}