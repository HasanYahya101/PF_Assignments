#include <iostream>
using namespace std;
int main()
{
    cout << "SIGN\t\t-\tValue" << endl;
    cout << "Rock\t\t-\t1" << endl;
    cout << "Paper\t\t-       2" << endl;
    cout << "Scissors\t-\t3" << endl;
    cout << "*************************************************" << endl;
    cout << endl;
    int f1, f2;
    cout << "Enter the first players choice: ";
    cin >> f1;
    if (f1 != 1 && f1 != 2 && f1 != 3)
    {
        cout << endl;
        cout << "Error - Invalid Value";
        cout << endl;
        exit(0);
    }
    cout << endl;
    cout << "Enter the second players choice: ";
    cin >> f2;
    if (f2 != 1 && f2 != 2 && f2 != 3)
    {
        cout << endl;
        cout << "Error - Invalid Value";
        cout << endl;
        exit(0);
    }
    cout << "*************************************************" << endl;
    cout << endl;
    if (f1 == f2)
    {
        cout << "It is a Draw";
    }
    // total 6 more if conditionals left;
    if (f1 == 1 && f2 == 2)
    {
        cout << "Second Player Wins.";
    }
    if (f1 == 1 && f2 == 3)
    {
        cout << "First Player Wins.";
    }
    if (f1 == 2 && f2 == 1)
    {
        cout << "First Player Wins.";
    }
    if (f1 == 3 && f2 == 1)
    {
        cout << "Second Player Wins.";
    }
    if (f1 == 2 && f2 == 3)
    {
        cout << "Second Player Wins.";
    }
    if (f1 == 3 && f2 == 1)
    {
        cout << "Second Player Wins.";
    }
    cout << endl;
    cout << "*************************************************" << endl;
    cout << endl;
    return 0;
}