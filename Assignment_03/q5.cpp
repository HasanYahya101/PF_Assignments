#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int dice_roll1, dice_roll2, point1 = 0, point2 = 0, matches = 1, max_matches = 5;
    int p1w = 0, p2w = 0;

    srand(time(0)); // "Seed" the random number generator

    while (matches <= max_matches)
    {
        if (point1 < 20)
        {
            cout << "Player 1's turn. Press any key to roll the dice.";
            cin.get(); // Wait for user input
            cout << "**************************************************************" << endl
                 << endl;
            dice_roll1 = rand() % 6 + 1; // Generate a random number between 1 and 6 (inclusive)

            cout << "You rolled a " << dice_roll1 << endl;
            cout << "**************************************************************" << endl;

            point1 = point1 + dice_roll1; // Add the points from this turn to the total
            cout << endl;

            cout << "Player 1's Total : " << point1;
            cout << endl;
            cout << "**************************************************************" << endl;
            cout << endl;
        }
        if (point1 > 20)
        {
            point1 = point1 - dice_roll1;
            cout << endl;
            cout << "Move not Possible!!" << endl
                 << endl;
        }
        if (point1 == 20)
        {
            cout << "Player 1 Wins!!" << endl;
            p1w++;
            cout << "**************************************************************" << endl
                 << endl;
        }
        if (point2 < 20)
        {
            cout << "Player 2's turn. Press any key to roll the dice.";
            cin.get(); // Wait for user input
            cout << "**************************************************************" << endl
                 << endl;
            dice_roll2 = rand() % 6 + 1; // Generate a random number between 1 and 6 (inclusive)

            cout << "You rolled a " << dice_roll2 << endl;

            point2 = point2 + dice_roll2; // Add the points from this turn to the total

            cout << "**************************************************************" << endl;
            cout << endl;
            cout << "Player 2's Total : " << point2;
            cout << endl;
            cout << "**************************************************************" << endl
                 << endl;
        }
        if (point2 > 20)
        {
            point2 = point2 - dice_roll2;
            cout << endl;
            cout << "Move not Possible!!" << endl
                 << endl;
        }

        if (point2 == 20)
        {
            cout << "Player 2 Wins!!" << endl;
            p2w++;
            cout << "**************************************************************" << endl
                 << endl;
        }

        if (p1w == 3)
        {
            cout << endl
                 << endl
                 << "Game Ended Because Player 1 Won 3 times!" << endl
                 << endl;
            exit(0);
        }

        if (p2w == 3)
        {
            cout << endl
                 << endl
                 << "Game Ended Because Player 2 Won 3 times!" << endl
                 << endl;
            exit(0);
        }

        if (point1 == 20 || point2 == 20)
        {
            point1 = 0;
            point2 = 0;
        }
        if (point1 == 20 || point2 == 20)
        {
            matches++;
            cout << endl
                 << endl
                 << "Program is Starting Again for Next Game" << endl
                 << endl;
        }
    }

    return 0;
}