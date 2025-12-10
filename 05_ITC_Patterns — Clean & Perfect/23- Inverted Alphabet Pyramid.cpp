/*
---------------------------------------------------------
 Pattern Name : Inverted Alphabet Pyramid
 Description  :
    This program prints a centered inverted pyramid using 
    alphabets. Each row starts from 'A' and increases up to 
    the row length, with the number of letters decreasing 
    each row.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop N down to 1 for rows
        - First inner loop prints spaces (N - row) for centering
        - Second inner loop prints letters from 'A' up to row number
    Output : Centered inverted alphabet pyramid

 Example :
    Input : 5
    Output :
    A B C D E
     A B C D
      A B C
       A B
        A

 Learning Outcome :
    - Inverted pyramid logic with alphabets
    - Centered alignment using spaces
    - Nested loops with char arithmetic

 Technologies Used :
    - C++
    - iostream
    - Nested loops with character handling

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
        // Print spaces for centering
        for(int s = 1; s <= n - i; s++)
            cout << " ";

        // Print letters
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