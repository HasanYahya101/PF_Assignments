#include <iostream>
using namespace std;
int main()
{
    int number, unit, ten;
    cout << "Enter any number from 1-100: ";
    cin >> number;
    ten = number / 10;
    unit = number % 10;
    cout << endl;
    cout << "OutPut: ";
    if (number<1 | number> 100)
    {
        cout << "Number is out of range";
    }
    if (number >= 11 && number <= 19)
        ;
    {
        if (number == 11)
        {
            cout << "Eleven";
        }
        if (number == 12)
        {
            cout << "Twelve";
        }
        if (number == 13)
        {
            cout << "Thirteen";
        }
        if (number == 14)
        {
            cout << "Fourteen";
        }
        if (number == 15)
        {
            cout << "Fifteen";
        }
        if (number == 16)
        {
            cout << "Sixteen";
        }
        if (number == 17)
        {
            cout << "Seventeen";
        }
        if (number == 18)
        {
            cout << "Eighteen";
        }
        if (number == 19)
        {
            cout << "Ninteen";
        }
    }
    if (ten >= 2 && ten <= 9)
    {
        if (ten == 1)
        {
            cout << "Ten";
        }
        if (ten == 2)
        {
            cout << "Twenty";
        }
        if (ten == 3)
        {
            cout << "Thirty";
        }
        if (ten == 4)
        {
            cout << "Fourty";
        }
        if (ten == 5)
        {
            cout << "Fifty";
        }
        if (ten == 6)
        {
            cout << "Sixty";
        }
        if (ten == 7)
        {
            cout << "Seventy";
        }
        if (ten == 8)
        {
            cout << "Eighty";
        }
        if (ten == 9)
        {
            cout << "Ninty";
        }
    }
    if (unit >= 0 && unit <= 9)
    {
        if (unit == 0)
            cout << " Zero";
        if (unit == 1)
            cout << " One";
        if (unit == 2)
            cout << " Two";
        if (unit == 3)
            cout << " Three";
        if (unit == 4)
            cout << " Four";
        if (unit == 5)
            cout << " Five";
        if (unit == 6)
            cout << " Six";
        if (unit == 7)
            cout << " Seven";
        if (unit == 8)
            cout << " Eight";
        if (unit == 9)
            cout << " Nine";
    }
    if (number == 100)
    {
        cout << "One Hundred";
    }

    cout << " Only.";
    cout << endl;
    return 0;
}
