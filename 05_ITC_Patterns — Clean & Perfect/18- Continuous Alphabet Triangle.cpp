/*
---------------------------------------------------------
 Pattern Name : Continuous Alphabet Triangle
 Description  :
    This program prints a right-angled triangle of alphabets 
    where the letters continue sequentially across rows 
    instead of restarting from 'A' each row.

 Structure :
    Input  : Number of rows (N)
    Logic  :
        - Outer loop 1 to N for rows
        - Maintain a character counter starting from 'A'
        - Inner loop prints characters, incrementing the counter continuously
        - Wrap from 'Z' to 'A' if necessary
    Output : Right-angled continuous alphabet triangle

 Example :
    Input : 5
    Output :
    A
    B C
    D E F
    G H I J
    K L M N O

 Learning Outcome :
    - Sequential character manipulation
    - Nested loop practice with continuous character tracking
    - Handling character overflow (optional wrap-around)

 Technologies Used :
    - C++
    - iostream
    - Nested loops and char arithmetic

 Author : Ghulam Rasool
 Github : GhulamRasool34
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
            if(ch > 'Z')  // Wrap around to 'A' if exceeds 'Z'
                ch = 'A';
        }
        cout << endl;
    }

    return 0;
}