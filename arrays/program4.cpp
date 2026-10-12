/*
You are given an array of integers nums.
Return true if any value appears at least twice
in the array, and return false if every element
is distinct.
*/

#include <iostream>
using namespace std;

bool containsDuplicate(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a[] = {1, 2, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << containsDuplicate(a, n);

    return 0;
}