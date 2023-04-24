#include <iostream>
using namespace std;

int main()
{
    cout << "Arrays have to be changed inside the code!!!" << endl
         << endl;
    cout << "Original Array: ";
    int a1 = 0;
    int arr[] = {1, 6, 8, 9, 11, 12};
    int size = sizeof(arr) / 4;
    while (a1 < size)
    {
        cout << arr[a1] << " ";
        a1++;
    }
    cout << endl
         << endl;
    int even_numbers = size / 2;

    if (size % 2 == 0)
    {
        int odd_numbers = even_numbers;
    }
    else
    {
        int odd_numbers = even_numbers + 1;
    }
    int odd_numbers = even_numbers + 1;

    for (int j = 0; j < ((size / 2) - 1); j++)
    {
        int steps = 0;
        for (int i = 0; i < size - 2; i++)
        {
            if (i % 2 == 0) // Odd - Ascending
            {
                if (arr[i] > arr[i + 2])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 2];
                    arr[i + 2] = temp;
                    steps++;
                }
            }
            else // Even - Descending
            {
                if (arr[i] < arr[i + 2])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 2];
                    arr[i + 2] = temp;
                    steps++;
                }
            }
        }
        if (steps == 0)
        {
            break;
        }
    }
    cout << "Final Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}