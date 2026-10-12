/*
Create a structure Student with name, roll number
and marks. Read and display the student's details.
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter name, roll and marks: ";
    cin >> s.name >> s.roll >> s.marks;

    cout << s.name << " " << s.roll << " " << s.marks;

    return 0;
}