#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    int arr[size];

    cout << "Enter 7 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // Sort
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

    float median;
    if (size % 2 == 0)
        median = (arr[size/2 - 1] + arr[size/2]) / 2.0;
    else
        median = arr[size/2];

    cout << "Median = " << median;
    return 0;
}