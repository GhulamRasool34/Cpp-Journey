/*
---------------------------------------------------------
 Project Name : Library Book Inventory System
 Description  :
    This project manages a simple library book inventory.
    The user can add new books, delete books, search for
    a book by title, and display all available books.
    Each book has a title, author, and book ID.

 Features :
    - Add Book (Title, Author, ID)
    - Delete Book by Title
    - Search Book by Title
    - Display All Books
    - Uses only arrays and simple functions (ITC Level)

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
void initialize(char titles[][50], char authors[][50], int ids[], int size);
void addBook(char titles[][50], char authors[][50], int ids[], int size, int &count);
void deleteBook(char titles[][50], char authors[][50], int ids[], int &count);
void searchBook(char titles[][50], char authors[][50], int ids[], int count);
void showAllBooks(char titles[][50], char authors[][50], int ids[], int count);
void copyStr(char dest[], const char src[]);
int strEqual(const char a[], const char b[]);

int main()
{
    const int size = 50;
    char titles[size][50];
    char authors[size][50];
    int ids[size];
    int count = 0;

    initialize(titles, authors, ids, size);

    int choice = 0;
    do
    {
        cout << "\n-------------------------------------------\n";
        cout << "         LIBRARY BOOK INVENTORY SYSTEM\n";
        cout << "-------------------------------------------\n";
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Search Book\n";
        cout << "4. Show All Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: addBook(titles, authors, ids, size, count); break;
            case 2: deleteBook(titles, authors, ids, count); break;
            case 3: searchBook(titles, authors, ids, count); break;
            case 4: showAllBooks(titles, authors, ids, count); break;
            case 5: cout << "Exiting system..." << endl; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Initialize arrays
void initialize(char titles[][50], char authors[][50], int ids[], int size)
{
    for(int i = 0; i < size; i++)
    {
        titles[i][0] = '\0';
        authors[i][0] = '\0';
        ids[i] = 0;
    }
}

// Add Book
void addBook(char titles[][50], char authors[][50], int ids[], int size, int &count)
{
    if(count >= size)
    {
        cout << "Inventory full! Cannot add more books." << endl;
        return;
    }

    cout << "Enter book title: ";
    cin.getline(titles[count], 50);

    cout << "Enter author name: ";
    cin.getline(authors[count], 50);

    cout << "Enter book ID: ";
    cin >> ids[count];
    cin.ignore();

    count++;
    cout << "Book added successfully!" << endl;
}

// Delete Book
void deleteBook(char titles[][50], char authors[][50], int ids[], int &count)
{
    if(count == 0)
    {
        cout << "No books to delete!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter book title to delete: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(titles[i], temp))
        {
            for(int j = i; j < count - 1; j++)
            {
                copyStr(titles[j], titles[j+1]);
                copyStr(authors[j], authors[j+1]);
                ids[j] = ids[j+1];
            }
            count--;
            cout << "Book deleted successfully!" << endl;
            return;
        }
    }

    cout << "Book not found!" << endl;
}

// Search Book
void searchBook(char titles[][50], char authors[][50], int ids[], int count)
{
    if(count == 0)
    {
        cout << "No books to search!" << endl;
        return;
    }

    char temp[50];
    cout << "Enter book title to search: ";
    cin.getline(temp, 50);

    for(int i = 0; i < count; i++)
    {
        if(strEqual(titles[i], temp))
        {
            cout << "\n--- Book Found ---\n";
            cout << "Title  : " << titles[i] << endl;
            cout << "Author : " << authors[i] << endl;
            cout << "Book ID: " << ids[i] << endl;
            return;
        }
    }

    cout << "Book not found!" << endl;
}

// Show All Books
void showAllBooks(char titles[][50], char authors[][50], int ids[], int count)
{
    if(count == 0)
    {
        cout << "No books available." << endl;
        return;
    }

    cout << "\n--- All Books ---\n";
    for(int i = 0; i < count; i++)
    {
        cout << "Book " << i+1 << endl;
        cout << "Title  : " << titles[i] << endl;
        cout << "Author : " << authors[i] << endl;
        cout << "Book ID: " << ids[i] << endl;
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