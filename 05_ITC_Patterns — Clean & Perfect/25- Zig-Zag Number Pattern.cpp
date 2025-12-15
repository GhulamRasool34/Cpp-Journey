/*
---------------------------------------------------------
 Pattern Name : Zig-Zag Number Pattern
 Description  :
    This program prints numbers in a zig-zag pattern over 
    3 rows. The numbers increase from 1 to N in a zig-zag 
    manner, creating a wave-like effect.

 Structure :
    Input  : Number of elements (N)
    Logic  :
        - Iterate from 1 to N
        - Place numbers in 3 rows using modular arithmetic:
            * If (i + row) % 4 == 0 or i % 2 == 0 depending on row
            * Print number or space accordingly
    Output : Zig-Zag pattern over 3 rows

 Example :
    Input : 10
    Output :
      2   4   6   8  10
    1   3   5   7   9
      2   4   6   8  10

 Learning Outcome :
    - Modular arithmetic in pattern printing
    - Multi-row alignment
    - Logic for wave-like patterns

 Technologies Used :
    - C++
    - iostream
    - Nested loops and conditional logic

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int row = 1; row <= 3; row++)
    {
        for(int i = 1; i <= n; i++)
        {
            if ((row == 1 && i % 4 == 2) ||
                (row == 2 && i % 2 == 1) ||
                (row == 3 && i % 4 == 0))
                cout << i;
            else
                cout << " ";

            cout << " ";
        }
        cout << endl;
    }

    return 0;
}