#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 7;
    long empId[NUM_EMPLOYEES] = {5658845, 4520125, 7895122, 8777541,
                                 8451277, 1302850, 7580489};
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter the hours worked for employee ID-" << empId[i] << ": ";
        cin >> hours[i];

        while (hours[i] < 0)
        {
            cout << "Hours worked must be 0 or greater. Please re-enter: ";
            cin >> hours[i];
        }

        cout << "Enter the hourly pay rate for employee ID-" << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 6.00)
        {
            cout << "Hourly pay rate must be 6.00 or greater. Please re-enter: ";
            cin >> payRate[i];
        }

        cout << "******************************************************************" << endl;
        wages[i] = hours[i] * payRate[i];
        cout << "Gross Pay for Employee ID-" << empId[i] << ": $" << wages[i] << endl;
        cout << "*******************************************************************" << endl;
    }

    return 0;
}
