/*
---------------------------------------------------------
 Pattern Name : Diamond Pattern
 Description  :
    This program prints a symmetrical diamond shape using 
    stars (*). The user enters the number of rows (N) for 
    the upper half of the diamond. The program prints a 
    centered diamond with:
        - Top pyramid
        - Bottom inverted pyramid

 Structure :
    Input  : Number of rows for the upper half (N)
    Logic  :
        - Top part: Outer loop from 1 to N
            - Print spaces (N - i)
            - Print stars (2*i - 1)
        - Bottom part: Outer loop from N-1 down to 1
            - Print spaces (N - i)
            - Print stars (2*i - 1)
    Output : Symmetrical, perfectly centered diamond pattern

 Example :
    Input : 5
    Output :
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

 Learning Outcome :
    - Combining pyramid and inverted pyramid logic
    - Proper centered alignment using spaces
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

    cout << "Enter number of rows for the upper half of the diamond: ";
    cin >> n;

    // Top pyramid
    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom inverted pyramid
    for(int i = n - 1; i >= 1; i--)
    {
        // Spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}