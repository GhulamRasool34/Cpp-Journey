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

    int maxFreq = 0;
    int element = arr[0];

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Element with highest frequency: " << element << endl;

    return 0;
}