#include <iostream>
using namespace std;
int main()
{
	cout << "Program to Calculate BMI value of User - (BMI = Weight * 703/Height2);" << endl;
	 
	cout << "*********************************************" << endl;
	float weight, height, bmi;
	cout << "Enter weight in Pounds: ";
	cin >> weight;
	cout << "Enter height in Inches: ";
	cin >> height;
	cout << "*********************************************" << endl;
	cout << endl;
	cout << "*********************************************" << endl;
	cout << "Your Weight is " << height << "." << endl;
	cout << "Your Height is " << height << "." << endl;
	cout << "*********************************************" << endl;
	cout << endl;
	bmi = weight * 703 / (height * height);
	cout << "*********************************************" << endl;
	cout << "Your BMI value is " << bmi << "." << endl;
	if (bmi > 18.4 && bmi <25.01)
		cout << "You have Optimal Weight (YaY)." << endl;
	if (bmi < 18.5)
		cout << "You are Underweight." << endl;
	if (bmi > 25)
		cout << "You are OverWeight." << endl;
	cout << "*********************************************";
	return 0;
}
