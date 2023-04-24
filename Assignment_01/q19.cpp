#include <iostream>
using namespace std;

int main()
{
    int i;
    int f;
    cout << "Enter length in Inches; ";
    cin >> i;
    cout << endl;
    cout << "Enter length in Feet; ";
    cin >> f;
    cout << endl;
    int f2;      // Hasan Yahya
    f2 = f * 12; // 22L-7971
    int ti;      // BS-SE
    ti = f2 + i;
    float cm;
    cm = ti * 2.54;
    cout << endl;
    cout << "Total length in Centi-meters is " << cm << endl;

    return 0;
}