/*
---------------------------------------------------------
 Project Name : Hostel Room Allocation System
 Description  :
    This project manages simple hostel room allocations.
    The system allows adding a student to a room, removing
    a student, updating room or student details, searching
    for a student by name, and displaying all room records.

 Features :
    - Allocate a room to a student
    - Remove a student from a room
    - Update student room or details
    - Search student by name
    - Show all hostel room records
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
void initialize(char names[][50], int room[], int size);
void allocateRoom(char names[][50], int room[], int size, int &count);
void removeStudent(char names[][50], int room[], int &count);
void updateStudent(char names[][50], int room[], int count);
void searchStudent(char names[][50], int room[], int count);
void showAll(char names[][50], int room[], int count);

// String helper functions
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char names[size][50];
    int room[size];
    int count = 0;

    initialize(names, room, size);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "         HOSTEL ROOM ALLOCATION SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Allocate Room\n";
        cout << "2. Remove Student\n";
        cout << "3. Update Student Details\n";
        cout << "4. Search Student by Name\n";
        cout << "5. Show All Records\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: allocateRoom(names, room, size, count); break;
            case 2: removeStudent(names, room, count); break;
            case 3: updateStudent(names, room, count); break;
            case 4: searchStudent(names, room, count); break;
            case 5: showAll(names, room, count); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid option! Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], int room[], int size)
{
    for(int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        room[i] = 0;
    }
}

// Allocate a new room to a student
void allocateRoom(char names[][50], int room[], int size, int &count)
{
    if(count >= size)
    {
        cout << "Hostel is full! Cannot allocate more rooms." << endl;
        return;
    }

    cout << "Enter student name: ";
    cin.getline(names[count], 50);

    cout << "Enter room number: ";
    cin >> room[count];
    cin.ignore();

    count++;
    cout << "Room allocated successfully!" << endl;
}

// Remove student
void removeStudent(char names[][50], int room[], int &count)
{
    if(count == 0)
    {
        cout << "No records to remove!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to remove: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j + 1]);
                room[j] = room[j + 1];
            }

            count--;
            cout << "Student removed successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Update student details
void updateStudent(char names[][50], int room[], int count)
{
    if(count == 0)
    {
        cout << "No records to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to update: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            cout << "Enter new name: ";
            cin.getline(names[i], 50);

            cout << "Enter new room number: ";
            cin >> room[i];
            cin.ignore();

            cout << "Record updated successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Search for a student
void searchStudent(char names[][50], int room[], int count)
{
    if(count == 0)
    {
        cout << "No students available to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            cout << "\n--- Student Found ---\n";
            cout << "Name  : " << names[i] << endl;
            cout << "Room  : " << room[i] << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Display all students
void showAll(char names[][50], int room[], int count)
{
    if(count == 0)
    {
        cout << "No records to display." << endl;
        return;
    }

    cout << "\n--- Hostel Room Records ---\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Record " << i + 1 << endl;
        cout << "Name : " << names[i] << endl;
        cout << "Room : " << room[i] << endl;
        cout << "---------------------------\n";
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