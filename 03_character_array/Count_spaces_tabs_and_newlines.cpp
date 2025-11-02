#include <iostream>
using namespace std;

int main()
{
    const int size = 200;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int spaces = 0, tabs = 0, lines = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] == '\t')
            tabs++;
        else if (str[i] == '\n')
            lines++;
        i++;
    }

    cout << "Spaces: " << spaces << endl;
    cout << "Tabs: " << tabs << endl;
    cout << "Newlines: " << lines << endl;

    return 0;
}