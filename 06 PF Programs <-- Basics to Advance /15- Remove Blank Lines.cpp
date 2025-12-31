/*
---------------------------------------------------------
 Project Name : Remove Blank Lines
 Description  :
    Removes blank lines from input file and writes back.

 Features :
    - Strips empty lines using temp file rewrite

 Technologies Used :
    - C++
    - iostream
    - fstream

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int isBlankLine(const char line[])
{
    int i=0;
    while(line[i] != '\0') { if(line[i] != ' ' && line[i] != '\t' && line[i] != '\r') return 0; i++; }
    return 1;
}

int main()
{
    char fname[100];
    cout << "Enter filename: ";
    cin.getline(fname,100);

    ifstream fin(fname);
    if(!fin) { cout << "File not found.\n"; return 0; }
    ofstream fout("temp.txt");

    char line[300];
    while(true)
    {
        fin.getline(line,300);
        if(fin.eof()) break;
        if(!isBlankLine(line)) fout << line << "\n";
    }

    fin.close(); fout.close();
    remove(fname);
    rename("temp.txt", fname);
    cout << "Blank lines removed.\n";
    return 0;
}
