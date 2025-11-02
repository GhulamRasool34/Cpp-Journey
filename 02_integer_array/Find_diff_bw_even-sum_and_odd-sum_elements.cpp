#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 6 elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << "Difference (evenSum - oddSum) = " << evenSum - oddSum;
    return 0;
}