/*
---------------------------------------------------------
 Project Name : Remove Duplicate Words
 Description  :
    Removes duplicate words in each line and writes output.

 Features :
    - Keeps first occurrence of each word per line
    - Simple per-line duplicate removal

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
    while(a[i]!='\0' || b[i]!='\0') { if(a[i]!=b[i]) return 0; i++; }
    return 1;
}

void extractWordAt(const char line[], int start, char word[], int &len)
{
    int i=start,j=0;
    while(line[i]!='\0' && line[i] != ' ' && line[i] != '\t') { word[j++]=line[i++]; }
    word[j]='\0'; len=j;
}

int wordExists(char words[][100], int count, const char w[])
{
    for(int i=0;i<count;i++) if(strEqual(words[i], w)) return 1;
    return 0;
}

int main()
{
    char fname[100];
    cout << "Enter filename: ";
    cin.getline(fname,100);

    ifstream fin(fname);
    if(!fin) { cout << "File not found.\n"; return 0; }
    ofstream fout("temp.txt");

    char line[500];
    while(true)
    {
        fin.getline(line,500);
        if(fin.eof()) break;
        char seen[100][100];
        int sc = 0;
        int i=0;
        bool firstOut = true;
        while(line[i] != '\0')
        {
            if(line[i] != ' ' && line[i] != '\t')
            {
                char w[100];
                int len;
                extractWordAt(line,i,w,len);
                if(!wordExists(seen, sc, w))
                {
                    // output with space if needed
                    if(!firstOut) fout << ' ';
                    fout << w;
                    // store seen
                    int k=0;
                    while(w[k] != '\0') { seen[sc][k] = w[k]; k++; }
                    seen[sc][k] = '\0';
                    sc++;
                    firstOut = false;
                }
                i += len;
            }
            else { fout << line[i]; i++; }
        }
        fout << "\n";
    }

    fin.close(); fout.close();
    remove(fname); rename("temp.txt", fname);
    cout << "Duplicate words removed per line.\n";
    return 0;
}
