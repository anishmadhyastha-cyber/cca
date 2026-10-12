/*
Create a union with an integer, float and character.
Assign and display each member separately.
*/

#include <iostream>
using namespace std;

union Data {
    int a;
    float b;
    char c;
};

int main() {
    Data d;

    d.a = 25;
    cout << d.a << endl;

    d.b = 5.5;
    cout << d.b << endl;

    d.c = 'A';
    cout << d.c << endl;

    return 0;
}