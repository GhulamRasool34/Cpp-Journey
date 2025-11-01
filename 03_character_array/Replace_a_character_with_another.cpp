#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    char oldc, newc;
    cout << "Enter character to replace" << endl;
    cin >> oldc;
    cout << "Enter replacement character" << endl;
    cin >> newc;

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == oldc)
            str[i] = newc;
        i++;
    }

    cout << "Modified line: " << str << endl;

    return 0;
}