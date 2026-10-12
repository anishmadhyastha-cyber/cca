/*
Define an enum for traffic signals.
Print the action based on the signal entered.
*/

#include <iostream>
using namespace std;

enum Signal { RED = 1, YELLOW, GREEN };

int main() {
    int n;
    cin >> n;

    Signal s = (Signal)n;

    switch (s) {
        case RED: cout << "Stop"; break;
        case YELLOW: cout << "Wait"; break;
        case GREEN: cout << "Go"; break;
        default: cout << "Invalid";
    }

    return 0;
}