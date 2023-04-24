#include <iostream>
using namespace std;

int main()
{
    char x = 'a';
    char y = 'c';
    cout << ++x << endl;
    cout << y++ << endl;
    cout << (x - y) << endl;
    return 0;

    // Error is because a and c were not defined to be strings
    //  Error is fixed by putting in '' character
    //  Original Code
    // char x = ’a’;
    // char y = ’c’;
    // cout << ++x << endl;
    // cout << y++ << endl;
    // cout << (x - y) << endl;
    // return 0;
    //  Fixed code is in compiler
    //  Program Output is as Under;
    // b
    // c
    // -2

    return 0;
}