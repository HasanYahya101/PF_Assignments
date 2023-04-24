#include <iostream>
using namespace std;
int main()
{
    float r;
    float l;
    cout << "Enter Radius; ";
    cin >> r;
    cout << endl;
    cout << "Enter Length; ";
    cin >> l;
    cout << endl;
    float a;
    a = r * r * 3.14;
    cout << "Area is " << a << endl;
    cout << "Volume is " << a * l << endl;

    return 0;
}