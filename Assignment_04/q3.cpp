#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i;
    int j;
    int cnt = 0;
    int cnt1 = 0;

    char answers[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    char student[20];

    for (i = 0; i < 20; i++)
    {
        cout << "Enter your answer for question " << i + 1 << ": ";
        cin >> student[i];
        while (student[i] != 'A' && student[i] != 'B' && student[i] != 'C' && student[i] != 'D')
        {
            cout << "Error!!- Answers must be from A to D!!!" << endl;
            cout << "Enter your answer for question " << i + 1 << ": ";
            cin >> student[i];
        }
    }

    for (j = 0; j < 20; j++)
    {
        if (answers[j] == student[j])
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }

    if (cnt >= 15)
    {
        cout << "You passed!" << endl;
        cout << "You got " << cnt << " questions right!" << endl;
        cout << "You got " << cnt1 << " questions wrong." << endl;
    }

    else
    {
        cout << "You failed." << endl;
        cout << "You got " << cnt << " questions right!" << endl;
        cout << "You got " << cnt1 << " questions wrong." << endl;
    }
    return 0;
}