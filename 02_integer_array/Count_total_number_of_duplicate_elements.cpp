#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];
    int count = 0;

    cout << "Enter five elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout << "Total duplicate elements: " << count << endl;
    return 0;
}