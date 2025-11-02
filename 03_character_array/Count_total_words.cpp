#include <iostream>
using namespace std;

int main()
{
    const int size = 200;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int count = 0, i = 0;
    bool inWord = false;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && !inWord)
        {
            inWord = true;
            count++;
        }
        else if (str[i] == ' ')
        {
            inWord = false;
        }
        i++;
    }

    cout << "Words: " << count << endl;

    return 0;
}