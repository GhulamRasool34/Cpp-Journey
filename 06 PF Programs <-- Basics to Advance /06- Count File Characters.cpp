/*
---------------------------------------------------------
 Project Name : Count File Characters
 Description  :
    Counts total characters (including spaces & newlines) in file.

 Features :
    - Reads file character by character
    - Displays total character count

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
   cin.getline(fname, 100);

   ifstream fin(fname);
   if (!fin)
   {
      cout << "File not found.\n";
      return 0;
   }

   int count = 0;
   char ch;
   while (fin.get(ch))
   {
      count++;
   }
   fin.close();
   cout << "Total characters: " << count << "\n";

   return 0;
}
