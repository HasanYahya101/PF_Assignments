#include <iostream>
using namespace std;
int main()
{
    int value1;
    int value2;
    cout << "Value 1 = ";
    cin >> value1;
    cout << endl;
    cout << "Value 2 = ";
    cin >> value2;
    cout << endl;
    cout << "Addition ; " << value1 + value2 << endl;
    cout << "Subtraction ; " << value1 - value2 << endl;
    cout << "Multiplication ; " << value1 * value2 << endl;
    float division;
    division = value1 / value2;
    cout << "Division ; " << division << endl;
    float modulus;

    modulus = (value1 + value2) / 2;
    cout << "Modulus ; " << modulus << endl;
    cout << "Square of 1st value ; " << value1 * value1 << endl;
    cout << "Square of 2nd value ; " << value2 * value2 << endl;

    return 0;
}