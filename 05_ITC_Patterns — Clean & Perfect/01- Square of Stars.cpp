/*
---------------------------------------------------------
 Pattern Name : Square of Stars
 Description  :
    This program prints a square made of stars (*). 
    The user enters the size (N), and the program prints 
    N rows and N columns using simple nested loops.

 Structure :
    Input  : Size of square (N)
    Logic  : Two nested loops 
             - Outer loop controls rows
             - Inner loop prints stars in each row
    Output : Square-shaped star pattern

 Example :
    Input : 4
    Output :
        * * * *
        * * * *
        * * * *
        * * * *

 Learning Outcome :
    - Practice nested loops
    - Pattern building basics
    - Row/column logic understanding

 Technologies Used :
    - C++
    - iostream
    - Nested for-loops

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of the square: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}