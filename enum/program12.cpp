/*
Define an enum for the days of the week.
Input a number from 1 to 7 and print the day.
*/

#include <iostream>
using namespace std;

enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    int n;
    cin >> n;

    Day d = (Day)n;

    switch (d) {
        case MON: cout << "Monday"; break;
        case TUE: cout << "Tuesday"; break;
        case WED: cout << "Wednesday"; break;
        case THU: cout << "Thursday"; break;
        case FRI: cout << "Friday"; break;
        case SAT: cout << "Saturday"; break;
        case SUN: cout << "Sunday"; break;
        default: cout << "Invalid";
    }

    return 0;
}