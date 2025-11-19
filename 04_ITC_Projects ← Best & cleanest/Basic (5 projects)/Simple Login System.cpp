/*
---------------------------------------------------------
 Project Name : Simple Login System
 Description  :
    This project simulates a very basic login system using
    a hardcoded username and password. The user enters
    login credentials, and the program checks if they match.
    Access is granted or denied based on correctness.

 Features :
    - Hardcoded username and password
    - User enters username and password
    - Simple string comparison using character arrays
    - ITC-level, easy to understand

 Technologies Used :
    - C++
    - iostream
    - Character arrays
    - Functions

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
int strEqual(const char a[], const char b[]);

int main()
{
    char username[20];
    char password[20];

    // Hardcoded credentials
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    cout << "\n--------- SIMPLE LOGIN SYSTEM ---------\n";

    cout << "Enter Username : ";
    cin.getline(username, 20);

    cout << "Enter Password : ";
    cin.getline(password, 20);

    if (strEqual(username, correctUser) && strEqual(password, correctPass))
    {
        cout << "\nLogin Successful! Access Granted.\n";
    }
    else
    {
        cout << "\nInvalid username or password. Access Denied.\n";
    }

    return 0;
}

// Compare two character arrays
int strEqual(const char a[], const char b[])
{
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return 1;
}