/*
---------------------------------------------------------
 Pattern Name : Hollow Alphabet Pyramid
 Description  :
    This program prints a centered hollow pyramid using 
    alphabets. Each row has letters on the borders and 
    spaces inside, forming a hollow structure.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - First inner loop prints spaces (N - row) for centering
        - Second inner loop prints letters:
            * Letter for first and last position in row
            * Space otherwise
    Output : Centered hollow alphabet pyramid

 Example :
    Input : 5
    Output :
        A
       A B
      A   C
     A     D
    A B C D E

 Learning Outcome :
    - Hollow pattern logic with alphabets
    - Conditional printing inside nested loops
    - Centered alignment for pyramid structure

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
        // Print spaces for centering
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print letters and spaces
        for(int j = 1; j <= i; j++)
        {
            char ch = 'A' + j - 1;

            if(j == 1 || j == i || i == n)
                cout << ch << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}