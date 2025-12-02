/*
---------------------------------------------------------
 Pattern Name : Alphabet Pyramid
 Description  :
    This program prints a centered pyramid using alphabets. 
    Each row starts from 'A' and increases sequentially 
    up to the row number, forming a pyramid shape.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - First inner loop prints spaces (N - row) for centering
        - Second inner loop prints alphabets from 'A' up to current row
    Output : Centered alphabet pyramid

 Example :
    Input : 5
    Output :
        A
       A B
      A B C
     A B C D
    A B C D E

 Learning Outcome :
    - Centered pyramid formation
    - Character sequencing in nested loops
    - Combining spaces and alphabets in loops

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
        // Print spaces for centering
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print alphabets
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