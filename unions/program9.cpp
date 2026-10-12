/*
Create a union with an integer and a character.
Display the size of the union and its members.
*/

#include <iostream>
using namespace std;

union Data {
    int a;
    char b;
};

int main() {
    Data d;

    cout << sizeof(d.a) << endl;
    cout << sizeof(d.b) << endl;
    cout << sizeof(d);

    return 0;
}