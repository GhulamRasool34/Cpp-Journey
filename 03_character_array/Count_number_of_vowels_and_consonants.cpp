#include <iostream>
using namespace std;

int main()
{
    const int size = 120;
    char str[size];

    cout << "Enter text" << endl;
    cin.getline(str, size);

    int v = 0, c = 0, i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
        i++;
    }

    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;

    return 0;
}