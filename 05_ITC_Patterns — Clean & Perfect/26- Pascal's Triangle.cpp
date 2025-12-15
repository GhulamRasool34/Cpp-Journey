/*
---------------------------------------------------------
 Pattern Name : Pascal's Triangle
 Description  :
    This program prints Pascal's Triangle up to N rows. 
    Each number is the sum of the two numbers directly above 
    it in the previous row.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 0 to N-1 for rows
        - Use a variable 'coef' to calculate combinations
        - Inner loop prints each coefficient in row using formula:
            * coef = coef * (row - j) / (j + 1)
    Output : Centered Pascal's Triangle

 Example :
    Input : 5
    Output :
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1

 Learning Outcome :
    - Calculating combinatorial numbers
    - Nested loop and arithmetic operations
    - Centered triangle alignment

 Technologies Used :
    - C++
    - iostream
    - Nested loops with combinatorial logic

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

    for(int i = 0; i < n; i++)
    {
        int coef = 1;
        // Spaces for centering
        for(int s = 0; s < n - i - 1; s++)
            cout << " ";

        for(int j = 0; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}