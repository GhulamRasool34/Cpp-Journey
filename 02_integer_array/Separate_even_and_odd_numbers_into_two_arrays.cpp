#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size], even[size], odd[size];
    int e = 0, o = 0;

    cout << "Enter five elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    cout << "Even elements:" << endl;
    for (int i = 0; i < e; i++)
        cout << even[i] << " ";

    cout << "\nOdd elements:" << endl;
    for (int i = 0; i < o; i++)
        cout << odd[i] << " ";

    return 0;
}