/*
---------------------------------------------------------
 Pattern Name : Hourglass Pattern
 Description  :
    This program prints an hourglass-shaped pattern using 
    stars (*). The user enters the number of rows (N) for 
    the top half. The pattern consists of:
        - Top inverted pyramid
        - Bottom pyramid
    forming a symmetric hourglass shape.

 Structure :
    Input  : Number of rows for the top half (N)
    Logic  :
        - Top half: Outer loop N down to 1
            - Print spaces (N - row)
            - Print stars (2*row - 1)
        - Bottom half: Outer loop 2 to N
            - Print spaces (N - row)
            - Print stars (2*row - 1)
    Output : Symmetrical hourglass pattern

 Example :
    Input : 5
    Output :
    *********
     *******
      *****
       ***
        *
       ***
      *****
     *******
    *********

 Learning Outcome :
    - Combining inverted pyramid and pyramid logic
    - Centered alignment using spaces
    - Nested loop mastery

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

    cout << "Enter number of rows for the hourglass pattern: ";
    cin >> n;

    // Top inverted pyramid
    for(int i = n; i >= 1; i--)
    {
        // Spaces
        for(int s = 0; s < n - i; s++)
            cout << " ";

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom pyramid
    for(int i = 2; i <= n; i++)
    {
        // Spaces
        for(int s = 0; s < n - i; s++)
            cout << " ";

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}