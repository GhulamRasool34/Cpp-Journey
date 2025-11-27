/*
---------------------------------------------------------
 Pattern Name : Hollow Square
 Description  :
    This program prints a hollow square made of stars (*).
    The user enters the size (N), and the program prints:
        - Stars on the boundary
        - Spaces inside the square
    This is done using simple nested loops and conditions.

 Structure :
    Input  : Size of square (N)
    Logic  :
        - Outer loop controls rows
        - Inner loop prints:
            * Star for first row, last row,
              first column, last column
            * Space for all other positions
    Output : Hollow square pattern

 Example :
    Input : 5
    Output :
        * * * * *
        *       *
        *       *
        *       *
        * * * * *

 Learning Outcome :
    - Use of conditions inside nested loops
    - Boundary checking in patterns
    - Understanding hollow structures

 Technologies Used :
    - C++
    - iostream
    - Nested for-loops with if-else

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of the hollow square: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)    // Cover all borders
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}