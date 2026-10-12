/*
Given a 2D array accounts, find the maximum
sum of any row.
*/

#include <iostream>
using namespace std;

int main() {
    int a[3][2] = {{1, 2}, {3, 2}, {4, 5}};
    int m = 0;

    for (int i = 0; i < 3; i++) {
        int s = 0;

        for (int j = 0; j < 2; j++) {
            s += a[i][j];
        }

        if (s > m) {
            m = s;
        }
    }

    cout << m;
    return 0;
}