#include <iostream>
using namespace std;

int main()
{
    const int size = 120;
    char str[size];

    cout << "Enter text" << endl;
    cin.getline(str, size);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }

    cout << "Toggled case: " << str << endl;

    return 0;
}