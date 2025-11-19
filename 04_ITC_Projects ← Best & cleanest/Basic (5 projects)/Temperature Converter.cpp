/*
---------------------------------------------------------
 Project Name : Temperature Converter
 Description  :
    This project converts temperature between Celsius and
    Fahrenheit. The user chooses the conversion direction
    and enters the temperature value. The program displays
    the converted temperature.

 Features :
    - Convert Celsius to Fahrenheit
    - Convert Fahrenheit to Celsius
    - Simple menu-driven program
    - Uses only basic arithmetic (ITC Level)

 Technologies Used :
    - C++
    - iostream
    - Functions

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void showMenu();
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    int choice;
    float temp;

    cout << "\n------- TEMPERATURE CONVERTER -------\n";

    do
    {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            cout << "Fahrenheit = " << celsiusToFahrenheit(temp) << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            cout << "Celsius = " << fahrenheitToCelsius(temp) << endl;
            break;

        case 3:
            cout << "Exiting converter..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}

// Menu
void showMenu()
{
    cout << "\n---------- OPTIONS ----------\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Exit\n";
}

// Convert C → F
float celsiusToFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

// Convert F → C
float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5 / 9;
}