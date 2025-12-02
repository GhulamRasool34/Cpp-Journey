/*
---------------------------------------------------------
 Pattern Name : Repeating Row Alphabet Pattern
 Description  :
    This program prints a right-angled triangle where each row 
    contains the same alphabet repeated. The alphabet corresponds 
    to the row number starting from 'A'.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Determine the alphabet for the current row ('A' + row - 1)
        - Inner loop prints the same alphabet for the number of times equal to the row
    Output : Right-angled triangle with repeating row alphabets

 Example :
    Input : 5
    Output :
    A
    B B
    C C C
    D D D D
    E E E E E

 Learning Outcome :
    - Using character arithmetic in loops
    - Repeating a single value across a row
    - Nested loop practice

 Technologies Used :
    - C++
    - iostream
    - Nested loops with character arithmetic

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
        char ch = 'A' + i - 1; // Alphabet for current row
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}