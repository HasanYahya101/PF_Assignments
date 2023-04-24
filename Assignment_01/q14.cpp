#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter Letter; ";
    cin >> c;
    cout << endl;
    c = c + 32;
    cout << char(c);
    cout << endl;

    return 0;
}