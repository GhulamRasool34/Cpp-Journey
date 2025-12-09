/*
---------------------------------------------------------
 Project Name : Count File Lines
 Description  :
    Counts number of lines in a file.

 Features :
    - Reads line by line and increments counter

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
      cout << "File not found." << endl;
      return 0;
   }

   int lines = 0;
   char line[300];

   while (fin.getline(line, 300))
   {
      lines++;
   }
   fin.close();
   cout << "Total lines: " << lines << endl;

   return 0;
}
