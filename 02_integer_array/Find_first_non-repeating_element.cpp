#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    int arr[size];
    int nonRepeat = -1;

    cout << "Enter 7 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
        bool repeat = false;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                repeat = true;
                break;
            }
        }
        if (!repeat)
        {
            nonRepeat = arr[i];
            break;
        }
    }

    if (nonRepeat == -1)
        cout << "No non-repeating element found.";
    else
        cout << "First non-repeating element = " << nonRepeat;

    return 0;
}