/*
Given an array of integers, find the sum and
average of its elements using pointers.
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int* p = a;
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += *(p + i);
    }

    double avg = (double)s / n;

    cout << "Sum: " << s << endl;
    cout << "Average: " << avg;

    return 0;
}