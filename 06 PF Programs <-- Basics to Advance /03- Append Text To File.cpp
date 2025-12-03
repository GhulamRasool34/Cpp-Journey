/*
---------------------------------------------------------
 Project Name : Append Text To File
 Description  :
    Appends a line entered by the user to data.txt.

 Features :
    - Append to existing file
    - If file doesn't exist creates it

 Technologies Used :
    - C++
    - iostream
    - fstream
    - Character Arrays

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

void clearStr(char s[], int n);

int main()
{
   char text[200];
   clearStr(text, 200);

   cout << "Enter text to append: ";
   cin.getline(text, 200);

   ofstream fout("data.txt", ios::app);
   if (!fout)
   {
      cout << "Cannot open file.\n";
      return 0;
   }

   fout << text << endl;
   fout.close();
   cout << "Appended successfully.\n";

   return 0;
}

void clearStr(char s[], int n)
{
   for (int i = 0; i < n; i++)
      s[i] = '\0';
}
