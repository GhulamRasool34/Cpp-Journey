/*
---------------------------------------------------------
 Pattern Name : Right-Angled Triangle (Reverse)
 Description  :
    This program prints a reverse right-angled triangle 
    using stars (*). The triangle starts with N stars in 
    the first row and decreases by one star each row until 
    only one star remains.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop runs from N down to 1
        - Inner loop prints stars equal to the current row
        - Stars decrease every line
    Output : Upside/Reverse right-angled triangle

 Example :
    Input : 5
    Output :
        * * * * *
        * * * *
        * * *
        * *
        *

 Learning Outcome :
    - Understanding decreasing loop patterns
    - Practicing reverse nested loop logic
    - Strengthening control flow of loops

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
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}