/*
---------------------------------------------------------
 Project Name : Compare Two Files
 Description  :
    Compares two files character by character and reports
    whether they are identical or different.

 Features :
    - Character-level comparison

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
    char f1[100], f2[100];
    cout << "Enter first filename: ";
    cin.getline(f1, 100);
    cout << "Enter second filename: ";
    cin.getline(f2, 100);

    ifstream in1(f1), in2(f2);
    if (!in1 || !in2)
    {
        cout << "One or both files not found.\n";
        return 0;
    }

    char c1, c2;
    bool different = false;
    while (true)
    {
        in1.get(c1);
        bool r1 = !in1.fail();

        in2.get(c2);
        bool r2 = !in2.fail();

        if (!r1 && !r2)
            break;                // Both files ended → stop
        if (r1 != r2 || c1 != c2) // One ended early OR chars differ
        {
            different = true;
            break;
        }
    }

    in1.close();
    in2.close();

    if (different)
        cout << "Files are different.\n";
    else
        cout << "Files are identical.\n";
    return 0;
}
