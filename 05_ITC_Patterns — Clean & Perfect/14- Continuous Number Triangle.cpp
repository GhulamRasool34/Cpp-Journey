/*
---------------------------------------------------------
 Pattern Name : Continuous Number Triangle
 Description  :
    This program prints a triangle of numbers where the 
    numbers increase continuously across rows instead of 
    starting from 1 in each row.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Inner loop prints numbers continuously
        - Maintain a counter to track numbers
    Output : Right-angled continuous number triangle

 Example :
    Input : 5
    Output :
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

 Learning Outcome :
    - Nested loop with continuous counting
    - Number sequencing across rows

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
    int n, count = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}