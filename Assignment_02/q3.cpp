#include <iostream>
using namespace std;
int main()
{

	float tg, tm, td, dis;
	cout << "Enter no of Gallons your Car can hold: ";
	cin >> tg;
	if (tg <= 0)
	{
		cout << endl;
		cout << "ERROR - Invalid Value" << endl;
		exit(0);
	}
	cout << "Enter no of Miles your Car can Drive on a full Tank: ";
	cin >> tm;
	if (tm <= 0)
	{
		cout << endl;
		cout << "ERROR - Invalid Value" << endl;
		exit(0);
	}
	cout << "*************************************************************" << endl;
	cout << endl;
	td = tm / tg;
	cout << "Total Miles per Gallon for your car are: " << td << endl;
	cout << "*************************************************************" << endl;
	cout << endl;
	cout << "A software company sells a package that retails for $99." << endl;
	cout << "Discounts are as Below:";
	cout << "Quantity\t-\tDiscount" << endl;
	cout << "10---19\t\t-\t20%" << endl;
	cout << "20---49\t\t-\t30%" << endl;
	cout << "50---99\t\t-\t40%" << endl;
	cout << "100 or More\t-\t50%" << endl;
	cout << "*************************************************************" << endl;
	cout << endl;
	int unit;
	cout << "Enter Units of Product Sold: ";
	cin >> unit;
	if (unit <= 0)
	{
		cout << "ERROR - Invalid Value" << endl;
		exit(0);
	}
	cout << "*************************************************************" << endl;
	cout << endl;
	int total;
	total = unit * 99;
	if (unit >= 1 && unit <= 9)
	{
		cout << "Total Cost of Purchase is " << unit * 99 << " Dollars.";
	}
	if (unit >= 10 && unit <= 19)
	{
		cout << "Total Cost of Purchase is " << (unit * 99) - (total * 0.2) << " Dollars.";
	}
	if (unit >= 20 && unit <= 49)
	{
		cout << "Total Cost of Purchase is " << (unit * 99) - (total * 0.3) << " Dollars.";
	}
	if (unit >= 50 && unit <= 99)
	{
		cout << "Total Cost of Purchase is " << (unit * 99) - (total * 0.4) << " Dollars.";
	}
	if (unit >= 100)
	{
		cout << "Total Cost of Purchase is " << (unit * 99) - (total * 0.5) << " Dollars.";
	}
	cout << endl;
	cout << "*************************************************************" << endl;
	return (0);
}