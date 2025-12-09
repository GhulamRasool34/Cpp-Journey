/*
---------------------------------------------------------
 Project Name : Copy File Content
 Description  :
    Copies content from source file to destination file.

 Features :
    - Copies full file content
    - Uses character-level copy

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
   char src[100], dest[100];

   cout << "Enter source filename: ";
   cin.getline(src, 100);

   cout << "Enter destination filename: ";
   cin.getline(dest, 100);

   ifstream fin(src);
   if (!fin)
   {
      cout << "Source file not found.\n";
      return 0;
   }

   ofstream fout(dest);
   if (!fout)
   {
      cout << "Cannot create destination file.\n";
      return 0;
   }

   char ch;
   while (fin.get(ch))
   {
      fout << ch;
   }
   cout << "File copied successfully.\n";

   return 0;
}
