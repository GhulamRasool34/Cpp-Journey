#include <iostream>
using namespace std;

int main()
{
    const int size = 8;
    int arr[size];

    cout << "Enter 8 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int maxCount = 0, mode = arr[0];

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
            if (arr[j] == arr[i])
                count++;

        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    cout << "Mode = " << mode;
    
    return 0;
}