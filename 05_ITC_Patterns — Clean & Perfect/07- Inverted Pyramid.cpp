/*
---------------------------------------------------------
 Pattern Name : Inverted Pyramid
 Description  :
    This program prints an inverted pyramid made of stars (*).
    The user enters the number of rows (N). The pyramid starts 
    with the maximum stars at the top and decreases each row 
    downward while remaining centered.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop runs from N down to 1
        - First inner loop prints spaces (N - current row)
        - Second inner loop prints stars (2*row - 1)
    Output : Centered inverted pyramid pattern

 Example :
    Input : 5
    Output :
    * * * * *
     * * * *
      * * *
       * *
        *

 Learning Outcome :
    - Practice decreasing nested loop patterns
    - Understanding space alignment for inverted shapes
    - Combining loops and spacing logic

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

    for(int i = n; i >= 1; i--)
    {
        // Print spaces
        for(int s = 0; s < n - i; s++)
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