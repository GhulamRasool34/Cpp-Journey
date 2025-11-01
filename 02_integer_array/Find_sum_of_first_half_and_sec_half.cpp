#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];

    cout << "Enter six elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int firstSum = 0, secondSum = 0;

    for (int i = 0; i < size / 2; i++)
        firstSum += arr[i];

    for (int i = size / 2; i < size; i++)
        secondSum += arr[i];

    cout << "Sum of first half: " << firstSum << endl;
    cout << "Sum of second half: " << secondSum << endl;

    return 0;
}
