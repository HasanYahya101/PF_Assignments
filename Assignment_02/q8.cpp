#include <iostream>
using namespace std;
int main()
{
    float A1, bw, wrm, A2, A3, wam;
    float hm, A4, fm, A5, B, bf, bfp;
    int df;
    cout << "Enter yout Gender (1 for Male & 2 for Female): ";
    cin >> df;
    cout << endl;
    if (df != 1 && df != 2)
    {
        cout << endl;
        cout << "Error - Enter Valid Value.";
        cout << endl;
        exit(0);
    }
    if (df == 2)
    {
        cout << "Enter your Body Weight: ";
        cin >> bw;
        cout << "Enter your Wrist Measurement: ";
        cin >> wrm;
        cout << "Enter your Waist Measurement: ";
        cin >> wam;
        cout << "Enter your Hip Measurement: ";
        cin >> hm;
        cout << "Enter your Fore Arm Measurement: ";
        cin >> fm;
        A1 = (bw * 0.732) + 8.987;
        A2 = wrm / 3.140;
        A3 = wam * 0.157;
        A4 = hm * 0.249;
        A5 = fm * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bf = bw - B;
        bfp = bf * 100 / bw;
        cout << "******************************************************";
        cout << endl;
        cout << "Your body Fat: " << bf << endl;
        cout << "Your body Fat Percentage: " << bf << "%" << endl;
        cout << "******************************************************";
        cout << endl;
        exit(0);
    }
    if (df == 1)
    {
        cout << "Enter your Body Weight: ";
        cin >> bw;
        cout << "Enter your Wrist Measurement: ";
        cin >> wrm;
        A1 = bw * 1.082 + 94.42;
        A2 = wrm * 4.15;
        B = A1 - A2;
        bf = bw - B;
        bfp = bf * 100 / bw;
        cout << "******************************************************";
        cout << endl;
        cout << "Your body Fat: " << bf << endl;
        cout << "Your body Fat Percentage: " << bf << "%" << endl;
        cout << "******************************************************";
        cout << endl;
        exit(0);
    }

    return 0;
}