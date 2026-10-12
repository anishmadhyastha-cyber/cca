/*
Create a structure Student to store the names
and marks of three students. Display the student
who scored the highest marks.
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cin >> s[i].name >> s[i].marks;
    }

    int max = 0;

    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    cout << s[max].name << " " << s[max].marks;

    return 0;
}