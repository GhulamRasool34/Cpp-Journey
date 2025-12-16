/*
---------------------------------------------------------
 Project Name : Search Word In File
 Description  :
    Searches for a whole word in file and prints occurrences
    (line numbers where it appears).

 Features :
    - Word search using manual comparison
    - Case-sensitive (manual)

 Technologies Used :
    - C++
    - iostream
    - fstream
    - Character arrays

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int strEqual(const char a[], const char b[])
{
    int i=0;
    while(a[i]!='\0' || b[i]!='\0')
    {
        if(a[i]!=b[i]) return 0;
        i++;
    }
    return 1;
}

void extractWordAt(const char line[], int start, char word[])
{
    int i = start, j = 0;
    while(line[i] != '\0' && line[i] != ' ' && line[i] != '\t' && line[i] != '\r' && line[i] != '\n')
    {
        word[j++] = line[i++];
    }
    word[j] = '\0';
}

int main()
{
    char fname[100], key[50];
    cout << "Enter filename: ";
    cin.getline(fname,100);
    cout << "Enter word to search: ";
    cin.getline(key,50);

    ifstream fin(fname);
    if(!fin) { cout << "File not found.\n"; return 0; }

    char line[300];
    int lineno = 0;
    bool found = false;
    while(true)
    {
        fin.getline(line,300);
        if(fin.eof()) break;
        lineno++;
        int i=0;
        while(line[i] != '\0')
        {
            // if char not space, get word
            if(line[i] != ' ' && line[i] != '\t')
            {
                char w[100];
                extractWordAt(line, i, w);
                if(strEqual(w, key))
                {
                    cout << "Found on line " << lineno << "\n";
                    found = true;
                }
                // move i forward by word length
                int k=0; while(w[k]!='\0') k++;
                i += k;
            }
            else i++;
        }
    }
    fin.close();
    if(!found) cout << "Word not found.\n";
    return 0;
}
