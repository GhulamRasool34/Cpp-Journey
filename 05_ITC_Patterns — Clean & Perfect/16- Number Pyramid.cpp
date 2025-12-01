/*
---------------------------------------------------------
 Pattern Name : Number Pyramid
 Description  :
    This program prints a centered pyramid with numbers. 
    Each row starts from 1 up to the row number, centered 
    with spaces to form a pyramid shape.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - First inner loop prints spaces (N - row)
        - Second inner loop prints numbers from 1 to row
    Output : Centered number pyramid

 Example :
    Input : 5
    Output :
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5

 Learning Outcome :
    - Centered pyramid logic
    - Combining spaces and numbers in loops

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
        // Print spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print numbers
        for(int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}