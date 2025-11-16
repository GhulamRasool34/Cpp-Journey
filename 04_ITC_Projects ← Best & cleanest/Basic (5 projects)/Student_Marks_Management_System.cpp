/*
-------------------------------------------
 Project Name : Student Management System
 Description  :
    This project allows the user to enter
    multiple students' names and marks using
    character arrays and integer arrays.
    It displays all records, calculates the
    total marks, average marks, highest marks,
    lowest marks, and also searches a student.

 Features :
    - Input student names (char array)
    - Input marks (int array)
    - Display all student data
    - Calculate total & average
    - Find highest and lowest marks
    - Search a student by name

 Technologies Used :
    - C++
    - iostream
    - Functions
    - Character array (2D)
    - Integer array (1D)

 Author : Ghulam Rasool
 Github : GhulamRasool34
-------------------------------------------
*/

#include <iostream>
using namespace std;

// Function prototypes
void inputData(char names[][50], int marks[], int n);
void displayData(char names[][50], int marks[], int n);
int totalMarks(int marks[], int n);
float averageMarks(int marks[], int n);
int highestMarks(int marks[], int n);
int lowestMarks(int marks[], int n);
void searchStudent(char names[][50], int marks[], int n);
int namesEqual(const char a[], const char b[]);

int main()
{
    int n = 0;
    cout << "Enter number of students (max 100): ";
    cin >> n;

    cin.ignore(); // IMPORTANT: remove leftover newline

    if (n <= 0 || n > 100)
    {
        cout << "Invalid! Number of students should be between 1 and 100." << endl;
        return 0;
    }

    char names[100][50];
    int marks[100];

    inputData(names, marks, n);
    displayData(names, marks, n);

    cout << "\nTotal Marks: " << totalMarks(marks, n) << endl;
    cout << "Average Marks: " << averageMarks(marks, n) << endl;
    cout << "Highest Marks: " << highestMarks(marks, n) << endl;
    cout << "Lowest Marks: " << lowestMarks(marks, n) << endl;

    searchStudent(names, marks, n);

    return 0;
}

void inputData(char names[][50], int marks[], int n)
{
    cout << "\n--- Enter Student Data ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names[i], 50); 

        cout << "Enter marks of " << names[i] << ": ";
        cin >> marks[i];
        cin.ignore();   
    }
}

void displayData(char names[][50], int marks[], int n)
{
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << names[i] << " | Marks: " << marks[i] << endl;
    }
}

int totalMarks(int marks[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += marks[i];
    return total;
}

float averageMarks(int marks[], int n)
{
    int sum = totalMarks(marks, n);
    float avg = sum / (float)n;
    return avg;
}

int highestMarks(int marks[], int n)
{
    int high = marks[0];
    for (int i = 1; i < n; i++)
        if (marks[i] > high)
            high = marks[i];
    return high;
}

int lowestMarks(int marks[], int n)
{
    int low = marks[0];
    for (int i = 1; i < n; i++)
        if (marks[i] < low)
            low = marks[i];
    return low;
}

// Compare two char arrays safely
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

void searchStudent(char names[][50], int marks[], int n)
{
    char searchName[50];
    cout << "\nEnter name to search: ";
    cin.getline(searchName, 50);

    for (int i = 0; i < n; i++)
    {
        if (namesEqual(names[i], searchName))
        {
            cout << "Student Found! Marks = " << marks[i] << endl;
            return;
        }
    }

    cout << "Student not found." << endl;
}