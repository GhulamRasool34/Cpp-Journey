/*
---------------------------------------------------------
 Project Name : Basic ATM Menu System
 Description  :
    This project simulates a very simple ATM system.
    The user can deposit money, withdraw money, check
    account balance, and view transaction history.
    All data is stored in arrays, no advanced concepts.

 Features :
    - Deposit money
    - Withdraw money
    - Check account balance
    - View all transactions
    - ITC-level, uses arrays and functions

 Technologies Used :
    - C++
    - iostream
    - Arrays
    - Functions
    - Menu-driven System

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void deposit(float &balance, float transactions[], int &count);
void withdraw(float &balance, float transactions[], int &count);
void showBalance(float balance);
void showTransactions(float transactions[], int count);

int main()
{
    float balance = 0.0;
    float transactions[100]; // store last 100 transactions
    int count = 0;           // transaction count
    int choice;

    cout << "\n---------- BASIC ATM SYSTEM ----------\n";

    do
    {
        cout << "\n1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. View Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: deposit(balance, transactions, count); break;
            case 2: withdraw(balance, transactions, count); break;
            case 3: showBalance(balance); break;
            case 4: showTransactions(transactions, count); break;
            case 5: cout << "Exiting ATM system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Deposit money
void deposit(float &balance, float transactions[], int &count)
{
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid amount!" << endl;
        return;
    }

    balance += amount;
    transactions[count++] = amount; // positive for deposit

    cout << "Amount deposited successfully!" << endl;
}

// Withdraw money
void withdraw(float &balance, float transactions[], int &count)
{
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid amount!" << endl;
        return;
    }

    if(amount > balance)
    {
        cout << "Insufficient balance!" << endl;
        return;
    }

    balance -= amount;
    transactions[count++] = -amount; // negative for withdrawal

    cout << "Amount withdrawn successfully!" << endl;
}

// Show current balance
void showBalance(float balance)
{
    cout << "Current balance: " << balance << endl;
}

// Show all transactions
void showTransactions(float transactions[], int count)
{
    if(count == 0)
    {
        cout << "No transactions yet." << endl;
        return;
    }

    cout << "\n--- Transaction History ---\n";
    for(int i = 0; i < count; i++)
    {
        if(transactions[i] >= 0)
            cout << i+1 << ". Deposit  : " << transactions[i] << endl;
        else
            cout << i+1 << ". Withdraw : " << -transactions[i] << endl;
    }
}