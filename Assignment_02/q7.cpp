#include <iostream>
using namespace std;
int main()
{
	float lth, wdth, typ, sqi, glss;
	int clr, qn, crw, crdb;
	float clrc, frc, crc, glc, crwc;
	cout << "Enter Length of Picture (In Inches): ";
	cin >> lth;
	cout << "Enter Width of Picture (In Inches): ";
	cin >> wdth;
	if (lth <= 0 || wdth <= 0)
	{
		cout << endl;
		cout << "Error - Your length or breadth must be greater then 0";
		cout << endl
			 << endl;
		exit(0);
	}
	cout << "***********************************************************";
	cout << endl
		 << endl;
	cout << "We have two types of Frames:" << endl;
	cout << "1-Normal" << endl;
	cout << "2-Fancy" << endl;
	cout << "Enter type of Frame (1 or 2) : ";
	cin >> typ;
	if (typ != 1 && typ != 2)
	{
		cout << endl;
		cout << "Error - Enter Valid Value (1 or 2)";
		cout << endl
			 << endl;
		exit(0);
	}
	cout << "***********************************************************";
	cout << endl
		 << endl;
	cout << "Do you want to Colour the Frame? (1 for Yes and 2 for No): ";
	cin >> qn;
	if (qn != 1 && qn != 2)
	{
		cout << endl;
		cout << "Error - Enter Valid Value (1 or 2)";
		cout << endl
			 << endl;
		exit(0);
	}
	if (qn == 1)
	{
		cout << "***********************************************************";
		cout << endl
			 << endl;
		cout << "We have the following 8 Colours Available for the Frame: " << endl;
		cout << "1-Yellow" << endl;
		cout << "2-Silver" << endl;
		cout << "3-Green" << endl;
		cout << "4-Red" << endl;
		cout << "5-Orange" << endl;
		cout << "6-Blue" << endl;
		cout << "7-Black" << endl;
		cout << "8-Lime" << endl;
		cout << "***********************************************************";
		cout << endl
			 << endl;
		cout << "Enter your Colour (1 to 8): ";
		cin >> clr;
		if (clr > 8 && clr < 0)
		{
			cout << endl;
			cout << "Error - Enter Valid Colour (1 to 8)";
			cout << endl
				 << endl;
			exit(0);
		}
	}
	sqi = lth * wdth;
	cout << "***********************************************************";
	cout << endl
		 << endl;
	cout << "Do you want to use Crowns on Frame (1 for yes or 2 for no): ";
	cin >> crw;
	cout << "***********************************************************";
	cout << endl
		 << endl;
	if (crw != 1 && crw != 2)
	{
		cout << endl;
		cout << "Error - Enter 1 or 2.";
		cout << endl
			 << endl;
		exit(0);
	}
	if (qn == 1)
	{
		clrc = (0.10 * lth) + (0.10 * wdth);
	}
	if (qn == 2)
	{
		clrc = 0;
	}
	if (typ == 1)
	{
		frc = (0.15 * lth) + (0.15 * wdth);
	}
	if (typ == 2)
	{
		frc = (0.25 * lth) + (0.25 * wdth);
	}
	cout << "Do you want to use Cardboard behind Frames (1 for yes or 2 for no): ";
	cin >> crdb;
	cout << "***********************************************************";
	cout << endl
		 << endl;
	if (crdb != 1 && crdb != 2)
	{
		cout << endl;
		cout << "Error - Enter 1 or 2";
		cout << endl
			 << endl;
		exit(0);
	}
	if (crdb == 1)
	{
		crc = 0.02 * sqi;
	}
	if (crdb == 2)
	{
		crc = 0;
	}
	cout << "Do you want to use Glass on Frame (1 for Yes or 2 for No: ";
	cin >> glss;
	cout << "***********************************************************";
	cout << endl
		 << endl;
	if (glss != 1 && glss != 2)
	{
		cout << endl;
		cout << "Error - Enter 1 or 2";
		cout << endl
			 << endl;
		exit(0);
	}
	if (glss == 1)
	{
		glc = 0.07 * sqi;
	}
	if (glss == 2)
	{
		glc = 0;
	}
	if (crw == 1)
	{
		crwc = 0.35 * sqi;
	}
	if (crw == 2)
	{
		crwc = 0;
	}

	cout << "Your Total cost will be: " << clrc + frc + crc + glc + crwc << " Dollars" << endl
		 << endl;
	return 0;
}