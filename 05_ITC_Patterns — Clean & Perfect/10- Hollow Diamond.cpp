/*
---------------------------------------------------------
 Pattern Name : Hollow Diamond
 Description  :
    This program prints a hollow symmetrical diamond using 
    stars (*). The user enters the number of rows (N) for 
    the upper half. The diamond has stars on the borders and 
    spaces inside, creating a hollow shape.

 Structure :
    Input  : Number of rows for the upper half (N)
    Logic  :
        - Top part: Outer loop 1 to N
            - Print spaces (N - i)
            - Print stars: star for first/last position of row, space otherwise
        - Bottom part: Outer loop N-1 down to 1
            - Print spaces (N - i)
            - Print stars: star for first/last position of row, space otherwise
    Output : Hollow, centered diamond pattern

 Example :
    Input : 5
    Output :
        *
       * *
      *   *
     *     *
    *       *
     *     *
      *   *
       * *
        *

 Learning Outcome :
    - Hollow pattern logic
    - Centering and spacing with nested loops
    - Conditional printing within loops

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

    cout << "Enter number of rows for the upper half of the hollow diamond: ";
    cin >> n;

    // Top hollow pyramid
    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print stars and spaces
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Bottom hollow inverted pyramid
    for(int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print stars and spaces
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}