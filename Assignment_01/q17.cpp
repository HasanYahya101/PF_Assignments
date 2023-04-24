#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter Character; ";
    cin >> c;
    cout << endl;
    c = c + 1;
    cout << "Next Character; " << char(c);
    cout << endl;
    // Next character in ASCII

    return 0;
}