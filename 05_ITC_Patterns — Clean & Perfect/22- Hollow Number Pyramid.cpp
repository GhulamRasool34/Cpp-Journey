/*
---------------------------------------------------------
 Pattern Name : Hollow Number Pyramid
 Description  :
    This program prints a centered hollow pyramid using 
    numbers. Each row has numbers on the borders and spaces 
    inside, forming a hollow structure.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - First inner loop prints spaces (N - row) for centering
        - Second inner loop prints numbers:
            * Number for first and last position in row
            * Space otherwise
    Output : Centered hollow number pyramid

 Example :
    Input : 5
    Output :
        1
       1 2
      1   3
     1     4
    1 2 3 4 5

 Learning Outcome :
    - Hollow pattern logic
    - Conditional printing of numbers
    - Centered alignment using nested loops

 Technologies Used :
    - C++
    - iostream
    - Nested loops with if-else conditions

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
        // Print spaces for centering
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print numbers and spaces
        for(int j = 1; j <= i; j++)
        {
            if(j == 1 || j == i || i == n)
                cout << j << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}