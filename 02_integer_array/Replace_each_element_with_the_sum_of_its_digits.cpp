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
    {
        int num = arr[i], sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        arr[i] = sum;
    }

    cout << "Array after replacing each element with sum of digits: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}