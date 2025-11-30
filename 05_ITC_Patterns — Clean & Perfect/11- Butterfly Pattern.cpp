/*
---------------------------------------------------------
 Pattern Name : Butterfly Pattern
 Description  :
    This program prints a butterfly-shaped pattern using 
    stars (*). The user enters the number of rows (N) for 
    the upper half. The pattern consists of two mirrored 
    triangles forming a butterfly shape with spaces in the center.

 Structure :
    Input  : Number of rows for the upper half (N)
    Logic  :
        - Top half: Outer loop 1 to N
            - Print left stars equal to row number
            - Print spaces equal to 2*(N - row)
            - Print right stars equal to row number
        - Bottom half: Outer loop N down to 1
            - Same logic for mirrored bottom part
    Output : Symmetrical butterfly pattern

 Example :
    Input : 4
    Output :
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *

 Learning Outcome :
    - Combining two triangles in one line
    - Center spacing calculation
    - Symmetry using loops

 Technologies Used :
    - C++
    - iostream
    - Nested for-loops with spacing logic

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows for the butterfly pattern: ";
    cin >> n;

    // Top half
    for(int i = 1; i <= n; i++)
    {
        // Left stars
        for(int j = 1; j <= i; j++)
            cout << "*";

        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right stars
        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom half
    for(int i = n; i >= 1; i--)
    {
        // Left stars
        for(int j = 1; j <= i; j++)
            cout << "*";

        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right stars
        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}