#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        arr[i] = arr[i] * arr[i];

    cout << "Array after squaring each element: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}