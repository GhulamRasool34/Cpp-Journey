/*
---------------------------------------------------------
 Project Name : Read From File
 Description  :
    Reads and displays content of data.txt line by line.

 Features :
    - Read file using getline
    - Displays content to console

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

int main()
{
    ifstream fin("data.txt");
    if (!fin)
    {
        cout << "data.txt not found.\n";
        return 0;
    }

    char line[200];
    cout << "\n--- File Content ---\n";
    while (true)
    {
        fin.getline(line, 200);
        if (fin.eof())
            break;
        cout << line << endl;
    }
    fin.close();

    return 0;
}