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

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Smallest: " << min << endl;
    cout << "Largest: " << max << endl;

    return 0;
}