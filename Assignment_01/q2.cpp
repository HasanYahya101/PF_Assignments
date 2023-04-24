#include <iostream>
using namespace std;
int main()
{
    float Principal;
    float Rate;
    float Time;
    cout << "Formula: Interest=(principal * rate * time) /100" << endl;
    cout << "Principal = ";
    cin >> Principal;
    cout << "Rate = ";
    cin >> Rate;
    cout << "Time = ";
    cin >> Time;
    cout << endl;
    float Interest;
    Interest = (Principal * Rate * Time) / 100;
    cout << "Interest = " << Interest << endl;
    cout << "End Program" << endl;
    cout << "Return 0;";
    return 0;
}