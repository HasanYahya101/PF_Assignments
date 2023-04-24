#include <iostream>
using namespace std;

void MIX(int arr_A[], int arr_B[], int arr_C[], int m, int n); // declaration

int main() // main function
{
	cout << "To change Arrays you will have to change then with in the code!!!" << endl
		 << endl;

	const int m = 6;
	const int n = 7;
	int arr_A[m] = {3, 2, 1, 7, 6, 3};
	int arr_B[n] = {9, 3, 5, 6, 2, 8, 10};
	int a = 0;
	cout << "First Array: ";
	while (a < m)
	{
		cout << arr_A[a] << " ";
		a++;
	}
	cout << endl;
	int b = 0;
	cout << "Second Array: ";
	while (b < n)
	{
		cout << arr_B[b] << " ";
		b++;
	}
	cout << endl
		 << endl;
	int arr_C[m + n];
	MIX(arr_A, arr_B, arr_C, m, n);
	int n1 = 0;
	cout << "Final Array is: ";
	while (n1 < (n + m))
	{
		cout << arr_C[n1] << " ";
		n1++;
	}
	cout << endl;
	return 0;
}
void MIX(int arr_A[], int arr_B[], int arr_C[], int m, int n)
{
	// Arguments for Array-A

	int i = 0;
	int t = 0;
	while (i < m) // First argument passing
	{
		if (arr_A[i] % 2 == 0)
		{
			arr_C[t] = arr_A[i];
			t++;
		}
		i++;
	}

	int i1 = 0;
	int t1 = ((m + n) - 1);
	while (i1 < 6) // Second argument passing
	{
		if (arr_A[i1] % 2 == 1)
		{
			arr_C[t1] = arr_A[i1];
			t1--;
		}
		i1++;
	}

	// Argument for Array-B

	int e1 = 0;
	int t2 = t;
	while (e1 < n) // 3rd argument
	{
		if (arr_B[e1] % 2 == 0)
		{
			arr_C[t2] = arr_B[e1];
			t2++;
		}
		e1++;
	}
	// last argument is going to pass after this

	int e2 = 0;
	int t3 = t1;
	while (e2 < n) // 4th argument passing
	{
		if (arr_B[e2] % 2 == 1)
		{
			arr_C[t3] = arr_B[e2];
			t3--;
		}
		e2++;
	}
}