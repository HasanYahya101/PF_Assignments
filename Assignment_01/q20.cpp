#include <iostream>
using namespace std;
int main()
{
    float net = 5689.2356;
    cout.precision(2);
    cout.setf(ios::fixed | ios::showpoint);
    cout << net << endl;

    // What is the output of this program ?
    // Program Output = 5689.24

    return 0;
}