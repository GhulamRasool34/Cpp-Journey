#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];
    bool isPal = true;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            isPal = false;
            break;
        }
    }

    if (isPal)
        cout << "Array is palindrome.";
    else
        cout << "Array is not palindrome.";

    return 0;
}