#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int len = 0;
    while (str[len] != '\0')
        len++;

    int i = 0, j = len - 1;
    bool pal = true;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            pal = false;
            break;
        }
        i++;
        j--;
    }

    if (pal)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}