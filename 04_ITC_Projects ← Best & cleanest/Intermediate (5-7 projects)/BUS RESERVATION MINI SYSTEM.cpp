/*
-------------------------------------------
 Project Name : Bus Reservation Mini System
 Description  :
    This project simulates a simple bus seat
    reservation system. The user can view the
    bus seat layout, reserve a seat, cancel a
    reservation, and display all reserved seats.

 Features :
    - Display seat chart (reserved / empty)
    - Reserve a seat by entering seat number
    - Cancel a seat reservation
    - Display all reserved seats with passenger names

 Technologies Used :
    - C++
    - iostream
    - 1D and 2D character arrays
    - Functions
    - Menu driven system

 Author : Ghulam Rasool
 Github : GhulamRasool34
-------------------------------------------
*/

#include <iostream>
using namespace std;

// Function prototypes
void initializeSeats(char names[][50], int seats[], int size);
void displaySeats(int seats[], int size);
void reserveSeat(char names[][50], int seats[], int size);
void cancelSeat(char names[][50], int seats[], int size);
void showReserved(char names[][50], int seats[], int size);
int namesEqual(const char a[], const char b[]);

int main()
{
    const int size = 40; 
    int seats[size];
    char passengerNames[size][50];

    initializeSeats(passengerNames, seats, size);

    int choice = 0;
    do
    {
        cout << "\n----------------------------------\n";
        cout << "      BUS RESERVATION SYSTEM\n";
        cout << "----------------------------------\n";
        cout << "1. Display Seat Chart\n";
        cout << "2. Reserve a Seat\n";
        cout << "3. Cancel Reservation\n";
        cout << "4. Show All Reserved Seats\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            displaySeats(seats, size);
            break;

        case 2:
            reserveSeat(passengerNames, seats, size);
            break;

        case 3:
            cancelSeat(passengerNames, seats, size);
            break;

        case 4:
            showReserved(passengerNames, seats, size);
            break;

        case 5:
            cout << "Exiting system..." << endl;
            break;

        default:
            cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 5);

    return 0;
}

void initializeSeats(char names[][50], int seats[], int size)
{
    for (int i = 0; i < size; i++)
    {
        seats[i] = 0;      // 0 means empty
        names[i][0] = '\0'; // empty string
    }
}

void displaySeats(int seats[], int size)
{
    cout << "\n--- BUS SEAT CHART (40 seats) ---\n";

    for (int i = 0; i < size; i++)
    {
        if (i % 4 == 0)
            cout << endl;

        if (seats[i] == 0)
            cout << "[" << i + 1 << ": Empty]   ";
        else
            cout << "[" << i + 1 << ": Full]    ";
    }
    cout << endl;
}

void reserveSeat(char names[][50], int seats[], int size)
{
    int seatNo;
    cout << "\nEnter seat number to reserve (1 - 40): ";
    cin >> seatNo;
    cin.ignore();

    if (seatNo < 1 || seatNo > size)
    {
        cout << "Invalid seat number!" << endl;
        return;
    }

    int index = seatNo - 1;

    if (seats[index] == 1)
    {
        cout << "Seat already reserved!" << endl;
        return;
    }

    cout << "Enter passenger name: ";
    cin.getline(names[index], 50);

    seats[index] = 1;

    cout << "Seat " << seatNo << " reserved successfully!" << endl;
}

void cancelSeat(char names[][50], int seats[], int size)
{
    int seatNo;
    cout << "\nEnter seat number to cancel (1 - 40): ";
    cin >> seatNo;
    cin.ignore();

    if (seatNo < 1 || seatNo > size)
    {
        cout << "Invalid seat number!" << endl;
        return;
    }

    int index = seatNo - 1;

    if (seats[index] == 0)
    {
        cout << "Seat is already empty!" << endl;
        return;
    }

    seats[index] = 0;
    names[index][0] = '\0';

    cout << "Reservation for seat " << seatNo << " has been cancelled!" << endl;
}

void showReserved(char names[][50], int seats[], int size)
{
    cout << "\n--- Reserved Seats List ---\n";

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 1)
        {
            cout << "Seat " << i + 1 << " | Passenger: " << names[i] << endl;
            found = 1;
        }
    }

    if (!found)
        cout << "No seats reserved yet." << endl;
}

// Simple character array comparison
int namesEqual(const char a[], const char b[])
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