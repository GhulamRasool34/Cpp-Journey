/*
---------------------------------------------------------
 Project Name : Simple Grade Book Manager
 Description  :
    This project manages student grades for multiple subjects.
    Users can add student records, update grades, search
    for a student, and display all students' grades.

 Features :
    - Add student with grades
    - Update student grades
    - Search student by name
    - Display all student records
    - Calculate total and average marks
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
void initialize(char names[][50], int grades[][5], int size, int subjects);
void addStudent(char names[][50], int grades[][5], int size, int subjects, int &count);
void updateGrades(char names[][50], int grades[][5], int count, int subjects);
void searchStudent(char names[][50], int grades[][5], int count, int subjects);
void showAll(char names[][50], int grades[][5], int count, int subjects);

// String helpers
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;       // Max 50 students
    const int subjects = 5;    // 5 subjects per student
    char names[size][50];
    int grades[size][subjects];
    int count = 0;

    initialize(names, grades, size, subjects);

    int choice;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "           GRADE BOOK MANAGER\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Student\n";
        cout << "2. Update Grades\n";
        cout << "3. Search Student by Name\n";
        cout << "4. Show All Records\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addStudent(names, grades, size, subjects, count); break;
            case 2: updateGrades(names, grades, count, subjects); break;
            case 3: searchStudent(names, grades, count, subjects); break;
            case 4: showAll(names, grades, count, subjects); break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 5);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], int grades[][5], int size, int subjects)
{
    for(int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        for(int j = 0; j < subjects; j++)
            grades[i][j] = 0;
    }
}

// Add student
void addStudent(char names[][50], int grades[][5], int size, int subjects, int &count)
{
    if(count >= size)
    {
        cout << "Cannot add more students!" << endl;
        return;
    }

    cout << "Enter student name: ";
    cin.getline(names[count], 50);

    for(int j = 0; j < subjects; j++)
    {
        cout << "Enter grade for subject " << j+1 << ": ";
        cin >> grades[count][j];
    }
    cin.ignore();

    count++;
    cout << "Student added successfully!" << endl;
}

// Update grades
void updateGrades(char names[][50], int grades[][5], int count, int subjects)
{
    if(count == 0)
    {
        cout << "No student records to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter student name to update grades: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = 0; j < subjects; j++)
            {
                cout << "Enter new grade for subject " << j+1 << ": ";
                cin >> grades[i][j];
            }
            cin.ignore();
            cout << "Grades updated successfully!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Search student
void searchStudent(char names[][50], int grades[][5], int count, int subjects)
{
    if(count == 0)
    {
        cout << "No student records to search!" << endl;
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
            cout << "Name: " << names[i] << endl;
            int total = 0;
            for(int j = 0; j < subjects; j++)
            {
                cout << "Subject " << j+1 << ": " << grades[i][j] << endl;
                total += grades[i][j];
            }
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << total / subjects << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Show all student records
void showAll(char names[][50], int grades[][5], int count, int subjects)
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
        cout << "Name: " << names[i] << endl;
        int total = 0;
        for(int j = 0; j < subjects; j++)
        {
            cout << "Subject " << j+1 << ": " << grades[i][j] << endl;
            total += grades[i][j];
        }
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << total / subjects << endl;
        cout << "--------------------------\n";
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