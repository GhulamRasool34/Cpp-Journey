#include <iostream>
using namespace std;

int main()
{
    const int size = 150;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    cout << "Without vowels: " << str << endl;

    return 0;
}