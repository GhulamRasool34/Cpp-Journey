/*
---------------------------------------------------------
 Project Name : Hospital Patient Record Management System
 Description  :
    This project manages basic patient records inside a
    hospital. The user can add a patient, delete a patient,
    update patient details, search a patient, and show all
    patient records.

 Features :
    - Add Patient
    - Delete Patient
    - Update Patient Information
    - Search Patient by Name
    - Display All Patients
    - Uses only arrays and simple functions (ITC Level)

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
void initialize(char names[][50], int ages[], char diseases[][50], int size);
void addPatient(char names[][50], int ages[], char diseases[][50], int size, int &count);
void deletePatient(char names[][50], int ages[], char diseases[][50], int &count);
void updatePatient(char names[][50], int ages[], char diseases[][50], int count);
void searchPatient(char names[][50], int ages[], char diseases[][50], int count);
void showAll(char names[][50], int ages[], char diseases[][50], int count);

// String copy helper
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50; // Max 50 patients
    char names[size][50];
    char diseases[size][50];
    int ages[size];
    int count = 0;

    initialize(names, ages, diseases, size);

    int choice = 0;

    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "   HOSPITAL PATIENT RECORD MANAGEMENT\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Patient\n";
        cout << "2. Delete Patient\n";
        cout << "3. Update Patient Information\n";
        cout << "4. Search Patient by Name\n";
        cout << "5. Show All Patients\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1: addPatient(names, ages, diseases, size, count); break;
        case 2: deletePatient(names, ages, diseases, count); break;
        case 3: updatePatient(names, ages, diseases, count); break;
        case 4: searchPatient(names, ages, diseases, count); break;
        case 5: showAll(names, ages, diseases, count); break;
        case 6: cout << "Exiting system..." << endl; break;
        default: cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 6);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], int ages[], char diseases[][50], int size)
{
    for (int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        diseases[i][0] = '\0';
        ages[i] = 0;
    }
}

// Add Patient
void addPatient(char names[][50], int ages[], char diseases[][50], int size, int &count)
{
    if (count >= size)
    {
        cout << "Record is full! Cannot add more patients." << endl;
        return;
    }

    cout << "Enter patient name: ";
    cin.getline(names[count], 50);

    cout << "Enter patient age: ";
    cin >> ages[count];
    cin.ignore();

    cout << "Enter disease: ";
    cin.getline(diseases[count], 50);

    cout << "Patient added successfully!" << endl;
    count++;
}

// Delete Patient
void deletePatient(char names[][50], int ages[], char diseases[][50], int &count)
{
    if (count == 0)
    {
        cout << "No records to delete!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter patient name to delete: ";
    cin.getline(temp, 50);

    for (int i = 0; i < count; i++)
    {
        if (strEqual(names[i], temp))
        {
            for (int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j + 1]);
                copyStr(diseases[j], diseases[j + 1]);
                ages[j] = ages[j + 1];
            }
            count--;
            cout << "Patient record deleted successfully!" << endl;
            return;
        }
    }

    cout << "Patient not found!" << endl;
}

// Update Patient
void updatePatient(char names[][50], int ages[], char diseases[][50], int count)
{
    if (count == 0)
    {
        cout << "No records to update!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter patient name to update: ";
    cin.getline(temp, 50);

    for (int i = 0; i < count; i++)
    {
        if (strEqual(names[i], temp))
        {
            cout << "Enter new name: ";
            cin.getline(names[i], 50);

            cout << "Enter new age: ";
            cin >> ages[i];
            cin.ignore();

            cout << "Enter new disease: ";
            cin.getline(diseases[i], 50);

            cout << "Record updated successfully!" << endl;
            return;
        }
    }

    cout << "Patient not found!" << endl;
}

// Search Patient
void searchPatient(char names[][50], int ages[], char diseases[][50], int count)
{
    if (count == 0)
    {
        cout << "No patients to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter patient name to search: ";
    cin.getline(temp, 50);

    for (int i = 0; i < count; i++)
    {
        if (strEqual(names[i], temp))
        {
            cout << "\n--- Patient Found ---\n";
            cout << "Name    : " << names[i] << endl;
            cout << "Age     : " << ages[i] << endl;
            cout << "Disease : " << diseases[i] << endl;
            return;
        }
    }

    cout << "Patient not found!" << endl;
}

// Show All
void showAll(char names[][50], int ages[], char diseases[][50], int count)
{
    if (count == 0)
    {
        cout << "No patient records available." << endl;
        return;
    }

    cout << "\n--- All Patient Records ---\n";

    for (int i = 0; i < count; i++)
    {
        cout << "Record " << i + 1 << endl;
        cout << "Name    : " << names[i] << endl;
        cout << "Age     : " << ages[i] << endl;
        cout << "Disease : " << diseases[i] << endl;
        cout << "---------------------------" << endl;
    }
}

// Copy string manually
void copyStr(char dest[], const char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Compare two strings
int strEqual(const char a[], const char b[])
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