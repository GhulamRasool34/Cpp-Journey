/*
---------------------------------------------------------
 Project Name : Merge Two Files
 Description  :
    Merges file1 and file2 into merged.txt by appending.

 Features :
    - Appends content of second file after first into output file

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

void appendFile(const char src[], ofstream &out)
{
   ifstream in(src);
   char ch;
   while (in.get(ch))
      out.put(ch);
   in.close();
}

int main()
{
   char f1[100], f2[100];

   cout << "Enter first filename: ";
   cin.getline(f1, 100);

   cout << "Enter second filename: ";
   cin.getline(f2, 100);

   ofstream fout("merged.txt");
   if (!fout)
   {
      cout << "Cannot create merged.txt" << endl;
      return 0;
   }

   appendFile(f1, fout);
   appendFile(f2, fout);

   fout.close();
   cout << "Files merged into merged.txt" << endl;

   return 0;
}
