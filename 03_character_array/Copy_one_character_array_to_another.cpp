#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str1[size], str2[size];

    cout << "Enter a line" << endl;
    cin.getline(str1, size);

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Copied text: " << str2 << endl;

    return 0;
}