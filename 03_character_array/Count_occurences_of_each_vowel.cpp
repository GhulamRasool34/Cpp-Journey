#include <iostream>
using namespace std;

int main()
{
    const int size = 200;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int a = 0, e = 0, iCount = 0, o = 0, u = 0, k = 0;
    while (str[k] != '\0')
    {
        char c = str[k];
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        if (c == 'a') a++;
        else if (c == 'e') e++;
        else if (c == 'i') iCount++;
        else if (c == 'o') o++;
        else if (c == 'u') u++;
        k++;
    }

    cout << "a:" << a << " e:" << e << " i:" << iCount << " o:" << o << " u:" << u << endl;

    return 0;
}