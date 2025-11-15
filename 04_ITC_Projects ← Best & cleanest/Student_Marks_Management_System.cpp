/*
    Student Marks Management System

    This program allows the user to enter the names and marks of multiple students.
    It stores all names in a 2D character array and calculates the total and average marks.
    
    Main Concepts Used:
        - 2D character arrays for storing full names
        - getline() for reading names with spaces
        - Functions for input, calculation, and displaying results
        - Passing arrays to functions
        - Using reference variables to return multiple values

    Functions:
        inputData()        → Takes student names and marks
        calculateResults() → Calculates total and average marks
        displayData()      → Displays each student's information and final results
*/

#include <iostream>
using namespace std;

// Function prototypes
void inputData(char names[][50], int marks[], int n);
void calculateResults(int marks[], int n, int &total, float &average);
void displayData(char names[][50], int marks[], int n, int total, float average);

int main()
{
    const int size = 100;
    char names[size][50];
    int marks[size];
    int n, total;
    float average;

    cout << "Enter number of students(1 - 100): ";
    cin >> n;

    cin.ignore(); 

    inputData(names, marks, n);
    calculateResults(marks, n, total, average);
    displayData(names, marks, n, total, average);

    return 0;
}

// Function Definitions
void inputData(char names[][50], int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names[i], 50); 

        cout << "Enter marks: ";
        cin >> marks[i];

        cin.ignore(); 
    }
}

void calculateResults(int marks[], int n, int &total, float &average)
{
    total = 0;
    for (int i = 0; i < n; i++)
        total += marks[i];

    average = (float)total / n;
}

void displayData(char names[][50], int marks[], int n, int total, float average)
{
    cout << "\n--- Student Report ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << names[i] << endl;
        cout << "Marks: " << marks[i] << endl;
    }

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
}