/*
---------------------------------------------------------
 Project Name : Cinema Ticket Booking Mini System
 Description  :
    This project simulates a cinema ticket booking system.
    Users can book tickets, cancel bookings, update booking
    details, search for a customer, and display all booked
    tickets.

 Features :
    - Book a ticket
    - Cancel a ticket
    - Update booking details
    - Search customer by name
    - Show all booked tickets
    - Uses only arrays and functions (ITC Level)

 Technologies Used :
    - C++
    - iostream
    - Character Arrays (2D)
    - Functions
    - Menu-driven System

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void initialize(char customerNames[][50], int seatNumbers[], int size);
void bookTicket(char customerNames[][50], int seatNumbers[], int size, int &count);
void cancelTicket(char customerNames[][50], int seatNumbers[], int &count);
void updateBooking(char customerNames[][50], int seatNumbers[], int count);
void searchCustomer(char customerNames[][50], int seatNumbers[], int count);
void showAll(char customerNames[][50], int seatNumbers[], int count);

// String helpers
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50; // Max 50 tickets
    char customerNames[size][50];
    int seatNumbers[size];
    int count = 0;

    initialize(customerNames, seatNumbers, size);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "         CINEMA TICKET BOOKING SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Update Booking\n";
        cout << "4. Search Customer by Name\n";
        cout << "5. Show All Tickets\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: bookTicket(customerNames, seatNumbers, size, count); break;
            case 2: cancelTicket(customerNames, seatNumbers, count); break;
            case 3: updateBooking(customerNames, seatNumbers, count); break;
            case 4: searchCustomer(customerNames, seatNumbers, count); break;
            case 5: showAll(customerNames, seatNumbers, count); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char customerNames[][50], int seatNumbers[], int size)
{
    for(int i = 0; i < size; i++)
    {
        customerNames[i][0] = '\0';
        seatNumbers[i] = 0;
    }
}

// Book a ticket
void bookTicket(char customerNames[][50], int seatNumbers[], int size, int &count)
{
    if(count >= size)
    {
        cout << "No more seats available!" << endl;
        return;
    }

    cout << "Enter customer name: ";
    cin.getline(customerNames[count], 50);

    cout << "Enter seat number: ";
    cin >> seatNumbers[count];
    cin.ignore();

    count++;
    cout << "Ticket booked successfully!" << endl;
}

// Cancel ticket
void cancelTicket(char customerNames[][50], int seatNumbers[], int &count)
{
    if(count == 0)
    {
        cout << "No tickets to cancel!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter customer name to cancel ticket: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(customerNames[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(customerNames[j], customerNames[j + 1]);
                seatNumbers[j] = seatNumbers[j + 1];
            }
            count--;
            cout << "Ticket cancelled successfully!" << endl;
            return;
        }
    }

    cout << "Customer not found!" << endl;
}

// Update booking
void updateBooking(char customerNames[][50], int seatNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No bookings to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter customer name to update booking: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(customerNames[i], temp))
        {
            cout << "Enter new customer name: ";
            cin.getline(customerNames[i], 50);

            cout << "Enter new seat number: ";
            cin >> seatNumbers[i];
            cin.ignore();

            cout << "Booking updated successfully!" << endl;
            return;
        }
    }

    cout << "Customer not found!" << endl;
}

// Search customer
void searchCustomer(char customerNames[][50], int seatNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No tickets to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter customer name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(customerNames[i], temp))
        {
            cout << "\n--- Customer Found ---\n";
            cout << "Name       : " << customerNames[i] << endl;
            cout << "Seat No.   : " << seatNumbers[i] << endl;
            return;
        }
    }

    cout << "Customer not found!" << endl;
}

// Show all tickets
void showAll(char customerNames[][50], int seatNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No tickets booked." << endl;
        return;
    }

    cout << "\n--- All Booked Tickets ---\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Record " << i+1 << endl;
        cout << "Customer Name : " << customerNames[i] << endl;
        cout << "Seat Number   : " << seatNumbers[i] << endl;
        cout << "---------------------------\n";
    }
}

// Copy string manually
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