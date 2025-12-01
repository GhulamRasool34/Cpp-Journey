/*
---------------------------------------------------------
 Pattern Name : Alphabet Triangle
 Description  :
    This program prints a right-angled triangle using 
    alphabets. Each row starts from 'A' and increases 
    sequentially up to the row number.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Inner loop prints characters starting from 'A' up to row number
    Output : Right-angled alphabet triangle

 Example :
    Input : 5
    Output :
    A
    A B
    A B C
    A B C D
    A B C D E

 Learning Outcome :
    - Understanding character handling in loops
    - Row-wise alphabet printing
    - Nested loop practice with chars

 Technologies Used :
    - C++
    - iostream
    - Nested loops with char manipulation

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
        char ch = 'A';
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}