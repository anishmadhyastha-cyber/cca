/*
Given an array nums, count pairs (i, j)
where nums[i] == nums[j] and i < j.
*/

#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 1, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                c++;
            }
        }
    }

    cout << c;
    return 0;
}