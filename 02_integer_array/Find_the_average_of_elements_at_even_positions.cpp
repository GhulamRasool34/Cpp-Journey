#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];
    int sum = 0, count = 0;

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i += 2)
    {
        sum += arr[i];
        count++;
    }

    cout << "Average of even position elements = " << (float)sum / count;
    return 0;
}