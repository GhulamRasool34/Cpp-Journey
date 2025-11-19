/*
---------------------------------------------------------
 Project Name : Mini Calculator
 Description  :
    This project performs basic arithmetic operations.
    The user enters two numbers and chooses an operation:
    Addition, Subtraction, Multiplication, Division, or
    Modulus. The result is displayed accordingly.

 Features :
    - Add two numbers
    - Subtract two numbers
    - Multiply two numbers
    - Divide two numbers
    - Modulus of two numbers
    - Uses only simple functions (ITC Level)

 Technologies Used :
    - C++
    - iostream
    - Basic arithmetic operators
    - Functions
    - Menu-driven system

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void showMenu();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divideNum(int a, int b);
int mod(int a, int b);

int main()
{
    int num1, num2, choice;

    cout << "\n--------- MINI CALCULATOR ---------\n";

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    do
    {
        showMenu();
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;

        case 4:
            if (num2 == 0)
                cout << "Error! Division by zero not allowed.\n";
            else
                cout << "Result = " << divideNum(num1, num2) << endl;
            break;

        case 5:
            if (num2 == 0)
                cout << "Error! Modulus by zero not allowed.\n";
            else
                cout << "Result = " << mod(num1, num2) << endl;
            break;

        case 6:
            cout << "Exiting calculator..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

// Menu
void showMenu()
{
    cout << "\n------ OPERATIONS ------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Exit\n";
}

// Functions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divideNum(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}