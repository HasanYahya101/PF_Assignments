#include <iostream>
using namespace std;
int main()
{
    cout << "***********************************************************************" << endl;
    cout << endl;
    int with, total, n5000, mod, mod1, n500, n1000;
    cout << "Enter the amount of money you want to withdraw from your Bank Account (Limit:10000rs): ";
    cin >> with;
    if (with % 500 != 0 || with <= 0)
    {
        cout << endl;
        cout << "Error - Number must be divisable by 500.";
        cout << endl;
        exit(0);
    }
    if (with > 10000)
    {
        cout << endl;
        cout << "Your Withdrawl Limit is 10000 rs." << endl;
        cout << endl;
        exit(0);
    }
    cout << "***********************************************************************" << endl;
    cout << endl;
    cout << "Enter the amount of money available in your Bank Account: ";
    cin >> total;
    mod = with / 500;
    mod1 = with / 1000;

    if (with > total)
    {
        cout << endl;
        cout << "Error - Not Enough Balance.";
        exit(0);
    }
    if (with <= 1000)
    {
        n500 = with / 500;
    }
    if (with > 1000)
    {
        if (mod % 2 == 1)
        {
            n500 = 1;
        }
        if (mod % 2 == 0)
        {
            n500 = 2;
        }
    }
    if (with == 6000)
    {
        n500 = 0;
    }
    cout << "***********************************************************************" << endl;
    cout << endl;
    cout << "Amount With-drawn: " << with << "rs" << endl;
    cout << "Total Balance left: " << total - with << "rs" << endl;
    cout << "Number of 500rs Notes: " << n500 << endl;
    if (with == 1000)
    {
        n1000 = 0;
    }
    if (with > 1000 && with <= 5000)
    {
        n1000 = mod1 - 1;
    }
    if (with == 5500 || with == 6000)
    {
        n1000 = 0;
    }
    if (with > 6000 && with <= 10000)
    {
        n1000 = mod1 - 6;
    }
    if (mod1 == 0)
    {
        n1000 = 0;
    }
    if (with >= 5000 && with < 10000)
    {
        n5000 = 1;
    }
    else
    {
        n5000 = 0;
    }
    if (with == 6500)
    {
        n1000 = 1;
    }
    if (with == 7500)
    {
        n1000 = 2;
    }
    if (with == 8500)
    {
        n1000 = 3;
    }
    if (with == 9500)
    {
        n1000 = 4;
    }
    if (with == 1500)
    {
        n1000 = 1;
    }
    if (with == 2500)
    {
        n1000 = 2;
    }
    if (with == 3500)
    {
        n1000 = 3;
    }
    if (with == 4500)
    {
        n1000 = 4;
    }
    cout << "Number of 1000rs Notes: " << n1000 << endl;
    cout << "Number of 5000rs Notes: " << n5000 << endl;
    cout << "***********************************************************************" << endl;

    return 0;
}