/*
---------------------------------------------------------
 Project Name : Hotel Room Booking Mini System
 Description  :
    This project simulates a simple hotel room booking system.
    Users can book a room, cancel a booking, update booking
    details, search for a guest, and display all booked rooms.

 Features :
    - Book a room
    - Cancel a room booking
    - Update booking details
    - Search guest by name
    - Show all booked rooms
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
void initialize(char guestNames[][50], int roomNumbers[], int size);
void bookRoom(char guestNames[][50], int roomNumbers[], int size, int &count);
void cancelBooking(char guestNames[][50], int roomNumbers[], int &count);
void updateBooking(char guestNames[][50], int roomNumbers[], int count);
void searchGuest(char guestNames[][50], int roomNumbers[], int count);
void showAll(char guestNames[][50], int roomNumbers[], int count);

// String helpers
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char guestNames[size][50];
    int roomNumbers[size];
    int count = 0;

    initialize(guestNames, roomNumbers, size);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "       HOTEL ROOM BOOKING SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Book a Room\n";
        cout << "2. Cancel Booking\n";
        cout << "3. Update Booking\n";
        cout << "4. Search Guest by Name\n";
        cout << "5. Show All Bookings\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: bookRoom(guestNames, roomNumbers, size, count); break;
            case 2: cancelBooking(guestNames, roomNumbers, count); break;
            case 3: updateBooking(guestNames, roomNumbers, count); break;
            case 4: searchGuest(guestNames, roomNumbers, count); break;
            case 5: showAll(guestNames, roomNumbers, count); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char guestNames[][50], int roomNumbers[], int size)
{
    for(int i = 0; i < size; i++)
    {
        guestNames[i][0] = '\0';
        roomNumbers[i] = 0;
    }
}

// Book a room
void bookRoom(char guestNames[][50], int roomNumbers[], int size, int &count)
{
    if(count >= size)
    {
        cout << "No more rooms available!" << endl;
        return;
    }

    cout << "Enter guest name: ";
    cin.getline(guestNames[count], 50);

    cout << "Enter room number: ";
    cin >> roomNumbers[count];
    cin.ignore();

    count++;
    cout << "Room booked successfully!" << endl;
}

// Cancel booking
void cancelBooking(char guestNames[][50], int roomNumbers[], int &count)
{
    if(count == 0)
    {
        cout << "No bookings to cancel!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter guest name to cancel booking: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(guestNames[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(guestNames[j], guestNames[j + 1]);
                roomNumbers[j] = roomNumbers[j + 1];
            }
            count--;
            cout << "Booking cancelled successfully!" << endl;
            return;
        }
    }

    cout << "Guest not found!" << endl;
}

// Update booking
void updateBooking(char guestNames[][50], int roomNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No bookings to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter guest name to update booking: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(guestNames[i], temp))
        {
            cout << "Enter new guest name: ";
            cin.getline(guestNames[i], 50);

            cout << "Enter new room number: ";
            cin >> roomNumbers[i];
            cin.ignore();

            cout << "Booking updated successfully!" << endl;
            return;
        }
    }

    cout << "Guest not found!" << endl;
}

// Search guest
void searchGuest(char guestNames[][50], int roomNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No bookings to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter guest name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(guestNames[i], temp))
        {
            cout << "\n--- Guest Found ---\n";
            cout << "Name       : " << guestNames[i] << endl;
            cout << "Room No.   : " << roomNumbers[i] << endl;
            return;
        }
    }

    cout << "Guest not found!" << endl;
}

// Show all bookings
void showAll(char guestNames[][50], int roomNumbers[], int count)
{
    if(count == 0)
    {
        cout << "No bookings available." << endl;
        return;
    }

    cout << "\n--- All Bookings ---\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Record " << i + 1 << endl;
        cout << "Guest Name : " << guestNames[i] << endl;
        cout << "Room No.   : " << roomNumbers[i] << endl;
        cout << "-------------------------" << endl;
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