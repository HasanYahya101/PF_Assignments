#include <iostream>
#include <cmath>
using namespace std;

long long reverse_number(long long n);
void print_blank_line(char arrow_char, int arrow_number);
void print_char(char c, int n);

int main()
{
    int cd;
    int loop = 1;
    cout << "1. Hallow Rectangle with Diamond Inside." << endl;
    cout << "2. Hexagone of Given Size and Character." << endl;
    cout << "3. Arrow Sign of Provided Size and Character." << endl;
    cout << "*****************************************************************" << endl
         << endl;
    while (loop == 1)
    {
        cout << "Enter code for Function (1/2/3) or type 0 to Exit Program: ";
        cin >> cd;
        cout << endl;
        while (cd < 0 || cd > 3)
        {
            cout << endl;
            cout << "Enter Valid Value!!" << endl;
            cout << "*****************************************************************" << endl
                 << endl;
            cout << "Enter code for Function (1/2/3) or type 0 to Exit Program!!";
            cin >> cd;
        }
        if (cd == 1)
        {
            cout << endl;
            int side_length;
            cout << "Enter Number (From 2 to 9): ";
            cin >> side_length;
            cout << endl;
            while (side_length < 2 || side_length > 9)
            {
                cout << endl;
                cout << "Error! Wrong Value Given." << endl
                     << endl;
                cout << "Enter Number (From 2 to 9): ";
                cin >> side_length;
                cout << endl;
            }
            long long ascending_number = 0;
            long long descending_number = 0;
            for (int i = 1; i <= side_length; i++)
            {
                ascending_number += i;
                ascending_number = (ascending_number * 10);
            }
            ascending_number = (ascending_number / 10);
            descending_number = reverse_number(ascending_number);

            // First line
            cout << (long long)(ascending_number / 10);
            cout << descending_number << "\n";

            int spaces = 0;
            int controlled_spaces = 0;
            for (int i = 0; i < (side_length * 2) - 3; i++)
            {
                int first_number = (long long)(ascending_number / pow(10, controlled_spaces + 1));
                cout << first_number;
                for (int i = 0; i < ((controlled_spaces * 2) + 1); i++)
                {
                    cout << " ";
                }
                long long second_number = reverse_number(first_number);
                cout << second_number;

                cout << endl;
                spaces++;
                int most_spaces = side_length - 2;
                if (spaces > most_spaces)
                {
                    controlled_spaces = (2 * most_spaces) - spaces;
                }
                else
                {
                    controlled_spaces = spaces;
                }
            }

            // Last line
            cout << (long long)(ascending_number / 10);
            cout << descending_number << endl;
            cout << endl
                 << endl;
        }
        if (cd == 0)
        {
            cout << endl;
            exit(0);
        }
        if (cd == 2)
        {
            cout << endl;
            int length = 0;
            cout << "Enter the size of the hexagon: ";
            cin >> length;
            char c1;
            cout << "Enter Character: ";
            cin >> c1;
            cout << endl;
            for (int i = 0, k = length, l = 2 * length - 1; i < length; ++i, --k, ++l)
            {
                for (int j = 0; j < 3 * length; ++j)
                {
                    if (j >= k && j <= l)
                        cout << c1;
                    else
                        cout << " ";
                }
                cout << endl;
            }

            for (int i = 0; i < length; ++i)
            {
                for (int j = 0; j < 3 * length; ++j)
                    cout << c1;
                cout << endl;
            }

            for (int i = 0, k = 1, l = 3 * length - 2; i < length; ++i, ++k, --l)
            {
                for (int j = 0; j < 3 * length; ++j)
                {
                    if (j >= k && j <= l)
                        cout << c1;
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
        if (cd == 3)
        {
            int number = 0;
            char c = ' ';
            cout << "Enter Number (Greater than 1): ";
            cin >> number;
            while (number < 1)
            {
                cout << endl;
                cout << "Error! Wrong Value Given." << endl
                     << endl;
                cout << "Enter Size of Arrow (Greater than 1): ";
                cin >> number;
                cout << endl;
            }
            cout << "Enter Character: ";
            cin >> c;

            // First line
            print_blank_line(c, number);

            // Arrow part
            int first_spaces = number - 2;
            for (int i = 0; i < number - 1; i++) // For every line in the arrow part
            {
                int second_spaces = i;
                print_char(' ', first_spaces);
                cout << c;
                print_char(' ', second_spaces);
                cout << c;
                print_char(' ', second_spaces);
                cout << c; // Third character
                print_char(' ', first_spaces);

                first_spaces--;
                cout << "\n"; // newline
            }

            // Trailing lines (number of lines is equal to the inputted number)
            for (int i = 0; i < number; i++)
            {
                print_blank_line(c, number);
            }

            cout << endl
                 << endl;
        }
    }
}

long long reverse_number(long long n)
{
    int numbers_added = 0;
    int arr[10];
    while (n >= 10)
    {
        arr[numbers_added] = (n % 10);
        n = n / 10;
        numbers_added++;
    }
    arr[numbers_added] = n;
    numbers_added++;

    long long reversed = 0;

    for (int i = 0; i < numbers_added; i++)
    {
        reversed += arr[i];
        reversed = reversed * 10;
    }
    reversed = reversed / 10;
    return reversed;
}

void print_blank_line(char arrow_char, int arrow_number)
{
    print_char(' ', arrow_number - 1);
    cout << arrow_char;
    print_char(' ', arrow_number - 1);
    cout << '\n';
}

void print_char(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
}

/*
for q1: Extra Code:
#include <iostream>
using namespace std;

bool print_allowed(int i, int j, int val_temp)
{
    if(i > val_temp)
    {
        int store = i - val_temp;
        i = val_temp - store;
    }
    bool flag = true;
    int val = val_temp;
    if(i == 1 or i == (val_temp * 2) - 1)
    {
        return true;
    }
    else if (i > 1 and i < (val_temp * 2) - 1)
    {
        if(val_temp == j)
        {
            return false;
        }
        int temp_i = i - 2;
        if (j > val_temp)
        {
            if(j <= temp_i + val_temp)
            {
                return false;
            }
        }
        if (j < val_temp)
        {
            if(j >= val_temp - temp_i)
            {
                return false;
            }
        }
    }
    return flag;
}

int main() 
{
    int val;
    cout << "Enter an Integer: ";
    cin >> val;
    while (val < 3 or val >9)
    {
        cout << "Invalid Input! Enter Value Again (3 to 9): ";
        cin >> val;
    }
    int loop_run = (val * 2) - 1;
    int val_temp = val;
    for(int i = 0; i < loop_run; i++)
    {
        int printed = 1;
        bool half = false;
        int space = 0;
        
        for(int j = 0; j < loop_run; j++)
        {
            if(print_allowed(i+1, j+1, val_temp) != false)
            {
                cout << printed;
            }
            else
            {
                cout << " ";
            }
            
            if(printed == val)
            {
                half = true;
            }
            
            if(half == false)
            {
                printed++;
            }
            else if(half == true)
            {
                printed--;
            }
        }
        cout << endl;
    }

    return 0;
}
*/
