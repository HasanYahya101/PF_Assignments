#include <iostream>
using namespace std;
int main()
{
    cout << "Name:\t\tHasan Yahya" << endl;
    cout << "Roll no:\t22L-7971" << endl;
    cout << "Section:\t1B" << endl;
    cout << "Suject:\t\tProgramming Fundamentals" << endl;
    cout << "**********************************************************************" << endl;
    float Num;
    float numA;
    float numB;
    float numC;
    int i = 3;
    cout << endl;
    cout << "Enter number you want to take the Square Root of (Enter -1 to Terminate Program): ";
    cin >> Num;

    while (Num == 0 && Num < -1)
    {
        cout << "**********************************************************************" << endl
             << endl;
        cout << "Your Value must be greater than 0 (It also can't be Negative)." << endl;
        cout << "**********************************************************************" << endl
             << endl;
        cout << "Enter number you want to take the Square Root of: ";
        cin >> Num;
    }
    if (Num == -1)
    {
        cout << endl
             << "Program has been Terminated as Per your Request!" << endl
             << endl;
        exit(0);
    }
    cout << "**********************************************************************" << endl
         << endl;
    while (Num == -1 || Num > 0)
    {
        cout << "Enter initial guess: ";
        cin >> numA;
        while (numA < 1 || numA > 25)
        {
            cout << "**********************************************************************" << endl
                 << endl;
            cout << "Your Value must be from 1 and 25 (It also can't be Negative)." << endl
                 << endl;
            cout << "**********************************************************************" << endl
                 << endl;
            cout << "Enter initial guess: ";
            cin >> numA;
        }
        numB = (numA + Num / numA) / 2;
        numC = (numB + Num / numB) / 2;
        cout << "**********************************************************************" << endl
             << endl;
        cout << "Iteration - 1 : " << numB << endl; //// As explained in the Question
        cout << "**********************************************************************" << endl
             << endl;
        cout << "Iteration - 2 : " << numC << endl; //// As explained in the Question
        cout << "**********************************************************************" << endl
             << endl;
        while (i <= 10)
        {
            numA = numB;
            numB = numC;
            numC = (numB + Num / numB) / 2;
            cout << "Iteration - " << i << " : " << numC << endl;
            i++;
            cout << "**********************************************************************" << endl
                 << endl;
        }
        cout << "Final Square Root of " << Num << " is: " << numC << endl;
        cout << "**********************************************************************" << endl
             << endl;
        cout << "Program is being Repeated!" << endl
             << endl;
        Num = 0;
        numA = 0;
        numB = 0;
        numC = 0;
        i = 3;
        cout << "Enter number you want to take the Square Root of (Enter -1 to Terminate Program): ";
        cin >> Num;
        cout << endl;

        while (Num == 0 && Num < -1)
        {
            cout << "**********************************************************************" << endl
                 << endl;
            cout << "Your Value must be greater than 0 (It also can't be Negative)." << endl;
            cout << "**********************************************************************" << endl
                 << endl;
            cout << "Enter number you want to take the Square Root of: ";
            cin >> Num;
        }
        if (Num == -1)
        {
            cout << endl
                 << "Program has been Terminated as Per your Request!" << endl
                 << endl;
            exit(0);
        }
        cout << "**********************************************************************" << endl
             << endl;
    }

    // In above loop the whole program is being repeated.
    return 0;
}
