/*
---------------------------------------------------------
 Pattern Name : Number Triangle
 Description  :
    This program prints a triangle of numbers. Each row 
    starts from 1 and increases sequentially up to the row 
    number.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Inner loop 1 to current row to print numbers
    Output : Right-angled number triangle

 Example :
    Input : 5
    Output :
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

 Learning Outcome :
    - Practice nested loops
    - Row-wise number printing
    - Basic loop logic

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
            cout << j << " ";
        cout << endl;
    }

    return 0;
}