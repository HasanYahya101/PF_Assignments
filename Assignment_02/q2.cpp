#include <iostream>
using namespace std;
int main()
{
	cout << "Code\tMeal\t\tPer Kg Price in Pkr" << endl;
	cout << "*****************************************" << endl;
	cout << "1\tChicken Handi    1800" << endl;
	cout << "2\tChicken Karahi   2000" << endl;
	cout << "3\tChicken Tikka    2200" << endl;
	cout << "4\tChicken Haleem   500" << endl;
	cout << "5\tCreamy Chicken   2500" << endl;
	cout << "*****************************************" << endl;
	cout << endl;

	int mc, chc;
	float kg, cht;
	cout << "Please Enter your Meal Choice (1-5): ";
	cin >> chc;
	if (chc == 1)
		cht = 1800;
	else if (chc == 2)
		cht = 2000;
	else if (chc == 3)
		cht = 2200;
	else if (chc == 4)
		cht = 500;
	else if (chc == 5)
		cht = 2500;
	else
	{
		cout << endl;
		cout << "Error";
		cout << endl;
		exit(0);
	}
	char pkr;
	char usd;
	char eur;
	cout << "*****************************************" << endl;
	cout << endl;
	cout << "Enter Amount in Kg: ";
	cin >> kg;
	if (kg <= 0)
	{
		cout << endl;
		cout << "Error";
		cout << endl;
		exit(0);
	}
	cout << "*****************************************" << endl;
	float presalestax;
	presalestax = kg * cht;
	float salestax;
	if (presalestax <= 1000)
		salestax = 0;
	if (presalestax > 1000 && presalestax <= 3000)
		salestax = 2;
	if (presalestax > 3000)
		salestax = 5;
	cout << endl;
	string value;

	cout << "Write Currency which you want to pay in (Write pkr, usd or eur): ";
	cin >> value;
	cout << "*****************************************" << endl;
	cout << endl;
	if (value == "pkr")
	{
		if (salestax == 0)
		{
			cout << "Meal Price: " << cht * kg << " pkr" << endl;
			cout << "Sales Tax: "
				 << "0"
				 << " pkr" << endl;
			cout << "Total Price: " << cht * kg << " pkr" << endl;
		}
		if (salestax > 0)
		{
			cout << "Meal Price: " << cht * kg << " pkr" << endl;
			cout << "Sales Tax: " << (cht * kg) * (salestax / 100) << " pkr" << endl;
			cout << "Total Price: " << ((cht * kg) * (salestax / 100)) + (cht * kg) << " pkr" << endl;
		}
	}
	else if (value == "usd")
	{
		if (salestax == 0)
		{
			cout << "Meal Price: " << (cht * kg) / 221.91 << " usd" << endl;
			cout << "Sales Tax: "
				 << "0"
				 << " usd" << endl;
			cout << "Total Price: " << (cht * kg) / 221.91 << " usd" << endl;
		}
		if (salestax > 0)
		{
			cout << "Meal Price: " << (cht * kg) / 221.91 << " usd" << endl;
			cout << "Sales Tax: " << (cht * kg) * (salestax / 100) << " usd" << endl;
			cout << "Total Price: " << (((cht * kg) * (salestax / 100)) + (cht * kg)) / 221.91 << " usd" << endl;
		}
	}
	else if (value == "eur")
	{
		if (salestax == 0)
		{
			cout << "Meal Price: " << cht * kg / 222.27 << " euros" << endl;
			cout << "Sales Tax: "
				 << "0"
				 << " euros" << endl;
			cout << "Total Price: " << (cht * kg) / 222.27 << " euros" << endl;
		}
		if (salestax > 0)
		{
			cout << "Meal Price: " << cht * kg / 222.27 << " euros" << endl;
			cout << "Sales Tax: " << (cht * kg) * (salestax / 100) << " euros" << endl;
			cout << "Total Price: " << (((cht * kg) * (salestax / 100)) + (cht * kg)) / 222.27 << " euros" << endl;
		}
	}
	else
	{
		cout << endl;
		cout << "Error" << endl;
		cout << endl;
		exit(0);
	}
	cout << "*****************************************" << endl;
	cout << endl;

	return 0;
}