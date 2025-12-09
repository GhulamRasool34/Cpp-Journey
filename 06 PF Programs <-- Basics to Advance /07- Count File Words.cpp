/*
---------------------------------------------------------
 Project Name : Count File Words
 Description  :
    Counts words in a file using manual parsing.

 Features :
    - Counts words separated by spaces, tabs or newlines

 Technologies Used :
    - C++
    - iostream
    - fstream
    - Character processing

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int isSpace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' || c == '\r');
}

int main()
{
    char fname[100];

    cout << "Enter filename: ";
    cin.getline(fname, 100);

    ifstream fin(fname);
    if (!fin)
    {
        cout << "File not found.\n";
        return 0;
    }

    int words = 0;
    char ch;
    int inWord = 0;
    while (fin.get(ch))
    {
        if (!isSpace(ch))
        {
            if (!inWord)
            {
                words++;
                inWord = 1;
            }
        }
        else
            inWord = 0;
    }
    fin.close();
    cout << "Total words: " << words << endl;

    return 0;
}
