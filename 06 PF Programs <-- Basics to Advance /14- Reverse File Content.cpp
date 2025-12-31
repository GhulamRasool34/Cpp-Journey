/*
---------------------------------------------------------
 Project Name : Reverse File Content
 Description  :
    Reverses the entire content of a file (character-wise)
    and writes to reversed.txt.

 Features :
    - Reads full file into buffer then reverses

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

int main()
{
    char fname[100];
    cout << "Enter filename: ";
    cin.getline(fname,100);

    ifstream fin(fname, ios::binary);
    if(!fin) { cout << "File not found.\n"; return 0; }

    // read all into dynamic char buffer
    fin.seekg(0, ios::end);
    int len = (int)fin.tellg();
    fin.seekg(0, ios::beg);

    if(len <= 0) { cout << "Empty file.\n"; fin.close(); return 0; }

    char *buf = new char[len+1];
    int i = 0;
    char ch;
    while(fin.get(ch)) { buf[i++] = ch; }
    buf[i] = '\0';
    fin.close();

    ofstream fout("reversed.txt", ios::binary);
    for(int j = len-1; j >= 0; j--) fout.put(buf[j]);
    fout.close();

    delete [] buf;
    cout << "Reversed content written to reversed.txt\n";
    return 0;
}
