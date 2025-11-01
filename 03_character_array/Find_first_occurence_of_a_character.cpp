#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    char ch;
    cout << "Enter character to find" << endl;
    cin >> ch;

    int pos = -1;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            pos = i;
            break;
        }
        i++;
    }

    if (pos == -1)
        cout << "Character not found" << endl;
    else
        cout << "First occurrence at index: " << pos << endl;

    return 0;
}