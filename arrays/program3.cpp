/*Problem: Given a sorted array and a target, return the index if the target is found. Otherwise, return the index where it would be inserted.*/
#include <iostream>
using namespace std;

int searchPos(int a[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (a[i] >= t) {
            return i;
        }
    }
    return n;
}

int main() {
    int a[] = {1, 3, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int t = 2;

    cout << searchPos(a, n, t);

    return 0;
}