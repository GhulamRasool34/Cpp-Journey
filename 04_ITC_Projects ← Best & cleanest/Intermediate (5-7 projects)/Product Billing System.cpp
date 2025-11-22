/*
---------------------------------------------------------
 Project Name : Product Billing System
 Description  :
    This project simulates a simple billing system for a
    store. The user can add products to the bill, remove
    products, view the current bill, and calculate total
    amount. Each product has a name, quantity, and price.

 Features :
    - Add Product to Bill
    - Remove Product from Bill
    - View Current Bill
    - Calculate Total Amount
    - ITC-level, uses arrays, char arrays, and functions

 Technologies Used :
    - C++
    - iostream
    - Character arrays (2D)
    - Arrays for quantity and price
    - Functions
    - Menu-driven System

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void addProduct(char names[][50], int quantities[], float prices[], int &count);
void removeProduct(char names[][50], int quantities[], float prices[], int &count);
void showBill(char names[][50], int quantities[], float prices[], int count);
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    char names[50][50];     // Product names
    int quantities[50];     // Quantities
    float prices[50];       // Price per unit
    int count = 0;          // Number of products in bill
    int choice;

    cout << "\n-------- PRODUCT BILLING SYSTEM --------\n";

    do
    {
        cout << "\n1. Add Product\n";
        cout << "2. Remove Product\n";
        cout << "3. Show Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addProduct(names, quantities, prices, count); break;
            case 2: removeProduct(names, quantities, prices, count); break;
            case 3: showBill(names, quantities, prices, count); break;
            case 4: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}

// Add product to bill
void addProduct(char names[][50], int quantities[], float prices[], int &count)
{
    if(count >= 50)
    {
        cout << "Bill is full! Cannot add more products." << endl;
        return;
    }

    cout << "Enter product name: ";
    cin.getline(names[count], 50);

    cout << "Enter quantity: ";
    cin >> quantities[count];
    cin.ignore();

    cout << "Enter price per unit: ";
    cin >> prices[count];
    cin.ignore();

    count++;
    cout << "Product added to bill successfully!" << endl;
}

// Remove product from bill
void removeProduct(char names[][50], int quantities[], float prices[], int &count)
{
    if(count == 0)
    {
        cout << "No products to remove!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter product name to remove: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j+1]);
                quantities[j] = quantities[j+1];
                prices[j] = prices[j+1];
            }
            count--;
            cout << "Product removed successfully!" << endl;
            return;
        }
    }

    cout << "Product not found!" << endl;
}

// Show bill
void showBill(char names[][50], int quantities[], float prices[], int count)
{
    if(count == 0)
    {
        cout << "No products in the bill yet." << endl;
        return;
    }

    float total = 0.0;
    cout << "\n--- CURRENT BILL ---\n";
    for(int i = 0; i < count; i++)
    {
        float subtotal = quantities[i] * prices[i];
        total += subtotal;
        cout << i+1 << ". " << names[i] << " | Qty: " << quantities[i] 
             << " | Unit Price: " << prices[i] << " | Subtotal: " << subtotal << endl;
    }
    cout << "--------------------------\n";
    cout << "TOTAL AMOUNT: " << total << endl;
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