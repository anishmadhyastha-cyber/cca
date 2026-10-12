/*
Given an array, reverse its elements using pointers.
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int* p = a;
    int* q = a + n - 1;

    while (p < q) {
        int t = *p;
        *p = *q;
        *q = t;

        p++;
        q--;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}