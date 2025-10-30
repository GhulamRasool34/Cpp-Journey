#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];

    cout << "Enter five elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int s = size; 

    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < s - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                s--;   
                j--;   
            }
        }
    }

    cout << "Array after removing duplicates:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}