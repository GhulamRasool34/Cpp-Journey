/*
---------------------------------------------------------
 Project Name : Create And Write To File
 Description  :
    Creates a file named data.txt and writes a line
    entered by the user into it.

 Features :
    - Create and write to file
    - Uses char arrays and manual helpers

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

// Prototypes
void clearStr(char s[], int n);

int main()
{
   char text[200];
   clearStr(text, 200);       // Used to make sure array has no Garbase value but is NULL.

   cout << "Enter text to write into file: ";
   cin.getline(text, 200);

   ofstream fout("data.txt");
   if (!fout)
   {
      cout << "Cannot create file.\n";
      return 0;
   }

   fout << text << "\n";
   fout.close();

   cout << "Written to data.txt successfully.\n";
   return 0;
}

void clearStr(char s[], int n)
{
   for (int i = 0; i < n; i++)
      s[i] = '\0';
}
