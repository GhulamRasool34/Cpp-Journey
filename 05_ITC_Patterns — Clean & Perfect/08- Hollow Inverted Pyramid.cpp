/*
---------------------------------------------------------
 Pattern Name : Hollow Inverted Pyramid
 Description  :
    This program prints a centered hollow inverted pyramid 
    using stars (*). The user enters the number of rows (N). 
    The pyramid has stars on the borders of each row and 
    spaces inside. The top row is completely filled.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop runs from N down to 1
        - First inner loop prints spaces (N - current row)
        - Second inner loop prints:
            * Star for first/last position in row or first row
            * Space otherwise
    Output : Centered hollow inverted pyramid pattern

 Example :
    Input : 5
    Output :
    * * * * *
     *     *
      *   *
       * *
        *

 Learning Outcome :
    - Understanding hollow patterns
    - Practice conditional logic inside nested loops
    - Learn spacing and alignment in inverted shapes

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

    for(int i = n; i >= 1; i--)
    {
        // Print spaces
        for(int s = 0; s < n - i; s++)
        {
            cout << "  ";
        }

        // Print stars and spaces
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            if(i == n || j == 1 || j == (2 * i - 1))
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}