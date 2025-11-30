/*
---------------------------------------------------------
 Pattern Name : Repeating Row Number Pattern
 Description  :
    This program prints a triangle where each row contains 
    the same number repeated. The number corresponds to the 
    row number.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Inner loop prints the row number repeatedly
    Output : Right-angled triangle with repeating row numbers

 Example :
    Input : 5
    Output :
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

 Learning Outcome :
    - Conditional value usage in loops
    - Repeating patterns logic

 Technologies Used :
    - C++
    - iostream
    - Nested loops

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
            cout << i << " ";
        cout << endl;
    }

    return 0;
}