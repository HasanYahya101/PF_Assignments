#include <iostream>
using namespace std;
int main()
{
	cout << "(Code)\t\t(Function)" << endl;
	cout << "  1\t\tprint factorial.\t\t\t*||Important Formulas" << endl;
	cout << "  2\t\tprint nPr.      \t\t\t*||nPr (n, r) = n! / (n-r)!" << endl;
	cout << "  3\t\tprint nCr (1).  \t\t\t*||nCr(1)(n, r) = n! / (n-r)! * r!" << endl;
	cout << "  4\t\tprint nCr (2).  \t\t\t*||nCr(2)(n,r) = nPr(n,r) / r!" << endl;
	cout << "  5\t\tExit Programm." << endl;
	cout << "********************************************************************************))" << endl;
	cout << "********************************************************************************))" << endl
		 << endl;
	int cd, num;
	int ft = 1;
	int num2;
	int num3;
	int ft2 = 1;
	int ft4 = 1;
	int ft3 = 1;
	int n1;
	cout << "Enter Code of Function you want Implimented: ";
	cin >> cd;
	while (cd < 1 || cd > 5)
	{
		cout << "********************************************************************************))" << endl;
		cout << endl;
		cout << "Enter valid value 1-5!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "********************************************************************************))" << endl;
		cout << endl;
		cout << "Enter Code of Function you want Implimented: ";
		cin >> cd;
		cout << "********************************************************************************))" << endl;
	}
	while (cd >= 1 && cd <= 5)
	{

		if (cd == 5)
		{
			cout << "********************************************************************************))" << endl
				 << endl;
			cout << "Programm has been Exited as per your Request!" << endl
				 << endl;
			exit(0);
		}

		if (cd == 1)
		{
			cout << "********************************************************************************))" << endl
				 << endl;
			cout << "Enter Number To Find Its Factorial:  ";
			cin >> num;
			cout << "********************************************************************************))" << endl
				 << endl;
			for (int a = 1; a <= num; a++)
			{
				ft = ft * a;
			}
			cout << "Factorial of Given Number is = " << ft << endl;
			cout << "********************************************************************************))" << endl
				 << endl;
			ft = 1;
			num = 0;
		}

		if (cd == 2)
		{
			cout << "********************************************************************************))" << endl
				 << endl;
			cout << "Enter first Number:  ";
			cin >> num2;
			cout << "Enter second Number:  ";
			cin >> num3;
			while (num3 > num2)
			{
				cout << "********************************************************************************))" << endl
					 << endl;
				cout << "First number can't be greater then Second number!!" << endl
					 << endl;
				cout << "Enter first Number:  ";
				cin >> num2;
				cout << "Enter second Number:  ";
				cin >> num3;
			}
			n1 = num2 - num3;
			cout << "********************************************************************************))" << endl
				 << endl;
			for (int b = 1; b <= num2; b++)
			{
				ft2 = ft2 * b;
			}
			for (int c = 1; c <= n1; c++)
			{
				ft3 = ft3 * c;
			}
			cout << "nPr value = " << (ft2 / ft3) << endl;

			cout << "********************************************************************************))" << endl
				 << endl;
			ft2 = 1;
			num2 = 0;
			num3 = 0;
			ft3 = 1;
			n1 = 0;
			int c = 1;
			int b = 1;
		}

		if (cd == 3)
		{
			cout << "********************************************************************************))" << endl
				 << endl;
			cout << "Enter first Number:  ";
			cin >> num2;
			cout << "Enter second Number:  ";
			cin >> num3;
			while (num3 > num2)
			{
				cout << "********************************************************************************))" << endl
					 << endl;
				cout << "First number can't be greater then Second number!!" << endl
					 << endl;
				cout << "Enter first Number:  ";
				cin >> num2;
				cout << "Enter second Number:  ";
				cin >> num3;
			}
			n1 = num2 - num3;
			cout << "********************************************************************************))" << endl
				 << endl;
			for (int b = 1; b <= num2; b++)
			{
				ft2 = ft2 * b;
			}
			for (int d = 1; d <= num3; d++)
			{
				ft4 = ft4 * d;
			}
			for (int c = 1; c <= n1; c++)
			{
				ft3 = ft3 * c;
			}
			cout << "nCr (1) value = " << ((ft2 / ft3) * ft4) << endl;

			cout << "********************************************************************************))" << endl
				 << endl;
			ft2 = 1;
			num2 = 0;
			num3 = 0;
			ft3 = 1;
			n1 = 0;
			int c = 1;
			int b = 1;
			int d = 1;
			ft4 = 1;
		}

		if (cd == 4)
		{
			cout << "********************************************************************************))" << endl
				 << endl;
			cout << "Enter first Number:  ";
			cin >> num2;
			cout << "Enter second Number:  ";
			cin >> num3;
			while (num3 > num2)
			{
				cout << "********************************************************************************))" << endl
					 << endl;
				cout << "First number can't be greater then Second number!!" << endl
					 << endl;
				cout << "Enter first Number:  ";
				cin >> num2;
				cout << "Enter second Number:  ";
				cin >> num3;
			}
			n1 = num2 - num3;
			cout << "********************************************************************************))" << endl
				 << endl;
			for (int b = 1; b <= num2; b++)
			{
				ft2 = ft2 * b;
			}
			for (int d = 1; d <= num3; d++)
			{
				ft4 = ft4 * d;
			}
			for (int c = 1; c <= n1; c++)
			{
				ft3 = ft3 * c;
			}
			cout << "nCr (2) value = " << ((ft2 / ft3) / ft4) << endl;

			cout << "********************************************************************************))" << endl
				 << endl;
			ft2 = 1;
			num2 = 0;
			num3 = 0;
			ft3 = 1;
			n1 = 0;
			int c = 1;
			int b = 1;
			int d = 1;
			ft4 = 1;
		}

		cout << endl;
		cout << "(Code)\t\t(Function)" << endl;
		cout << "  1\t\tprint factorial.\t\t\t*||Important Formulas" << endl;
		cout << "  2\t\tprint nPr.      \t\t\t*||nPr (n, r) = n! / (n-r)!" << endl;
		cout << "  3\t\tprint nCr (1).  \t\t\t*||nCr(1)(n, r) = n! / (n-r)! * r!" << endl;
		cout << "  4\t\tprint nCr (2).  \t\t\t*||nCr(2)(n,r) = nPr(n,r) / r!" << endl;
		cout << "  5\t\tExit Programm." << endl;
		cout << "********************************************************************************))" << endl;
		cout << "********************************************************************************))" << endl
			 << endl;

		cout << "Enter Code of Function you want Implimented (Program is Being Repeated): ";
		cin >> cd;
	}

	return 0;
}