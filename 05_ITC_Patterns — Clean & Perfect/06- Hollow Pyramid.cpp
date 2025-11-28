/*
---------------------------------------------------------
 Pattern Name : Hollow Pyramid
 Description  :
    This program prints a centered hollow pyramid using stars (*).
    The user enters the number of rows (N). The pyramid has stars 
    on the borders and spaces inside. The base is completely filled 
    with stars.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop handles rows (1 to N)
        - First inner loop prints spaces (N - current row)
        - Second inner loop prints:
            * Star for first/last position in row or last row
            * Space otherwise
    Output : Centered hollow pyramid pattern

 Example :
    Input : 5
    Output :
            *
           * *
          *   *
         *     *
        * * * * *

 Learning Outcome :
    - Understanding hollow patterns
    - Practice with conditional logic inside nested loops
    - Learn spacing and alignment in console output

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

    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        // Print stars and spaces
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            if(j == 1 || j == (2 * i - 1) || i == n)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}