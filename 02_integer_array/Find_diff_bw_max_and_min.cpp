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

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Difference between max and min: " << max - min << endl;

    return 0;
}