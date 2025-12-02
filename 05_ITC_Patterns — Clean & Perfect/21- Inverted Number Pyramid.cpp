/*
---------------------------------------------------------
 Pattern Name : Inverted Number Pyramid
 Description  :
    This program prints a centered inverted pyramid using 
    numbers. Each row starts from 1 up to the current row 
    length, decreasing the number of elements each row.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop N down to 1 for rows
        - First inner loop prints spaces (N - row) for centering
        - Second inner loop prints numbers from 1 to row
    Output : Centered inverted number pyramid

 Example :
    Input : 5
    Output :
    1 2 3 4 5
     1 2 3 4
      1 2 3
       1 2
        1

 Learning Outcome :
    - Inverted pyramid logic
    - Centered alignment using spaces
    - Nested loops with numbers

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

    for(int i = n; i >= 1; i--)
    {
        // Spaces
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Numbers
        for(int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}