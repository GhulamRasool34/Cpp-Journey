/*
---------------------------------------------------------
 Project Name : Check File Exists
 Description  :
    Checks whether a given filename exists in program folder.

 Features :
    - Simple file existence check

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

   cout << "Enter filename to check: ";
   cin.getline(fname, 100);

   ifstream fin(fname);
   if (fin)
   {
      cout << "File exists.\n";
      fin.close();
   }
   else
      cout << "File does not exist." << endl;

   return 0;
}