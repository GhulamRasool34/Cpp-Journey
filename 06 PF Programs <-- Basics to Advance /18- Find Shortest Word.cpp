/*
---------------------------------------------------------
 Project Name : Find Shortest Word
 Description  :
    Finds the shortest non-empty word in the file.

 Features :
    - Tracks minimum length word

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

void extractWord(const char line[], int &i, char w[])
{
    int j=0;
    while(line[i] != '\0' && line[i] != ' ' && line[i] != '\t' && line[i] != '\r')
    {
        w[j++] = line[i++];
    }
    w[j] = '\0';
    if(line[i] != '\0') i++;
}

int strlenManual(const char s[])
{
    int i=0; while(s[i] != '\0') i++; return i;
}

int main()
{
    char fname[100];
    cout << "Enter filename: ";
    cin.getline(fname,100);
    ifstream fin(fname);
    if(!fin) { cout << "File not found.\n"; return 0; }

    char line[400];
    char shortest[200]; shortest[0] = '\0';
    while(true)
    {
        fin.getline(line,400);
        if(fin.eof()) break;
        int i=0;
        while(line[i] != '\0')
        {
            if(line[i] != ' ' && line[i] != '\t')
            {
                char w[200];
                extractWord(line,i,w);
                int wl = strlenManual(w);
                if(wl>0 && (shortest[0]=='\0' || wl < strlenManual(shortest)))
                {
                    int k=0; while(w[k] != '\0') { shortest[k] = w[k]; k++; } shortest[k] = '\0';
                }
            }
            else i++;
        }
    }
    fin.close();
    if(shortest[0] == '\0') cout << "No words found.\n";
    else cout << "Shortest word: " << shortest << "\n";
    return 0;
}
