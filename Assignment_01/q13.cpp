#include <iostream>
using namespace std;
int main()
{
    int c;
    cout << "Enter code from 0 and 127; ";
    cin >> c;
    cout << endl;

    if (c > 127 || c < 0)
        cout << "Error";
    else
        cout << char(c);
    cout << endl;

    return 0;
}