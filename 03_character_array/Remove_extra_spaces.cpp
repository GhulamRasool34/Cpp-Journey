#include <iostream>
using namespace std;

int main()
{
    const int size = 200;
    char str[size];

    cout << "Enter text" << endl;
    cin.getline(str, size);

    int i = 0, j = 0;
    bool space = false;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
            space = false;
        }
        else if (!space)
        {
            str[j] = ' ';
            j++;
            space = true;
        }
        i++;
    }
    str[j] = '\0';

    cout << "Clean text: " << str << endl;

    return 0;
}