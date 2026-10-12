/*
Given an array of integers, find the largest
element using pointers.
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 5, 28, 9, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int* p = a;
    int m = *p;

    for (int i = 1; i < n; i++) {
        if (*(p + i) > m) {
            m = *(p + i);
        }
    }

    cout << "Largest: " << m;
    return 0;
}