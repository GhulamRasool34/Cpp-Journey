#include <iostream>
using namespace std;

int main()
{
    const int size = 200;
    char str1[size], str2[size];

    cout << "Enter first text" << endl;
    cin.getline(str1, size);

    cout << "Enter second text" << endl;
    cin.getline(str2, size);

    int i = 0;
    while (str1[i] != '\0')
        i++;

    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    cout << "Concatenated: " << str1 << endl;

    return 0;
}