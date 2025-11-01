#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size], sum;

    cout << "Enter five elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum" << endl;
    cin >> sum;

    cout << "Pairs with given sum:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
        }
    }

    return 0;
}