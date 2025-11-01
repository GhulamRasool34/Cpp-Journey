#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    char ch;
    cout << "Enter character to count" << endl;
    cin >> ch;

    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }

    cout << "Frequency of " << ch << ": " << count << endl;

    return 0;
}