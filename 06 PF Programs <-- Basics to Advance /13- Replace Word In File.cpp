/*
---------------------------------------------------------
 Project Name : Replace Word In File
 Description  :
    Replaces first occurrence of a word with another word
    using a temporary file rewrite.

 Features :
    - Replace using temp file
    - Manual parsing and comparison

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

void extractWordAt(const char line[], int start, char word[], int &len)
{
    int i = start, j = 0;
    while(line[i] != '\0' && line[i] != ' ' && line[i] != '\t' && line[i] != '\r' && line[i] != '\n')
    {
        word[j++] = line[i++];
    }
    word[j] = '\0';
    len = j;
}

int main()
{
    char fname[100], oldw[50], neww[50];
    cout << "Enter filename: ";
    cin.getline(fname,100);
    cout << "Enter word to replace: ";
    cin.getline(oldw,50);
    cout << "Enter new word: ";
    cin.getline(neww,50);

    ifstream fin(fname);
    if(!fin) { cout << "File not found.\n"; return 0; }
    ofstream fout("temp.txt");

    char line[400];
    bool replaced = false;
    while(true)
    {
        fin.getline(line,400);
        if(fin.eof()) break;

        int i=0;
        while(line[i] != '\0')
        {
            if(line[i] != ' ' && line[i] != '\t')
            {
                char w[100];
                int len;
                extractWordAt(line,i,w,len);
                if(!replaced && strEqual(w, oldw))
                {
                    fout << neww;
                    replaced = true;
                }
                else
                {
                    fout << w;
                }
                i += len;
            }
            else
            {
                fout << line[i];
                i++;
            }
        }
        fout << "\n";
    }
    fin.close(); fout.close();

    remove(fname);
    rename("temp.txt", fname);
    if(replaced) cout << "Replacement done.\n";
    else cout << "Word not found.\n";
    return 0;
}
