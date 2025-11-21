/*
---------------------------------------------------------
 Project Name : Food Ordering Menu System
 Description  :
    This project simulates a simple food ordering system.
    The user can view menu items, place an order, cancel
    an order, and view all ordered items. All data is
    stored in arrays and character arrays.

 Features :
    - Display food menu
    - Place order by item number
    - Cancel order
    - View all ordered items
    - ITC-level, uses arrays, char arrays, and functions

 Technologies Used :
    - C++
    - iostream
    - Character arrays (2D)
    - Functions
    - Menu-driven System

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void displayMenu();
void placeOrder(char orders[][50], int &count);
void cancelOrder(char orders[][50], int &count);
void showOrders(char orders[][50], int count);
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    char orders[50][50]; // store up to 50 orders
    int count = 0;       // current order count
    int choice;

    cout << "\n-------- FOOD ORDERING SYSTEM --------\n";

    do
    {
        cout << "\n1. Display Menu\n";
        cout << "2. Place Order\n";
        cout << "3. Cancel Order\n";
        cout << "4. View All Orders\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: displayMenu(); break;
            case 2: placeOrder(orders, count); break;
            case 3: cancelOrder(orders, count); break;
            case 4: showOrders(orders, count); break;
            case 5: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Display food menu
void displayMenu()
{
    cout << "\n--- FOOD MENU ---\n";
    cout << "1. Burger\n";
    cout << "2. Pizza\n";
    cout << "3. Sandwich\n";
    cout << "4. Pasta\n";
    cout << "5. Fries\n";
    cout << "6. Coke\n";
}

// Place an order
void placeOrder(char orders[][50], int &count)
{
    if(count >= 50)
    {
        cout << "Order list full!" << endl;
        return;
    }

    int choice;
    displayMenu();
    cout << "Enter item number to order: ";
    cin >> choice;
    cin.ignore();

    char item[50];

    switch(choice)
    {
        case 1: copyStr(item, "Burger"); break;
        case 2: copyStr(item, "Pizza"); break;
        case 3: copyStr(item, "Sandwich"); break;
        case 4: copyStr(item, "Pasta"); break;
        case 5: copyStr(item, "Fries"); break;
        case 6: copyStr(item, "Coke"); break;
        default: cout << "Invalid item number!" << endl; return;
    }

    copyStr(orders[count], item);
    count++;
    cout << item << " added to order successfully!" << endl;
}

// Cancel an order
void cancelOrder(char orders[][50], int &count)
{
    if(count == 0)
    {
        cout << "No orders to cancel!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter item name to cancel: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(orders[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(orders[j], orders[j+1]);
            }
            count--;
            cout << "Order cancelled successfully!" << endl;
            return;
        }
    }

    cout << "Item not found in orders!" << endl;
}

// Show all orders
void showOrders(char orders[][50], int count)
{
    if(count == 0)
    {
        cout << "No orders yet." << endl;
        return;
    }

    cout << "\n--- All Orders ---\n";
    for(int i = 0; i < count; i++)
    {
        cout << i+1 << ". " << orders[i] << endl;
    }
}

// Copy string
void copyStr(char dest[], const char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Compare strings
int strEqual(const char a[], const char b[])
{
    int i = 0;
    while(a[i] != '\0' || b[i] != '\0')
    {
        if(a[i] != b[i])
            return 0;
        i++;
    }
    return 1;
}