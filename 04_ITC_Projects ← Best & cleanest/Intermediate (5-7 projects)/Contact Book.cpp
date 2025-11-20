/*
---------------------------------------------------------
 Project Name : Contact Book
 Description  :
    This project manages a simple contact book. The user
    can add contacts, delete contacts, search for a
    contact by name, and display all saved contacts.
    It uses arrays and character arrays to store data.

 Features :
    - Add Contact (Name + Phone Number)
    - Delete Contact by Name
    - Search Contact by Name
    - Display All Contacts
    - ITC-level, simple array-based program

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
void initialize(char names[][50], char phones[][20], int size);
void addContact(char names[][50], char phones[][20], int size, int &count);
void deleteContact(char names[][50], char phones[][20], int &count);
void searchContact(char names[][50], char phones[][20], int count);
void showAllContacts(char names[][50], char phones[][20], int count);
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char names[size][50];
    char phones[size][20];
    int count = 0;

    initialize(names, phones, size);

    int choice = 0;
    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "           CONTACT BOOK SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Contact\n";
        cout << "2. Delete Contact\n";
        cout << "3. Search Contact\n";
        cout << "4. Show All Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addContact(names, phones, size, count); break;
            case 2: deleteContact(names, phones, count); break;
            case 3: searchContact(names, phones, count); break;
            case 4: showAllContacts(names, phones, count); break;
            case 5: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Initialize arrays
void initialize(char names[][50], char phones[][20], int size)
{
    for(int i = 0; i < size; i++)
    {
        names[i][0] = '\0';
        phones[i][0] = '\0';
    }
}

// Add Contact
void addContact(char names[][50], char phones[][20], int size, int &count)
{
    if(count >= size)
    {
        cout << "Contact book is full!" << endl;
        return;
    }

    cout << "Enter contact name: ";
    cin.getline(names[count], 50);

    cout << "Enter phone number: ";
    cin.getline(phones[count], 20);

    count++;
    cout << "Contact added successfully!" << endl;
}

// Delete Contact
void deleteContact(char names[][50], char phones[][20], int &count)
{
    if(count == 0)
    {
        cout << "No contacts to delete!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter contact name to delete: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(names[j], names[j+1]);
                copyStr(phones[j], phones[j+1]);
            }
            count--;
            cout << "Contact deleted successfully!" << endl;
            return;
        }
    }

    cout << "Contact not found!" << endl;
}

// Search Contact
void searchContact(char names[][50], char phones[][20], int count)
{
    if(count == 0)
    {
        cout << "No contacts to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter contact name to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(names[i], temp))
        {
            cout << "\n--- Contact Found ---\n";
            cout << "Name  : " << names[i] << endl;
            cout << "Phone : " << phones[i] << endl;
            return;
        }
    }

    cout << "Contact not found!" << endl;
}

// Show All Contacts
void showAllContacts(char names[][50], char phones[][20], int count)
{
    if(count == 0)
    {
        cout << "No contacts available." << endl;
        return;
    }

    cout << "\n--- All Contacts ---\n";
    for(int i = 0; i < count; i++)
    {
        cout << "Contact " << i+1 << endl;
        cout << "Name  : " << names[i] << endl;
        cout << "Phone : " << phones[i] << endl;
        cout << "-------------------" << endl;
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