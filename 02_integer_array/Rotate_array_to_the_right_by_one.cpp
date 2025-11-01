#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];

    cout << "Enter five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    cout << "Array after right rotation:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}