/*
---------------------------------------------------------
 Pattern Name : Pyramid
 Description  :
    This program prints a centered pyramid made of stars (*).
    The user enters the number of rows (N), and each row 
    prints increasing stars in a centered triangular shape.
    
    The pyramid grows upward with each row containing:
        - Spaces on the left
        - Stars in the center

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop handles rows
        - First inner loop prints spaces (N - current row)
        - Second inner loop prints stars (2*row - 1)
    Output : Centered pyramid pattern

 Example :
    Input : 5
    Output :
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

 Learning Outcome :
    - Understanding space + star alignment
    - Centering patterns using spacing logic
    - Practice with mathematical pattern formulas

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

    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}