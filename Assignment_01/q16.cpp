#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;

    cout << "Enter value of a; ";
    cin >> a;
    cout << endl;

    cout << "Enter value of b; ";
    cin >> b;
    cout << endl;

    cout << "Enter value of c; ";
    cin >> c;
    cout << endl;

    d = b;
    b = a;
    a = c;
    c = d;

    cout << "Value for a is " << a << endl;
    cout << "Value for b is " << b << endl;
    cout << "Value for c is " << c << endl;

    return 0;
}