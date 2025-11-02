#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];
    float sum = 0;

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / size;
    int count = 0;

    for (int i = 0; i < size; i++)
        if (arr[i] > avg)
            count++;

    cout << "Average = " << avg << endl;
    cout << "Count of elements greater than average = " << count;
    return 0;
}