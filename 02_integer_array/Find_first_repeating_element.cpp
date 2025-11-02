#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    int arr[size];
    int repeat = -1;

    cout << "Enter 7 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                repeat = arr[i];
                break;
            }
        }
        if (repeat != -1)
            break;
    }

    if (repeat == -1)
        cout << "No repeating element found.";
    else
        cout << "First repeating element = " << repeat;

    return 0;
}