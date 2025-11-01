#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int vowels = 0, consonants = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        if ((c >= 'a' && c <= 'z'))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}