/*
---------------------------------------------------------
 Pattern Name : Right-Angled Triangle
 Description  :
    This program prints a simple right-angled triangle 
    using stars (*). The number of rows is given by the 
    user, and each row prints increasing stars from 1 to N.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop controls rows (1 to N)
        - Inner loop prints stars equal to the row number
    Output : Right-angled triangle pattern

 Example :
    Input : 5
    Output :
        *
        * *
        * * *
        * * * *
        * * * * *

 Learning Outcome :
    - Understanding increasing pattern logic
    - Basic nested loop flow
    - Row-based printing structure

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
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}