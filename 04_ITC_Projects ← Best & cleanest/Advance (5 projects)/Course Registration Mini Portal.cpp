/*
---------------------------------------------------------
 Project Name : Course Registration Mini Portal
 Description  :
    This project allows students to register for courses.
    Users can add a course to a student, remove a course,
    update course details, search for a student, and
    display all registered students with their courses.

 Features :
    - Add course for a student
    - Remove course from a student
    - Update student or course details
    - Search student by name
    - Show all registered students and courses
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
void initialize(char students[][50], char courses[][50], int size);
void addRegistration(char students[][50], char courses[][50], int size, int &count);
void removeRegistration(char students[][50], char courses[][50], int &count);
void updateRegistration(char students[][50], char courses[][50], int count);
void searchStudent(char students[][50], char courses[][50], int count);
void showAll(char students[][50], char courses[][50], int count);

// String helpers
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char students[size][50];
    char courses[size][50];
    int count = 0;

    initialize(students, courses, size);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "       COURSE REGISTRATION PORTAL\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Registration\n";
        cout << "2. Remove Registration\n";
        cout << "3. Update Registration\n";
        cout << "4. Search Student by Name\n";
        cout << "5. Show All Registrations\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addRegistration(students, courses, size, count); break;
            case 2: removeRegistration(students, courses, count); break;
            case 3: updateRegistration(students, courses, count); break;
            case 4: searchStudent(students, courses, count); break;
            case 5: showAll(students, courses, count); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid option! Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char students[][50], char courses[][50], int size)
{
    for(int i = 0; i < size; i++)
    {
        students[i][0] = '\0';
        courses[i][0] = '\0';
    }
}

// Add registration
void addRegistration(char students[][50], char courses[][50], int size, int &count)
{
    if(count >= size)
    {
        cout << "No more registrations can be added!" << endl;
        return;
    }

    cout << "Enter student name: ";
    cin.getline(students[count], 50);

    cout << "Enter course name: ";
    cin.getline(courses[count], 50);

    count++;
    cout << "Registration added successfully!" << endl;
}

// Remove registration
void removeRegistration(char students[][50], char courses[][50], int &count)
{
    if(count == 0)
    {
        cout << "No registrations to remove!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to remove registration: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(students[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(students[j], students[j + 1]);
                copyStr(courses[j], courses[j + 1]);
            }
            count--;
            cout << "Registration removed successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Update registration
void updateRegistration(char students[][50], char courses[][50], int count)
{
    if(count == 0)
    {
        cout << "No registrations to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to update: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(students[i], temp))
        {
            cout << "Enter new student name: ";
            cin.getline(students[i], 50);

            cout << "Enter new course name: ";
            cin.getline(courses[i], 50);

            cout << "Registration updated successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Search student
void searchStudent(char students[][50], char courses[][50], int count)
{
    if(count == 0)
    {
        cout << "No registrations to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(students[i], temp))
        {
            cout << "\n--- Student Found ---\n";
            cout << "Student : " << students[i] << endl;
            cout << "Course  : " << courses[i] << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Show all registrations
void showAll(char students[][50], char courses[][50], int count)
{
    if(count == 0)
    {
        cout << "No registrations available!" << endl;
        return;
    }

    cout << "\n--- All Registrations ---\n";

    for(int i = 0; i < count; i++)
    {
        cout << "Record " << i + 1 << endl;
        cout << "Student : " << students[i] << endl;
        cout << "Course  : " << courses[i] << endl;
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