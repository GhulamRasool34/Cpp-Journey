/*
---------------------------------------------------------
 Project Name : Student Marks Calculator
 Description  :
    This project calculates the total marks, average, and
    percentage of a student based on marks entered by the
    user. The user inputs marks of 3 subjects and the
    program displays the final results.

 Features :
    - Enter marks of 3 subjects
    - Calculate total marks
    - Calculate average marks
    - Calculate percentage
    - Simple and easy ITC-level program

 Technologies Used :
    - C++
    - iostream
    - Basic arithmetic operations
    - Functions

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Prototypes
void inputMarks(int marks[]);
int calculateTotal(int marks[]);
float calculateAverage(int total);
float calculatePercentage(int total);

int main()
{
    int marks[3];
    
    cout << "\n----- STUDENT MARKS CALCULATOR -----\n";

    inputMarks(marks);

    int total = calculateTotal(marks);
    float avg = calculateAverage(total);
    float percent = calculatePercentage(total);

    cout << "\n--- RESULT ---\n";
    cout << "Total Marks     : " << total << endl;
    cout << "Average Marks   : " << avg << endl;
    cout << "Percentage      : " << percent << "%" << endl;

    return 0;
}

// Input marks
void inputMarks(int marks[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Calculate total
int calculateTotal(int marks[])
{
    return marks[0] + marks[1] + marks[2];
}

// Calculate average
float calculateAverage(int total)
{
    return total / 3.0;
}

// Calculate percentage
float calculatePercentage(int total)
{
    return (total / 300.0) * 100; // Assuming each subject is out of 100
}