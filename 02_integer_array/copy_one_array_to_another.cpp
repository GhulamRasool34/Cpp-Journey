#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr1[size], arr2[size];

    cout << "Enter five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Copied array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}