#include <iostream>
using namespace std;

int main()
{
    const int size = 4;
    int arr[size];

    cout << "Enter four elements from 1 to 5 (one missing)" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    int total = 5 * (5 + 1) / 2;
    cout << "Missing number is: " << total - sum << endl;

    return 0;
}