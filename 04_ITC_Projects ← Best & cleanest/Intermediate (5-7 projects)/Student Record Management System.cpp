/*
---------------------------------------------------------
 Project Name : Student Record Management System
 Description  :
    This project manages basic student records. The user
    can add a student, delete a student, search for a
    student by name, and display all student records.
    Each student has a name, roll number, and marks.

 Features :
    - Add Student (Name, Roll No, Marks)
    - Delete Student by Name
    - Search Student by Name
    - Display All Students
    - ITC-level, uses arrays and simple functions

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
void initialize(char names[][50], int rollNos[], int marks[], int size);
void addStudent(char names[][50], int rollNos[], int marks[], int size, int &count);
void deleteStudent(char names[][50], int rollNos[], int marks[], int &count);
void searchStudent(char names[][50], int rollNos[], int marks[], int count);
void showAllStudents(char names[][50], int rollNos[], int marks[], int count);
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char names[size][50];
    int rollNos[size];
    int marks[size];
    int count = 0;

    initialize(names, rollNos, marks, size);

    int choice = 0;
    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "         STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. Search Student\n";
        cout << "4. Show All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addStudent(names, rollNos, marks, size, count); break;
            case 2: deleteStudent(names, rollNos, marks, count); break;
            case 3: searchStudent(names, rollNos, marks, count); break;
            case 4: showAllStudents(names, rollNos, marks, count); break;
            case 5: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], int rollNos[], int marks[], int size)
{
    for(int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        rollNos[i] = 0;
        marks[i] = 0;
    }
}

// Add Student
void addStudent(char names[][50], int rollNos[], int marks[], int size, int &count)
{
    if(count >= size)
    {
        cout << "Record is full! Cannot add more students." << endl;
        return;
    }

    cout << "Enter student name: ";
    cin.getline(names[count], 50);

    cout << "Enter roll number: ";
    cin >> rollNos[count];
    cin.ignore();

    cout << "Enter marks: ";
    cin >> marks[count];
    cin.ignore();

    count++;
    cout << "Student added successfully!" << endl;
}

// Delete Student
void deleteStudent(char names[][50], int rollNos[], int marks[], int &count)
{
    if(count == 0)
    {
        cout << "No students to delete!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to delete: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j+1]);
                rollNos[j] = rollNos[j+1];
                marks[j] = marks[j+1];
            }
            count--;
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Search Student
void searchStudent(char names[][50], int rollNos[], int marks[], int count)
{
    if(count == 0)
    {
        cout << "No students to search!" << endl;
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
            cout << "Name       : " << names[i] << endl;
            cout << "Roll No    : " << rollNos[i] << endl;
            cout << "Marks      : " << marks[i] << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Show All Students
void showAllStudents(char names[][50], int rollNos[], int marks[], int count)
{
    if(count == 0)
    {
        cout << "No student records available." << endl;
        return;
    }

    cout << "\n--- All Student Records ---\n";
    for(int i = 0; i < count; i++)
    {
        cout << "Student " << i+1 << endl;
        cout << "Name    : " << names[i] << endl;
        cout << "Roll No : " << rollNos[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
        cout << "---------------------------" << endl;
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