#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "Random Value shall be generated for each run of Program!!!" << endl;
	int lottery[5];
	int user[5];
	int match = 0;

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		lottery[i] = rand() % 10;
	}

	for (int i = 0; i < 5; i++)
	{
		user[i] = rand() % 10;
	}

	for (int i = 0; i < 5; i++)
	{
		if (user[i] == lottery[i])
		{
			match++;
		}
	}
	cout << endl;
	cout << "Array(lottery): ";
	for (int i = 0; i < 5; i++)
	{
		cout << lottery[i] << " ";
	}
	cout << endl;
	cout << "Array(user): ";
	for (int i = 0; i < 5; i++)
	{
		cout << user[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "There are " << match << " matching digits." << endl;

	if (match == 5)
	{
		cout << "You are a grand prize winner!";
	}

	return 0;
}
