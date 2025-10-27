#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {0};

    cout << "Enter the five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int evenSum = 0, oddSum = 0; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    cout << "Sum of even nummber/s: " << evenSum << endl;
    cout << "Sum of Odd NUmber/s: " << oddSum << endl;

    return 0;
}