#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str1[size], str2[size];

    cout << "Enter first text" << endl;
    cin.getline(str1, size);

    cout << "Enter second text" << endl;
    cin.getline(str2, size);

    int i = 0;
    bool same = true;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            same = false;
            break;
        }
        i++;
    }

    if (same)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}