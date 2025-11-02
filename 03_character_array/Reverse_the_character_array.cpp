#include <iostream>
using namespace std;

int main()
{
    const int size = 150;
    char str[size];

    cout << "Enter text" << endl;
    cin.getline(str, size);

    int len = 0;
    while (str[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed: " << str << endl;

    return 0;
}