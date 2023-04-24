#include <iostream>
using namespace std;

int fib(int n);

int main()
{
	int q = 1;
	while (q == 1)
	{
		cout << "Write a program to provide following functionalities for Fibonacci numbers:" << endl;
		cout << "1. Display nth term in the Fibonacci sequence." << endl;
		cout << "2. Display first n Fibonacci numbers." << endl;
		cout << "3. Display Fibonacci numbers between m and n." << endl;
		cout << "****************************************************************************" << endl
			 << endl;
		int cd;
		cout << "Enter Code of Programm you want to run 1/2/3 or Enter 0 to exit: ";
		cin >> cd;
		while (cd < 0 || cd > 3)
		{
			cout << "Error-Number must be from 0 to 3!" << endl;
			cout << "****************************************************************************" << endl
				 << endl;
			cout << "Enter Code of Programm you want to run 1/2/3 or Enter 0 to exit: ";
			cin >> cd;
		}
		cout << "****************************************************************************" << endl
			 << endl;
		if (cd == 0)
		{
			cout << endl
				 << "Program has been exited as per your request";
			cout << endl
				 << endl;
			exit(0);
		}
		if (cd == 1)
		{
			int n;
			cout << "Enter the Nth Fibbonochi term which you want to find: ";
			cin >> n;
			cout << "****************************************************************************" << endl
				 << endl;
			cout << "Your Number is: " << fib(n);
			cout << endl
				 << endl;
			n = 0;
			cout << "****************************************************************************" << endl
				 << endl;
		}
		if (cd == 2)
		{
			int n, first = 0, second = 1, next = 0;

			cout << "Enter the number of Terms: ";
			cin >> n;

			cout << "Fibonacci Series: ";

			for (int i = 1; i <= n; ++i)
			{
				if (i == 1)
				{
					cout << " " << first << " ";
					continue;
				}
				if (i == 2)
				{
					cout << second << " ";
					continue;
				}
				next = first + second;
				first = second;
				second = next;

				cout << next << " ";
			}
			cout << endl
				 << endl;
		}
		if (cd == 3)
		{
			int n, m;
			cout << endl
				 << "Enter nth (1st) term: ";
			cin >> n;
			cout << "****************************************************************************" << endl
				 << endl;
			cout << endl
				 << "Enter mth (2nd) term: ";
			cin >> m;
			while (n < 0 || m < 0)
			{

				cout << endl
					 << "N and M must be Greater then 0" << endl
					 << endl;
				cout << endl
					 << "Enter nth (1st) term: ";
				cin >> n;
				cout << "****************************************************************************" << endl
					 << endl;
				cout << endl
					 << "Enter mth (2nd) term: ";
				cin >> m;
			}
			cout << "****************************************************************************" << endl
				 << endl;
			cout << "The Fibonacci numbers between " << n << " and " << m << " are: ";

			int previous = 0, current = 1, next = 0;
			next = 0;
			while (current <= m)
			{
				if (current >= n)
				{
					cout << current << " ";
				}
				next = previous + current;
				previous = current;
				current = next;
			}
			cout << endl
				 << endl;
		}
	}
}

int fib(int n)
{
	if (n <= 1)

		return n;

	else

		return (fib(n - 1) + fib(n - 2));
}
