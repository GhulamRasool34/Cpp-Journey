/*
---------------------------------------------------------
 Project Name : Number Guessing Game
 Description  :
    This project simulates a simple number guessing game.
    The user tries to guess a number chosen at the start.
    The system gives hints whether the guess is too high
    or too low. Uses only iostream and simple functions.

 Features :
    - User inputs the number to guess (secret)
    - Another user tries to guess it
    - Hint if guess is higher or lower
    - Count number of attempts
    - ITC-level, uses only loops and iostream

 Technologies Used :
    - C++
    - iostream
    - Functions
    - Loops

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void playGame();

int main()
{
    int choice;

    cout << "\n------ NUMBER GUESSING GAME ------\n";

    do
    {
        cout << "\n1. Play Game\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: playGame(); break;
            case 2: cout << "Exiting game..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 2);

    return 0;
}

// Function to play the game
void playGame()
{
    int number;
    cout << "Enter the number to be guessed (1 to 100): ";
    cin >> number;
    cin.ignore();

    int guess;
    int attempts = 0;

    cout << "\nNow, try to guess the number!\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        cin.ignore();
        attempts++;

        if(guess < number)
            cout << "Too low! Try again.\n";
        else if(guess > number)
            cout << "Too high! Try again.\n";
        else
            cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";

    } while(guess != number);
}