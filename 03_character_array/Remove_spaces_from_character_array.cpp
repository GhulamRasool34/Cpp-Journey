#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    cout << "Without spaces: " << str << endl;

    return 0;
}