/*
---------------------------------------------------------
 Project Name : Overwrite File Content
 Description  :
    Overwrites data.txt with new content provided by user.

 Features :
    - Overwrite file content
    - Uses truncation by default

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

   cout << "Enter new content to overwrite file: ";
   cin.getline(text, 200);

   ofstream fout("data.txt");
   if (!fout)
   {
      cout << "Cannot open file.\n";
      return 0;
   }
   fout << text << "\n";
   fout.close();
   cout << "File overwritten.\n";

   return 0;
}

void clearStr(char s[], int n)
{
   for (int i = 0; i < n; i++)
      s[i] = '\0';
}
