#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char str[size];

    cout << "Enter a line" << endl;
    cin.getline(str, size);

    int len = 0;
    while (str[len] != '\0')
        len++;

    cout << "Length: " << len << endl;

    return 0;
}