#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size - 1; i++)
    {
        int next = -1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        arr[i] = next;
    }
    arr[size - 1] = -1;

    cout << "Array after replacing with next greater element: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}