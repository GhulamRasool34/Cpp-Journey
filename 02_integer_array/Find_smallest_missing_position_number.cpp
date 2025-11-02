#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int missing = 1;
    bool found = true;

    while (true)
    {
        found = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == missing)
            {
                found = true;
                break;
            }
        }
        if (!found)
            break;
        missing++;
    }

    cout << "Smallest missing positive number = " << missing;
    return 0;
}