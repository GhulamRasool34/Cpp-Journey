/*
---------------------------------------------------------
 Project Name : Employee Attendance Tracking System
 Description  :
    This project manages simple employee attendance records.
    The system allows marking attendance, removing a record,
    updating employee details, searching an employee by name,
    and displaying all attendance records.

 Features :
    - Mark employee attendance
    - Remove an employee record
    - Update employee details
    - Search employee by name
    - Display all attendance records
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
void initialize(char names[][50], char status[][10], int size);
void markAttendance(char names[][50], char status[][10], int size, int &count);
void removeEmployee(char names[][50], char status[][10], int &count);
void updateEmployee(char names[][50], char status[][10], int count);
void searchEmployee(char names[][50], char status[][10], int count);
void showAll(char names[][50], char status[][10], int count);

// String helper functions
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char names[size][50];
    char status[size][10]; // "Present" or "Absent"
    int count = 0;

    initialize(names, status, size);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "        EMPLOYEE ATTENDANCE SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Mark Attendance\n";
        cout << "2. Remove Employee\n";
        cout << "3. Update Employee Details\n";
        cout << "4. Search Employee by Name\n";
        cout << "5. Show All Records\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: markAttendance(names, status, size, count); break;
            case 2: removeEmployee(names, status, count); break;
            case 3: updateEmployee(names, status, count); break;
            case 4: searchEmployee(names, status, count); break;
            case 5: showAll(names, status, count); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], char status[][10], int size)
{
    for(int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        status[i][0] = '\0';
    }
}

// Mark employee attendance
void markAttendance(char names[][50], char status[][10], int size, int &count)
{
    if(count >= size)
    {
        cout << "Cannot add more employees!" << endl;
        return;
    }

    cout << "Enter employee name: ";
    cin.getline(names[count], 50);

    cout << "Enter status (Present/Absent): ";
    cin.getline(status[count], 10);

    count++;
    cout << "Attendance marked successfully!" << endl;
}

// Remove employee
void removeEmployee(char names[][50], char status[][10], int &count)
{
    if(count == 0)
    {
        cout << "No records to remove!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter employee name to remove: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j + 1]);
                copyStr(status[j], status[j + 1]);
            }

            count--;
            cout << "Employee removed successfully!" << endl;
            return;
        }
    }

    cout << "Employee not found!" << endl;
}

// Update employee details
void updateEmployee(char names[][50], char status[][10], int count)
{
    if(count == 0)
    {
        cout << "No records to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter employee name to update: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            cout << "Enter new name: ";
            cin.getline(names[i], 50);

            cout << "Enter new status (Present/Absent): ";
            cin.getline(status[i], 10);

            cout << "Record updated successfully!" << endl;
            return;
        }
    }

    cout << "Employee not found!" << endl;
}

// Search employee
void searchEmployee(char names[][50], char status[][10], int count)
{
    if(count == 0)
    {
        cout << "No records to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter employee name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            cout << "\n--- Employee Found ---\n";
            cout << "Name   : " << names[i] << endl;
            cout << "Status : " << status[i] << endl;
            return;
        }
    }

    cout << "Employee not found!" << endl;
}

// Show all records
void showAll(char names[][50], char status[][10], int count)
{
    if(count == 0)
    {
        cout << "No attendance records available." << endl;
        return;
    }

    cout << "\n--- Employee Attendance Records ---\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Record " << i + 1 << endl;
        cout << "Name   : " << names[i] << endl;
        cout << "Status : " << status[i] << endl;
        cout << "-------------------------------\n";
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