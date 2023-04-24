#include <iostream>
using namespace std;

int main()
{
    int input;
    int years;
    int months;
    int days;
    cout << "Enter Number of days; ";
    cin >> input;
    cout << endl;

    years = input / 365;
    months = (input % 365) / 30;
    days = (input % 365) - (months * 30);

    cout << years << " years, " << months << " months, " << days << " days";

    return 0;
}