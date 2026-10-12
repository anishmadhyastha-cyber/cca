/*
Create a structure to store a student's name
and marks in three subjects. Calculate the total
and average marks.
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int m1, m2, m3;
};

int main() {
    Student s;

    cin >> s.name >> s.m1 >> s.m2 >> s.m3;

    int total = s.m1 + s.m2 + s.m3;
    float avg = total / 3.0;

    cout << "Total: " << total << endl;
    cout << "Average: " << avg;

    return 0;
}