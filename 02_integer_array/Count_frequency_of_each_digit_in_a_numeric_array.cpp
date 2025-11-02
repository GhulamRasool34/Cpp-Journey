#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];
    int freq[10] = {0};

    cout << "Enter five single-digit numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    cout << "Frequency of digits:" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
            cout << i << " occurs " << freq[i] << " times" << endl;
    }

    return 0;
}